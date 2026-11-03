// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__77(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__77\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3401__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3401__part 
                            = vlSelf->__Vfunc_leading_zero32__3401__value;
                        vlSelf->__Vfunc_leading_zero32__3401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                            vlSelf->__Vfunc_leading_zero32__3401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3413__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3413__part 
                            = vlSelf->__Vfunc_leading_zero32__3413__value;
                        vlSelf->__Vfunc_leading_zero32__3413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                            vlSelf->__Vfunc_leading_zero32__3413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3425__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3425__part 
                            = vlSelf->__Vfunc_leading_zero32__3425__value;
                        vlSelf->__Vfunc_leading_zero32__3425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                            vlSelf->__Vfunc_leading_zero32__3425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3425__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3437__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3437__part 
                            = vlSelf->__Vfunc_leading_zero32__3437__value;
                        vlSelf->__Vfunc_leading_zero32__3437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                            vlSelf->__Vfunc_leading_zero32__3437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3449__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3449__part 
                            = vlSelf->__Vfunc_leading_zero32__3449__value;
                        vlSelf->__Vfunc_leading_zero32__3449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                            vlSelf->__Vfunc_leading_zero32__3449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3461__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3461__part 
                            = vlSelf->__Vfunc_leading_zero32__3461__value;
                        vlSelf->__Vfunc_leading_zero32__3461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                            vlSelf->__Vfunc_leading_zero32__3461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3461__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3473__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3473__part 
                            = vlSelf->__Vfunc_leading_zero32__3473__value;
                        vlSelf->__Vfunc_leading_zero32__3473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                            vlSelf->__Vfunc_leading_zero32__3473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3485__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3485__part 
                            = vlSelf->__Vfunc_leading_zero32__3485__value;
                        vlSelf->__Vfunc_leading_zero32__3485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                            vlSelf->__Vfunc_leading_zero32__3485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3497__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3497__part 
                            = vlSelf->__Vfunc_leading_zero32__3497__value;
                        vlSelf->__Vfunc_leading_zero32__3497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                            vlSelf->__Vfunc_leading_zero32__3497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3497__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3509__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3509__part 
                            = vlSelf->__Vfunc_leading_zero32__3509__value;
                        vlSelf->__Vfunc_leading_zero32__3509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                            vlSelf->__Vfunc_leading_zero32__3509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3521__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3521__part 
                            = vlSelf->__Vfunc_leading_zero32__3521__value;
                        vlSelf->__Vfunc_leading_zero32__3521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                            vlSelf->__Vfunc_leading_zero32__3521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3533__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3533__part 
                            = vlSelf->__Vfunc_leading_zero32__3533__value;
                        vlSelf->__Vfunc_leading_zero32__3533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                            vlSelf->__Vfunc_leading_zero32__3533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3533__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3545__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3545__part 
                            = vlSelf->__Vfunc_leading_zero32__3545__value;
                        vlSelf->__Vfunc_leading_zero32__3545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                            vlSelf->__Vfunc_leading_zero32__3545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3557__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3557__part 
                            = vlSelf->__Vfunc_leading_zero32__3557__value;
                        vlSelf->__Vfunc_leading_zero32__3557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                            vlSelf->__Vfunc_leading_zero32__3557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3569__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3569__part 
                            = vlSelf->__Vfunc_leading_zero32__3569__value;
                        vlSelf->__Vfunc_leading_zero32__3569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                            vlSelf->__Vfunc_leading_zero32__3569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3569__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3581__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3581__part 
                            = vlSelf->__Vfunc_leading_zero32__3581__value;
                        vlSelf->__Vfunc_leading_zero32__3581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                            vlSelf->__Vfunc_leading_zero32__3581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3581__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3593__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3593__part 
                            = vlSelf->__Vfunc_leading_zero32__3593__value;
                        vlSelf->__Vfunc_leading_zero32__3593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                            vlSelf->__Vfunc_leading_zero32__3593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3593__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3605__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3605__part 
                            = vlSelf->__Vfunc_leading_zero32__3605__value;
                        vlSelf->__Vfunc_leading_zero32__3605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                            vlSelf->__Vfunc_leading_zero32__3605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3605__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3617__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3617__part 
                            = vlSelf->__Vfunc_leading_zero32__3617__value;
                        vlSelf->__Vfunc_leading_zero32__3617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                            vlSelf->__Vfunc_leading_zero32__3617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3617__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3629__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3629__part 
                            = vlSelf->__Vfunc_leading_zero32__3629__value;
                        vlSelf->__Vfunc_leading_zero32__3629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                            vlSelf->__Vfunc_leading_zero32__3629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3629__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3641__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3641__part 
                            = vlSelf->__Vfunc_leading_zero32__3641__value;
                        vlSelf->__Vfunc_leading_zero32__3641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                            vlSelf->__Vfunc_leading_zero32__3641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3641__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3653__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3653__part 
                            = vlSelf->__Vfunc_leading_zero32__3653__value;
                        vlSelf->__Vfunc_leading_zero32__3653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                            vlSelf->__Vfunc_leading_zero32__3653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3653__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3665__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3665__part 
                            = vlSelf->__Vfunc_leading_zero32__3665__value;
                        vlSelf->__Vfunc_leading_zero32__3665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                            vlSelf->__Vfunc_leading_zero32__3665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3665__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3677__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3677__part 
                            = vlSelf->__Vfunc_leading_zero32__3677__value;
                        vlSelf->__Vfunc_leading_zero32__3677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                            vlSelf->__Vfunc_leading_zero32__3677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3677__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3689__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3689__part 
                            = vlSelf->__Vfunc_leading_zero32__3689__value;
                        vlSelf->__Vfunc_leading_zero32__3689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                            vlSelf->__Vfunc_leading_zero32__3689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3689__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3701__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3701__part 
                            = vlSelf->__Vfunc_leading_zero32__3701__value;
                        vlSelf->__Vfunc_leading_zero32__3701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                            vlSelf->__Vfunc_leading_zero32__3701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3701__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3713__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3713__part 
                            = vlSelf->__Vfunc_leading_zero32__3713__value;
                        vlSelf->__Vfunc_leading_zero32__3713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                            vlSelf->__Vfunc_leading_zero32__3713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3713__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3725__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3725__part 
                            = vlSelf->__Vfunc_leading_zero32__3725__value;
                        vlSelf->__Vfunc_leading_zero32__3725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                            vlSelf->__Vfunc_leading_zero32__3725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3725__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3737__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3737__part 
                            = vlSelf->__Vfunc_leading_zero32__3737__value;
                        vlSelf->__Vfunc_leading_zero32__3737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                            vlSelf->__Vfunc_leading_zero32__3737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3737__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3749__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3749__part 
                            = vlSelf->__Vfunc_leading_zero32__3749__value;
                        vlSelf->__Vfunc_leading_zero32__3749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                            vlSelf->__Vfunc_leading_zero32__3749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3749__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3761__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3761__part 
                            = vlSelf->__Vfunc_leading_zero32__3761__value;
                        vlSelf->__Vfunc_leading_zero32__3761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                            vlSelf->__Vfunc_leading_zero32__3761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3761__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3773__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3773__part 
                            = vlSelf->__Vfunc_leading_zero32__3773__value;
                        vlSelf->__Vfunc_leading_zero32__3773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                            vlSelf->__Vfunc_leading_zero32__3773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3773__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3785__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3785__part 
                            = vlSelf->__Vfunc_leading_zero32__3785__value;
                        vlSelf->__Vfunc_leading_zero32__3785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                            vlSelf->__Vfunc_leading_zero32__3785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3785__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3797__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3797__part 
                            = vlSelf->__Vfunc_leading_zero32__3797__value;
                        vlSelf->__Vfunc_leading_zero32__3797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                            vlSelf->__Vfunc_leading_zero32__3797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3797__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3809__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3809__part 
                            = vlSelf->__Vfunc_leading_zero32__3809__value;
                        vlSelf->__Vfunc_leading_zero32__3809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                            vlSelf->__Vfunc_leading_zero32__3809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3809__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3821__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3821__part 
                            = vlSelf->__Vfunc_leading_zero32__3821__value;
                        vlSelf->__Vfunc_leading_zero32__3821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                            vlSelf->__Vfunc_leading_zero32__3821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3821__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3833__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3833__part 
                            = vlSelf->__Vfunc_leading_zero32__3833__value;
                        vlSelf->__Vfunc_leading_zero32__3833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                            vlSelf->__Vfunc_leading_zero32__3833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3833__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3845__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3845__part 
                            = vlSelf->__Vfunc_leading_zero32__3845__value;
                        vlSelf->__Vfunc_leading_zero32__3845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                            vlSelf->__Vfunc_leading_zero32__3845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3845__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3857__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3857__part 
                            = vlSelf->__Vfunc_leading_zero32__3857__value;
                        vlSelf->__Vfunc_leading_zero32__3857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                            vlSelf->__Vfunc_leading_zero32__3857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3857__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3869__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3869__part 
                            = vlSelf->__Vfunc_leading_zero32__3869__value;
                        vlSelf->__Vfunc_leading_zero32__3869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                            vlSelf->__Vfunc_leading_zero32__3869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3869__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3881__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3881__part 
                            = vlSelf->__Vfunc_leading_zero32__3881__value;
                        vlSelf->__Vfunc_leading_zero32__3881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                            vlSelf->__Vfunc_leading_zero32__3881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3881__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3893__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3893__part 
                            = vlSelf->__Vfunc_leading_zero32__3893__value;
                        vlSelf->__Vfunc_leading_zero32__3893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                            vlSelf->__Vfunc_leading_zero32__3893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3893__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3905__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3905__part 
                            = vlSelf->__Vfunc_leading_zero32__3905__value;
                        vlSelf->__Vfunc_leading_zero32__3905__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3905__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                            vlSelf->__Vfunc_leading_zero32__3905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3905__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3905__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3905__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3905__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3905__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3905__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3905__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3905__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3917__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3917__part 
                            = vlSelf->__Vfunc_leading_zero32__3917__value;
                        vlSelf->__Vfunc_leading_zero32__3917__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3917__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                            vlSelf->__Vfunc_leading_zero32__3917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3917__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3917__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3917__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3917__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3917__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3917__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3917__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3917__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3929__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3929__part 
                            = vlSelf->__Vfunc_leading_zero32__3929__value;
                        vlSelf->__Vfunc_leading_zero32__3929__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3929__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                            vlSelf->__Vfunc_leading_zero32__3929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3929__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3929__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3929__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3929__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3929__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3929__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3929__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3929__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3941__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3941__part 
                            = vlSelf->__Vfunc_leading_zero32__3941__value;
                        vlSelf->__Vfunc_leading_zero32__3941__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3941__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                            vlSelf->__Vfunc_leading_zero32__3941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3941__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3941__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3941__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3941__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3941__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3941__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3941__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3941__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3953__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3953__part 
                            = vlSelf->__Vfunc_leading_zero32__3953__value;
                        vlSelf->__Vfunc_leading_zero32__3953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                            vlSelf->__Vfunc_leading_zero32__3953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3953__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3965__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3965__part 
                            = vlSelf->__Vfunc_leading_zero32__3965__value;
                        vlSelf->__Vfunc_leading_zero32__3965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                            vlSelf->__Vfunc_leading_zero32__3965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3965__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3977__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3977__part 
                            = vlSelf->__Vfunc_leading_zero32__3977__value;
                        vlSelf->__Vfunc_leading_zero32__3977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                            vlSelf->__Vfunc_leading_zero32__3977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3977__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3989__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3989__part 
                            = vlSelf->__Vfunc_leading_zero32__3989__value;
                        vlSelf->__Vfunc_leading_zero32__3989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                            vlSelf->__Vfunc_leading_zero32__3989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3989__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4001__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4001__part 
                            = vlSelf->__Vfunc_leading_zero32__4001__value;
                        vlSelf->__Vfunc_leading_zero32__4001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                            vlSelf->__Vfunc_leading_zero32__4001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4001__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4013__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4013__part 
                            = vlSelf->__Vfunc_leading_zero32__4013__value;
                        vlSelf->__Vfunc_leading_zero32__4013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                            vlSelf->__Vfunc_leading_zero32__4013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4013__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4025__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4025__part 
                            = vlSelf->__Vfunc_leading_zero32__4025__value;
                        vlSelf->__Vfunc_leading_zero32__4025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                            vlSelf->__Vfunc_leading_zero32__4025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4025__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4037__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4037__part 
                            = vlSelf->__Vfunc_leading_zero32__4037__value;
                        vlSelf->__Vfunc_leading_zero32__4037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                            vlSelf->__Vfunc_leading_zero32__4037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4037__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4049__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4049__part 
                            = vlSelf->__Vfunc_leading_zero32__4049__value;
                        vlSelf->__Vfunc_leading_zero32__4049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                            vlSelf->__Vfunc_leading_zero32__4049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4049__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4061__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4061__part 
                            = vlSelf->__Vfunc_leading_zero32__4061__value;
                        vlSelf->__Vfunc_leading_zero32__4061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                            vlSelf->__Vfunc_leading_zero32__4061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4061__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4073__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4073__part 
                            = vlSelf->__Vfunc_leading_zero32__4073__value;
                        vlSelf->__Vfunc_leading_zero32__4073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                            vlSelf->__Vfunc_leading_zero32__4073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4073__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4085__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4085__part 
                            = vlSelf->__Vfunc_leading_zero32__4085__value;
                        vlSelf->__Vfunc_leading_zero32__4085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                            vlSelf->__Vfunc_leading_zero32__4085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4085__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4097__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4097__part 
                            = vlSelf->__Vfunc_leading_zero32__4097__value;
                        vlSelf->__Vfunc_leading_zero32__4097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                            vlSelf->__Vfunc_leading_zero32__4097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4097__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4109__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4109__part 
                            = vlSelf->__Vfunc_leading_zero32__4109__value;
                        vlSelf->__Vfunc_leading_zero32__4109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                            vlSelf->__Vfunc_leading_zero32__4109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4109__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4121__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4121__part 
                            = vlSelf->__Vfunc_leading_zero32__4121__value;
                        vlSelf->__Vfunc_leading_zero32__4121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                            vlSelf->__Vfunc_leading_zero32__4121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4121__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4133__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4133__part 
                            = vlSelf->__Vfunc_leading_zero32__4133__value;
                        vlSelf->__Vfunc_leading_zero32__4133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                            vlSelf->__Vfunc_leading_zero32__4133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4133__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4145__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4145__part 
                            = vlSelf->__Vfunc_leading_zero32__4145__value;
                        vlSelf->__Vfunc_leading_zero32__4145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                            vlSelf->__Vfunc_leading_zero32__4145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4145__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4157__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4157__part 
                            = vlSelf->__Vfunc_leading_zero32__4157__value;
                        vlSelf->__Vfunc_leading_zero32__4157__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4157__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                            vlSelf->__Vfunc_leading_zero32__4157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4157__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4157__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4157__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4157__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4157__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4157__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4157__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4157__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4169__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4169__part 
                            = vlSelf->__Vfunc_leading_zero32__4169__value;
                        vlSelf->__Vfunc_leading_zero32__4169__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4169__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                            vlSelf->__Vfunc_leading_zero32__4169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4169__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4169__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4169__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4169__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4169__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4169__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4169__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4169__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4181__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4181__part 
                            = vlSelf->__Vfunc_leading_zero32__4181__value;
                        vlSelf->__Vfunc_leading_zero32__4181__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4181__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                            vlSelf->__Vfunc_leading_zero32__4181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4181__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4181__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4181__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4181__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4181__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4181__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4181__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4181__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4193__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4193__part 
                            = vlSelf->__Vfunc_leading_zero32__4193__value;
                        vlSelf->__Vfunc_leading_zero32__4193__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4193__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                            vlSelf->__Vfunc_leading_zero32__4193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4193__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4193__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4193__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4193__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4193__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4193__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4193__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4193__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4205__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4205__part 
                            = vlSelf->__Vfunc_leading_zero32__4205__value;
                        vlSelf->__Vfunc_leading_zero32__4205__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4205__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                            vlSelf->__Vfunc_leading_zero32__4205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4205__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4205__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4205__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4205__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4205__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4205__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4205__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4205__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4217__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4217__part 
                            = vlSelf->__Vfunc_leading_zero32__4217__value;
                        vlSelf->__Vfunc_leading_zero32__4217__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4217__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                            vlSelf->__Vfunc_leading_zero32__4217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4217__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4217__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4217__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4217__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4217__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4217__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4217__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4217__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4229__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4229__part 
                            = vlSelf->__Vfunc_leading_zero32__4229__value;
                        vlSelf->__Vfunc_leading_zero32__4229__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4229__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                            vlSelf->__Vfunc_leading_zero32__4229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4229__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4229__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4229__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4229__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4229__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4229__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4229__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4229__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4241__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4241__part 
                            = vlSelf->__Vfunc_leading_zero32__4241__value;
                        vlSelf->__Vfunc_leading_zero32__4241__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4241__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                            vlSelf->__Vfunc_leading_zero32__4241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4241__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4241__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4241__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4241__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4241__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4241__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4241__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4241__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4253__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4253__part 
                            = vlSelf->__Vfunc_leading_zero32__4253__value;
                        vlSelf->__Vfunc_leading_zero32__4253__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4253__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                            vlSelf->__Vfunc_leading_zero32__4253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4253__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4253__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4253__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4253__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4253__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4253__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4253__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4253__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4265__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4265__part 
                            = vlSelf->__Vfunc_leading_zero32__4265__value;
                        vlSelf->__Vfunc_leading_zero32__4265__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4265__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4265__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4265__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4265__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4265__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4277__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4277__part 
                            = vlSelf->__Vfunc_leading_zero32__4277__value;
                        vlSelf->__Vfunc_leading_zero32__4277__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4277__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                            vlSelf->__Vfunc_leading_zero32__4277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4277__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4277__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4277__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4277__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4277__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4277__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4277__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4277__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4289__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4289__part 
                            = vlSelf->__Vfunc_leading_zero32__4289__value;
                        vlSelf->__Vfunc_leading_zero32__4289__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4289__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                            vlSelf->__Vfunc_leading_zero32__4289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4289__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4289__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4289__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4289__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4289__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4289__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4289__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4289__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4301__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4301__part 
                            = vlSelf->__Vfunc_leading_zero32__4301__value;
                        vlSelf->__Vfunc_leading_zero32__4301__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4301__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4301__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4301__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4301__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4301__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4313__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4313__part 
                            = vlSelf->__Vfunc_leading_zero32__4313__value;
                        vlSelf->__Vfunc_leading_zero32__4313__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4313__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                            vlSelf->__Vfunc_leading_zero32__4313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4313__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4313__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4313__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4313__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4313__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4313__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4313__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4313__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4325__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4325__part 
                            = vlSelf->__Vfunc_leading_zero32__4325__value;
                        vlSelf->__Vfunc_leading_zero32__4325__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4325__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                            vlSelf->__Vfunc_leading_zero32__4325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4325__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4325__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4325__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4325__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4325__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4325__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4325__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4325__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4337__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4337__part 
                            = vlSelf->__Vfunc_leading_zero32__4337__value;
                        vlSelf->__Vfunc_leading_zero32__4337__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4337__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4337__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4337__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4337__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4337__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4349__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4349__part 
                            = vlSelf->__Vfunc_leading_zero32__4349__value;
                        vlSelf->__Vfunc_leading_zero32__4349__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4349__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                            vlSelf->__Vfunc_leading_zero32__4349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4349__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4349__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4349__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4349__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4349__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4349__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4349__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4349__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4361__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4361__part 
                            = vlSelf->__Vfunc_leading_zero32__4361__value;
                        vlSelf->__Vfunc_leading_zero32__4361__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4361__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                            vlSelf->__Vfunc_leading_zero32__4361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4361__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4361__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4361__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4361__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4361__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4361__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4361__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4361__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4373__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4373__part 
                            = vlSelf->__Vfunc_leading_zero32__4373__value;
                        vlSelf->__Vfunc_leading_zero32__4373__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4373__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4373__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4373__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4373__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4373__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4385__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4385__part 
                            = vlSelf->__Vfunc_leading_zero32__4385__value;
                        vlSelf->__Vfunc_leading_zero32__4385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                            vlSelf->__Vfunc_leading_zero32__4385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4385__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4397__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4397__part 
                            = vlSelf->__Vfunc_leading_zero32__4397__value;
                        vlSelf->__Vfunc_leading_zero32__4397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                            vlSelf->__Vfunc_leading_zero32__4397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4397__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4409__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4409__part 
                            = vlSelf->__Vfunc_leading_zero32__4409__value;
                        vlSelf->__Vfunc_leading_zero32__4409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4409__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4421__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4421__part 
                            = vlSelf->__Vfunc_leading_zero32__4421__value;
                        vlSelf->__Vfunc_leading_zero32__4421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                            vlSelf->__Vfunc_leading_zero32__4421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4421__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4433__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4433__part 
                            = vlSelf->__Vfunc_leading_zero32__4433__value;
                        vlSelf->__Vfunc_leading_zero32__4433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                            vlSelf->__Vfunc_leading_zero32__4433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4433__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4445__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4445__part 
                            = vlSelf->__Vfunc_leading_zero32__4445__value;
                        vlSelf->__Vfunc_leading_zero32__4445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4445__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4457__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4457__part 
                            = vlSelf->__Vfunc_leading_zero32__4457__value;
                        vlSelf->__Vfunc_leading_zero32__4457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                            vlSelf->__Vfunc_leading_zero32__4457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4457__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4469__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4469__part 
                            = vlSelf->__Vfunc_leading_zero32__4469__value;
                        vlSelf->__Vfunc_leading_zero32__4469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                            vlSelf->__Vfunc_leading_zero32__4469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4469__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4481__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4481__part 
                            = vlSelf->__Vfunc_leading_zero32__4481__value;
                        vlSelf->__Vfunc_leading_zero32__4481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4481__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4493__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4493__part 
                            = vlSelf->__Vfunc_leading_zero32__4493__value;
                        vlSelf->__Vfunc_leading_zero32__4493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                            vlSelf->__Vfunc_leading_zero32__4493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4493__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4505__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4505__part 
                            = vlSelf->__Vfunc_leading_zero32__4505__value;
                        vlSelf->__Vfunc_leading_zero32__4505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                            vlSelf->__Vfunc_leading_zero32__4505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4505__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4517__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4517__part 
                            = vlSelf->__Vfunc_leading_zero32__4517__value;
                        vlSelf->__Vfunc_leading_zero32__4517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4517__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4529__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4529__part 
                            = vlSelf->__Vfunc_leading_zero32__4529__value;
                        vlSelf->__Vfunc_leading_zero32__4529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                            vlSelf->__Vfunc_leading_zero32__4529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4529__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4541__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4541__part 
                            = vlSelf->__Vfunc_leading_zero32__4541__value;
                        vlSelf->__Vfunc_leading_zero32__4541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                            vlSelf->__Vfunc_leading_zero32__4541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4541__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4553__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4553__part 
                            = vlSelf->__Vfunc_leading_zero32__4553__value;
                        vlSelf->__Vfunc_leading_zero32__4553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4553__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4565__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4565__part 
                            = vlSelf->__Vfunc_leading_zero32__4565__value;
                        vlSelf->__Vfunc_leading_zero32__4565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                            vlSelf->__Vfunc_leading_zero32__4565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4565__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4577__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4577__part 
                            = vlSelf->__Vfunc_leading_zero32__4577__value;
                        vlSelf->__Vfunc_leading_zero32__4577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                            vlSelf->__Vfunc_leading_zero32__4577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4577__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4589__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4589__part 
                            = vlSelf->__Vfunc_leading_zero32__4589__value;
                        vlSelf->__Vfunc_leading_zero32__4589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4589__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4601__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4601__part 
                            = vlSelf->__Vfunc_leading_zero32__4601__value;
                        vlSelf->__Vfunc_leading_zero32__4601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                            vlSelf->__Vfunc_leading_zero32__4601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4613__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4613__part 
                            = vlSelf->__Vfunc_leading_zero32__4613__value;
                        vlSelf->__Vfunc_leading_zero32__4613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                            vlSelf->__Vfunc_leading_zero32__4613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4613__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4625__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4625__part 
                            = vlSelf->__Vfunc_leading_zero32__4625__value;
                        vlSelf->__Vfunc_leading_zero32__4625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4625__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4637__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4637__part 
                            = vlSelf->__Vfunc_leading_zero32__4637__value;
                        vlSelf->__Vfunc_leading_zero32__4637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                            vlSelf->__Vfunc_leading_zero32__4637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4649__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4649__part 
                            = vlSelf->__Vfunc_leading_zero32__4649__value;
                        vlSelf->__Vfunc_leading_zero32__4649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                            vlSelf->__Vfunc_leading_zero32__4649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4649__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4661__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4661__part 
                            = vlSelf->__Vfunc_leading_zero32__4661__value;
                        vlSelf->__Vfunc_leading_zero32__4661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4661__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4673__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4673__part 
                            = vlSelf->__Vfunc_leading_zero32__4673__value;
                        vlSelf->__Vfunc_leading_zero32__4673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                            vlSelf->__Vfunc_leading_zero32__4673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4685__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4685__part 
                            = vlSelf->__Vfunc_leading_zero32__4685__value;
                        vlSelf->__Vfunc_leading_zero32__4685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                            vlSelf->__Vfunc_leading_zero32__4685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4685__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4697__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4697__part 
                            = vlSelf->__Vfunc_leading_zero32__4697__value;
                        vlSelf->__Vfunc_leading_zero32__4697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4697__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4709__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4709__part 
                            = vlSelf->__Vfunc_leading_zero32__4709__value;
                        vlSelf->__Vfunc_leading_zero32__4709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                            vlSelf->__Vfunc_leading_zero32__4709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4721__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4721__part 
                            = vlSelf->__Vfunc_leading_zero32__4721__value;
                        vlSelf->__Vfunc_leading_zero32__4721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                            vlSelf->__Vfunc_leading_zero32__4721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4721__Vfuncout)) 
                             - (IData)(8U))));
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
}
