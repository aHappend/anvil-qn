// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__76(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__76\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4264__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4264__part 
                            = vlSelf->__Vfunc_leading_zero32__4264__value;
                        vlSelf->__Vfunc_leading_zero32__4264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                            vlSelf->__Vfunc_leading_zero32__4264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4276__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4276__part 
                            = vlSelf->__Vfunc_leading_zero32__4276__value;
                        vlSelf->__Vfunc_leading_zero32__4276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                            vlSelf->__Vfunc_leading_zero32__4276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4288__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4288__part 
                            = vlSelf->__Vfunc_leading_zero32__4288__value;
                        vlSelf->__Vfunc_leading_zero32__4288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                            vlSelf->__Vfunc_leading_zero32__4288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4300__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4300__part 
                            = vlSelf->__Vfunc_leading_zero32__4300__value;
                        vlSelf->__Vfunc_leading_zero32__4300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                            vlSelf->__Vfunc_leading_zero32__4300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4312__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4312__part 
                            = vlSelf->__Vfunc_leading_zero32__4312__value;
                        vlSelf->__Vfunc_leading_zero32__4312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                            vlSelf->__Vfunc_leading_zero32__4312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4324__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4324__part 
                            = vlSelf->__Vfunc_leading_zero32__4324__value;
                        vlSelf->__Vfunc_leading_zero32__4324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                            vlSelf->__Vfunc_leading_zero32__4324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4336__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4336__part 
                            = vlSelf->__Vfunc_leading_zero32__4336__value;
                        vlSelf->__Vfunc_leading_zero32__4336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                            vlSelf->__Vfunc_leading_zero32__4336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4348__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4348__part 
                            = vlSelf->__Vfunc_leading_zero32__4348__value;
                        vlSelf->__Vfunc_leading_zero32__4348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                            vlSelf->__Vfunc_leading_zero32__4348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4360__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4360__part 
                            = vlSelf->__Vfunc_leading_zero32__4360__value;
                        vlSelf->__Vfunc_leading_zero32__4360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                            vlSelf->__Vfunc_leading_zero32__4360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4372__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4372__part 
                            = vlSelf->__Vfunc_leading_zero32__4372__value;
                        vlSelf->__Vfunc_leading_zero32__4372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                            vlSelf->__Vfunc_leading_zero32__4372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4384__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4384__part 
                            = vlSelf->__Vfunc_leading_zero32__4384__value;
                        vlSelf->__Vfunc_leading_zero32__4384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                            vlSelf->__Vfunc_leading_zero32__4384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4396__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4396__part 
                            = vlSelf->__Vfunc_leading_zero32__4396__value;
                        vlSelf->__Vfunc_leading_zero32__4396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                            vlSelf->__Vfunc_leading_zero32__4396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4408__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4408__part 
                            = vlSelf->__Vfunc_leading_zero32__4408__value;
                        vlSelf->__Vfunc_leading_zero32__4408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                            vlSelf->__Vfunc_leading_zero32__4408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4420__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4420__part 
                            = vlSelf->__Vfunc_leading_zero32__4420__value;
                        vlSelf->__Vfunc_leading_zero32__4420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                            vlSelf->__Vfunc_leading_zero32__4420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4432__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4432__part 
                            = vlSelf->__Vfunc_leading_zero32__4432__value;
                        vlSelf->__Vfunc_leading_zero32__4432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                            vlSelf->__Vfunc_leading_zero32__4432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4444__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4444__part 
                            = vlSelf->__Vfunc_leading_zero32__4444__value;
                        vlSelf->__Vfunc_leading_zero32__4444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                            vlSelf->__Vfunc_leading_zero32__4444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4456__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4456__part 
                            = vlSelf->__Vfunc_leading_zero32__4456__value;
                        vlSelf->__Vfunc_leading_zero32__4456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                            vlSelf->__Vfunc_leading_zero32__4456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4468__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4468__part 
                            = vlSelf->__Vfunc_leading_zero32__4468__value;
                        vlSelf->__Vfunc_leading_zero32__4468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                            vlSelf->__Vfunc_leading_zero32__4468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4480__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4480__part 
                            = vlSelf->__Vfunc_leading_zero32__4480__value;
                        vlSelf->__Vfunc_leading_zero32__4480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                            vlSelf->__Vfunc_leading_zero32__4480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4492__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4492__part 
                            = vlSelf->__Vfunc_leading_zero32__4492__value;
                        vlSelf->__Vfunc_leading_zero32__4492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                            vlSelf->__Vfunc_leading_zero32__4492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4504__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4504__part 
                            = vlSelf->__Vfunc_leading_zero32__4504__value;
                        vlSelf->__Vfunc_leading_zero32__4504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                            vlSelf->__Vfunc_leading_zero32__4504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4516__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4516__part 
                            = vlSelf->__Vfunc_leading_zero32__4516__value;
                        vlSelf->__Vfunc_leading_zero32__4516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                            vlSelf->__Vfunc_leading_zero32__4516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4528__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4528__part 
                            = vlSelf->__Vfunc_leading_zero32__4528__value;
                        vlSelf->__Vfunc_leading_zero32__4528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                            vlSelf->__Vfunc_leading_zero32__4528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4540__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4540__part 
                            = vlSelf->__Vfunc_leading_zero32__4540__value;
                        vlSelf->__Vfunc_leading_zero32__4540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                            vlSelf->__Vfunc_leading_zero32__4540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4552__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4552__part 
                            = vlSelf->__Vfunc_leading_zero32__4552__value;
                        vlSelf->__Vfunc_leading_zero32__4552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                            vlSelf->__Vfunc_leading_zero32__4552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4564__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4564__part 
                            = vlSelf->__Vfunc_leading_zero32__4564__value;
                        vlSelf->__Vfunc_leading_zero32__4564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                            vlSelf->__Vfunc_leading_zero32__4564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4576__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4576__part 
                            = vlSelf->__Vfunc_leading_zero32__4576__value;
                        vlSelf->__Vfunc_leading_zero32__4576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                            vlSelf->__Vfunc_leading_zero32__4576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4588__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4588__part 
                            = vlSelf->__Vfunc_leading_zero32__4588__value;
                        vlSelf->__Vfunc_leading_zero32__4588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                            vlSelf->__Vfunc_leading_zero32__4588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4600__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4600__part 
                            = vlSelf->__Vfunc_leading_zero32__4600__value;
                        vlSelf->__Vfunc_leading_zero32__4600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                            vlSelf->__Vfunc_leading_zero32__4600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4612__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4612__part 
                            = vlSelf->__Vfunc_leading_zero32__4612__value;
                        vlSelf->__Vfunc_leading_zero32__4612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                            vlSelf->__Vfunc_leading_zero32__4612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4624__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4624__part 
                            = vlSelf->__Vfunc_leading_zero32__4624__value;
                        vlSelf->__Vfunc_leading_zero32__4624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                            vlSelf->__Vfunc_leading_zero32__4624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4636__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4636__part 
                            = vlSelf->__Vfunc_leading_zero32__4636__value;
                        vlSelf->__Vfunc_leading_zero32__4636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                            vlSelf->__Vfunc_leading_zero32__4636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4648__part 
                            = vlSelf->__Vfunc_leading_zero32__4648__value;
                        vlSelf->__Vfunc_leading_zero32__4648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                            vlSelf->__Vfunc_leading_zero32__4648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4660__part 
                            = vlSelf->__Vfunc_leading_zero32__4660__value;
                        vlSelf->__Vfunc_leading_zero32__4660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                            vlSelf->__Vfunc_leading_zero32__4660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4672__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4672__part 
                            = vlSelf->__Vfunc_leading_zero32__4672__value;
                        vlSelf->__Vfunc_leading_zero32__4672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                            vlSelf->__Vfunc_leading_zero32__4672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4684__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4684__part 
                            = vlSelf->__Vfunc_leading_zero32__4684__value;
                        vlSelf->__Vfunc_leading_zero32__4684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                            vlSelf->__Vfunc_leading_zero32__4684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4696__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4696__part 
                            = vlSelf->__Vfunc_leading_zero32__4696__value;
                        vlSelf->__Vfunc_leading_zero32__4696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                            vlSelf->__Vfunc_leading_zero32__4696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4708__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4708__part 
                            = vlSelf->__Vfunc_leading_zero32__4708__value;
                        vlSelf->__Vfunc_leading_zero32__4708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                            vlSelf->__Vfunc_leading_zero32__4708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4720__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4720__part 
                            = vlSelf->__Vfunc_leading_zero32__4720__value;
                        vlSelf->__Vfunc_leading_zero32__4720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                            vlSelf->__Vfunc_leading_zero32__4720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4732__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4732__part 
                            = vlSelf->__Vfunc_leading_zero32__4732__value;
                        vlSelf->__Vfunc_leading_zero32__4732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                            vlSelf->__Vfunc_leading_zero32__4732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4744__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4744__part 
                            = vlSelf->__Vfunc_leading_zero32__4744__value;
                        vlSelf->__Vfunc_leading_zero32__4744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                            vlSelf->__Vfunc_leading_zero32__4744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4756__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4756__part 
                            = vlSelf->__Vfunc_leading_zero32__4756__value;
                        vlSelf->__Vfunc_leading_zero32__4756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                            vlSelf->__Vfunc_leading_zero32__4756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4768__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4768__part 
                            = vlSelf->__Vfunc_leading_zero32__4768__value;
                        vlSelf->__Vfunc_leading_zero32__4768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                            vlSelf->__Vfunc_leading_zero32__4768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4780__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4780__part 
                            = vlSelf->__Vfunc_leading_zero32__4780__value;
                        vlSelf->__Vfunc_leading_zero32__4780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                            vlSelf->__Vfunc_leading_zero32__4780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4792__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4792__part 
                            = vlSelf->__Vfunc_leading_zero32__4792__value;
                        vlSelf->__Vfunc_leading_zero32__4792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                            vlSelf->__Vfunc_leading_zero32__4792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4804__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4804__part 
                            = vlSelf->__Vfunc_leading_zero32__4804__value;
                        vlSelf->__Vfunc_leading_zero32__4804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4804__count)));
                            vlSelf->__Vfunc_leading_zero32__4804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4804__count)));
                            vlSelf->__Vfunc_leading_zero32__4804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4804__count)));
                            vlSelf->__Vfunc_leading_zero32__4804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4804__count)));
                            vlSelf->__Vfunc_leading_zero32__4804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4804__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4816__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4816__part 
                            = vlSelf->__Vfunc_leading_zero32__4816__value;
                        vlSelf->__Vfunc_leading_zero32__4816__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4816__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4816__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4816__count)));
                            vlSelf->__Vfunc_leading_zero32__4816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4816__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4816__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4816__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4816__count)));
                            vlSelf->__Vfunc_leading_zero32__4816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4816__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4816__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4816__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4816__count)));
                            vlSelf->__Vfunc_leading_zero32__4816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4816__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4816__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4816__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4816__count)));
                            vlSelf->__Vfunc_leading_zero32__4816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4816__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4816__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4816__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4816__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4816__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4816__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4816__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4816__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4828__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4828__part 
                            = vlSelf->__Vfunc_leading_zero32__4828__value;
                        vlSelf->__Vfunc_leading_zero32__4828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4828__count)));
                            vlSelf->__Vfunc_leading_zero32__4828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4828__count)));
                            vlSelf->__Vfunc_leading_zero32__4828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4828__count)));
                            vlSelf->__Vfunc_leading_zero32__4828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4828__count)));
                            vlSelf->__Vfunc_leading_zero32__4828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4828__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4840__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4840__part 
                            = vlSelf->__Vfunc_leading_zero32__4840__value;
                        vlSelf->__Vfunc_leading_zero32__4840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4840__count)));
                            vlSelf->__Vfunc_leading_zero32__4840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4840__count)));
                            vlSelf->__Vfunc_leading_zero32__4840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4840__count)));
                            vlSelf->__Vfunc_leading_zero32__4840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4840__count)));
                            vlSelf->__Vfunc_leading_zero32__4840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4840__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4852__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4852__part 
                            = vlSelf->__Vfunc_leading_zero32__4852__value;
                        vlSelf->__Vfunc_leading_zero32__4852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4852__count)));
                            vlSelf->__Vfunc_leading_zero32__4852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4852__count)));
                            vlSelf->__Vfunc_leading_zero32__4852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4852__count)));
                            vlSelf->__Vfunc_leading_zero32__4852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4852__count)));
                            vlSelf->__Vfunc_leading_zero32__4852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4852__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4864__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4864__part 
                            = vlSelf->__Vfunc_leading_zero32__4864__value;
                        vlSelf->__Vfunc_leading_zero32__4864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4864__count)));
                            vlSelf->__Vfunc_leading_zero32__4864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4864__count)));
                            vlSelf->__Vfunc_leading_zero32__4864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4864__count)));
                            vlSelf->__Vfunc_leading_zero32__4864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4864__count)));
                            vlSelf->__Vfunc_leading_zero32__4864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4864__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4876__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4876__part 
                            = vlSelf->__Vfunc_leading_zero32__4876__value;
                        vlSelf->__Vfunc_leading_zero32__4876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4876__count)));
                            vlSelf->__Vfunc_leading_zero32__4876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4876__count)));
                            vlSelf->__Vfunc_leading_zero32__4876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4876__count)));
                            vlSelf->__Vfunc_leading_zero32__4876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4876__count)));
                            vlSelf->__Vfunc_leading_zero32__4876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4876__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4888__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4888__part 
                            = vlSelf->__Vfunc_leading_zero32__4888__value;
                        vlSelf->__Vfunc_leading_zero32__4888__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4888__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4888__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4888__count)));
                            vlSelf->__Vfunc_leading_zero32__4888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4888__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4888__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4888__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4888__count)));
                            vlSelf->__Vfunc_leading_zero32__4888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4888__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4888__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4888__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4888__count)));
                            vlSelf->__Vfunc_leading_zero32__4888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4888__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4888__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4888__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4888__count)));
                            vlSelf->__Vfunc_leading_zero32__4888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4888__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4888__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4888__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4888__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4888__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4888__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4888__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4888__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4900__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4900__part 
                            = vlSelf->__Vfunc_leading_zero32__4900__value;
                        vlSelf->__Vfunc_leading_zero32__4900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4900__count)));
                            vlSelf->__Vfunc_leading_zero32__4900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4900__count)));
                            vlSelf->__Vfunc_leading_zero32__4900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4900__count)));
                            vlSelf->__Vfunc_leading_zero32__4900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4900__count)));
                            vlSelf->__Vfunc_leading_zero32__4900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4900__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4912__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4912__part 
                            = vlSelf->__Vfunc_leading_zero32__4912__value;
                        vlSelf->__Vfunc_leading_zero32__4912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4912__count)));
                            vlSelf->__Vfunc_leading_zero32__4912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4912__count)));
                            vlSelf->__Vfunc_leading_zero32__4912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4912__count)));
                            vlSelf->__Vfunc_leading_zero32__4912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4912__count)));
                            vlSelf->__Vfunc_leading_zero32__4912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4924__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4924__part 
                            = vlSelf->__Vfunc_leading_zero32__4924__value;
                        vlSelf->__Vfunc_leading_zero32__4924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4924__count)));
                            vlSelf->__Vfunc_leading_zero32__4924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4924__count)));
                            vlSelf->__Vfunc_leading_zero32__4924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4924__count)));
                            vlSelf->__Vfunc_leading_zero32__4924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4924__count)));
                            vlSelf->__Vfunc_leading_zero32__4924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4924__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4936__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4936__part 
                            = vlSelf->__Vfunc_leading_zero32__4936__value;
                        vlSelf->__Vfunc_leading_zero32__4936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4936__count)));
                            vlSelf->__Vfunc_leading_zero32__4936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4936__count)));
                            vlSelf->__Vfunc_leading_zero32__4936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4936__count)));
                            vlSelf->__Vfunc_leading_zero32__4936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4936__count)));
                            vlSelf->__Vfunc_leading_zero32__4936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4948__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4948__part 
                            = vlSelf->__Vfunc_leading_zero32__4948__value;
                        vlSelf->__Vfunc_leading_zero32__4948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4948__count)));
                            vlSelf->__Vfunc_leading_zero32__4948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4948__count)));
                            vlSelf->__Vfunc_leading_zero32__4948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4948__count)));
                            vlSelf->__Vfunc_leading_zero32__4948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4948__count)));
                            vlSelf->__Vfunc_leading_zero32__4948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4960__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4960__part 
                            = vlSelf->__Vfunc_leading_zero32__4960__value;
                        vlSelf->__Vfunc_leading_zero32__4960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4960__count)));
                            vlSelf->__Vfunc_leading_zero32__4960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4960__count)));
                            vlSelf->__Vfunc_leading_zero32__4960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4960__count)));
                            vlSelf->__Vfunc_leading_zero32__4960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4960__count)));
                            vlSelf->__Vfunc_leading_zero32__4960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4960__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4972__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4972__part 
                            = vlSelf->__Vfunc_leading_zero32__4972__value;
                        vlSelf->__Vfunc_leading_zero32__4972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4972__count)));
                            vlSelf->__Vfunc_leading_zero32__4972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4972__count)));
                            vlSelf->__Vfunc_leading_zero32__4972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4972__count)));
                            vlSelf->__Vfunc_leading_zero32__4972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4972__count)));
                            vlSelf->__Vfunc_leading_zero32__4972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4984__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4984__part 
                            = vlSelf->__Vfunc_leading_zero32__4984__value;
                        vlSelf->__Vfunc_leading_zero32__4984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4984__count)));
                            vlSelf->__Vfunc_leading_zero32__4984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4984__count)));
                            vlSelf->__Vfunc_leading_zero32__4984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4984__count)));
                            vlSelf->__Vfunc_leading_zero32__4984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4984__count)));
                            vlSelf->__Vfunc_leading_zero32__4984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4996__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4996__part 
                            = vlSelf->__Vfunc_leading_zero32__4996__value;
                        vlSelf->__Vfunc_leading_zero32__4996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4996__count)));
                            vlSelf->__Vfunc_leading_zero32__4996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4996__count)));
                            vlSelf->__Vfunc_leading_zero32__4996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4996__count)));
                            vlSelf->__Vfunc_leading_zero32__4996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4996__count)));
                            vlSelf->__Vfunc_leading_zero32__4996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4996__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5008__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5008__part 
                            = vlSelf->__Vfunc_leading_zero32__5008__value;
                        vlSelf->__Vfunc_leading_zero32__5008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5008__count)));
                            vlSelf->__Vfunc_leading_zero32__5008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5008__count)));
                            vlSelf->__Vfunc_leading_zero32__5008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5008__count)));
                            vlSelf->__Vfunc_leading_zero32__5008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5008__count)));
                            vlSelf->__Vfunc_leading_zero32__5008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5020__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5020__part 
                            = vlSelf->__Vfunc_leading_zero32__5020__value;
                        vlSelf->__Vfunc_leading_zero32__5020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5020__count)));
                            vlSelf->__Vfunc_leading_zero32__5020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5020__count)));
                            vlSelf->__Vfunc_leading_zero32__5020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5020__count)));
                            vlSelf->__Vfunc_leading_zero32__5020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5020__count)));
                            vlSelf->__Vfunc_leading_zero32__5020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5032__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5032__part 
                            = vlSelf->__Vfunc_leading_zero32__5032__value;
                        vlSelf->__Vfunc_leading_zero32__5032__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5032__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5032__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5032__count)));
                            vlSelf->__Vfunc_leading_zero32__5032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5032__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5032__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5032__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5032__count)));
                            vlSelf->__Vfunc_leading_zero32__5032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5032__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5032__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5032__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5032__count)));
                            vlSelf->__Vfunc_leading_zero32__5032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5032__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5032__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5032__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5032__count)));
                            vlSelf->__Vfunc_leading_zero32__5032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5032__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5032__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5032__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5032__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5032__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5032__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5032__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5032__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5044__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5044__part 
                            = vlSelf->__Vfunc_leading_zero32__5044__value;
                        vlSelf->__Vfunc_leading_zero32__5044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5044__count)));
                            vlSelf->__Vfunc_leading_zero32__5044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5044__count)));
                            vlSelf->__Vfunc_leading_zero32__5044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5044__count)));
                            vlSelf->__Vfunc_leading_zero32__5044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5044__count)));
                            vlSelf->__Vfunc_leading_zero32__5044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5056__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5056__part 
                            = vlSelf->__Vfunc_leading_zero32__5056__value;
                        vlSelf->__Vfunc_leading_zero32__5056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5056__count)));
                            vlSelf->__Vfunc_leading_zero32__5056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5056__count)));
                            vlSelf->__Vfunc_leading_zero32__5056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5056__count)));
                            vlSelf->__Vfunc_leading_zero32__5056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5056__count)));
                            vlSelf->__Vfunc_leading_zero32__5056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5068__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5068__part 
                            = vlSelf->__Vfunc_leading_zero32__5068__value;
                        vlSelf->__Vfunc_leading_zero32__5068__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5068__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5068__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5068__count)));
                            vlSelf->__Vfunc_leading_zero32__5068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5068__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5068__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5068__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5068__count)));
                            vlSelf->__Vfunc_leading_zero32__5068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5068__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5068__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5068__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5068__count)));
                            vlSelf->__Vfunc_leading_zero32__5068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5068__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5068__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5068__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5068__count)));
                            vlSelf->__Vfunc_leading_zero32__5068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5068__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5068__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5068__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5068__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5068__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5068__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5068__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5068__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5080__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5080__part 
                            = vlSelf->__Vfunc_leading_zero32__5080__value;
                        vlSelf->__Vfunc_leading_zero32__5080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5080__count)));
                            vlSelf->__Vfunc_leading_zero32__5080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5080__count)));
                            vlSelf->__Vfunc_leading_zero32__5080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5080__count)));
                            vlSelf->__Vfunc_leading_zero32__5080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5080__count)));
                            vlSelf->__Vfunc_leading_zero32__5080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5092__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5092__part 
                            = vlSelf->__Vfunc_leading_zero32__5092__value;
                        vlSelf->__Vfunc_leading_zero32__5092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5092__count)));
                            vlSelf->__Vfunc_leading_zero32__5092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5092__count)));
                            vlSelf->__Vfunc_leading_zero32__5092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5092__count)));
                            vlSelf->__Vfunc_leading_zero32__5092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5092__count)));
                            vlSelf->__Vfunc_leading_zero32__5092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5104__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5104__part 
                            = vlSelf->__Vfunc_leading_zero32__5104__value;
                        vlSelf->__Vfunc_leading_zero32__5104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5104__count)));
                            vlSelf->__Vfunc_leading_zero32__5104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5104__count)));
                            vlSelf->__Vfunc_leading_zero32__5104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5104__count)));
                            vlSelf->__Vfunc_leading_zero32__5104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5104__count)));
                            vlSelf->__Vfunc_leading_zero32__5104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5104__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5116__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5116__part 
                            = vlSelf->__Vfunc_leading_zero32__5116__value;
                        vlSelf->__Vfunc_leading_zero32__5116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5116__count)));
                            vlSelf->__Vfunc_leading_zero32__5116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5116__count)));
                            vlSelf->__Vfunc_leading_zero32__5116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5116__count)));
                            vlSelf->__Vfunc_leading_zero32__5116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5116__count)));
                            vlSelf->__Vfunc_leading_zero32__5116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5128__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5128__part 
                            = vlSelf->__Vfunc_leading_zero32__5128__value;
                        vlSelf->__Vfunc_leading_zero32__5128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5128__count)));
                            vlSelf->__Vfunc_leading_zero32__5128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5128__count)));
                            vlSelf->__Vfunc_leading_zero32__5128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5128__count)));
                            vlSelf->__Vfunc_leading_zero32__5128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5128__count)));
                            vlSelf->__Vfunc_leading_zero32__5128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5140__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5140__part 
                            = vlSelf->__Vfunc_leading_zero32__5140__value;
                        vlSelf->__Vfunc_leading_zero32__5140__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5140__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5140__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5140__count)));
                            vlSelf->__Vfunc_leading_zero32__5140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5140__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5140__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5140__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5140__count)));
                            vlSelf->__Vfunc_leading_zero32__5140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5140__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5140__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5140__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5140__count)));
                            vlSelf->__Vfunc_leading_zero32__5140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5140__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5140__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5140__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5140__count)));
                            vlSelf->__Vfunc_leading_zero32__5140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5140__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5140__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5140__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5140__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5140__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5140__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5140__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5140__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5152__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5152__part 
                            = vlSelf->__Vfunc_leading_zero32__5152__value;
                        vlSelf->__Vfunc_leading_zero32__5152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5152__count)));
                            vlSelf->__Vfunc_leading_zero32__5152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5152__count)));
                            vlSelf->__Vfunc_leading_zero32__5152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5152__count)));
                            vlSelf->__Vfunc_leading_zero32__5152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5152__count)));
                            vlSelf->__Vfunc_leading_zero32__5152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5152__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5164__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5164__part 
                            = vlSelf->__Vfunc_leading_zero32__5164__value;
                        vlSelf->__Vfunc_leading_zero32__5164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5164__count)));
                            vlSelf->__Vfunc_leading_zero32__5164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5164__count)));
                            vlSelf->__Vfunc_leading_zero32__5164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5164__count)));
                            vlSelf->__Vfunc_leading_zero32__5164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5164__count)));
                            vlSelf->__Vfunc_leading_zero32__5164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5164__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5176__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5176__part 
                            = vlSelf->__Vfunc_leading_zero32__5176__value;
                        vlSelf->__Vfunc_leading_zero32__5176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5176__count)));
                            vlSelf->__Vfunc_leading_zero32__5176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5176__count)));
                            vlSelf->__Vfunc_leading_zero32__5176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5176__count)));
                            vlSelf->__Vfunc_leading_zero32__5176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5176__count)));
                            vlSelf->__Vfunc_leading_zero32__5176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5176__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5188__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5188__part 
                            = vlSelf->__Vfunc_leading_zero32__5188__value;
                        vlSelf->__Vfunc_leading_zero32__5188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5188__count)));
                            vlSelf->__Vfunc_leading_zero32__5188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5188__count)));
                            vlSelf->__Vfunc_leading_zero32__5188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5188__count)));
                            vlSelf->__Vfunc_leading_zero32__5188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5188__count)));
                            vlSelf->__Vfunc_leading_zero32__5188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5200__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5200__part 
                            = vlSelf->__Vfunc_leading_zero32__5200__value;
                        vlSelf->__Vfunc_leading_zero32__5200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5200__count)));
                            vlSelf->__Vfunc_leading_zero32__5200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5200__count)));
                            vlSelf->__Vfunc_leading_zero32__5200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5200__count)));
                            vlSelf->__Vfunc_leading_zero32__5200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5200__count)));
                            vlSelf->__Vfunc_leading_zero32__5200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5212__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5212__part 
                            = vlSelf->__Vfunc_leading_zero32__5212__value;
                        vlSelf->__Vfunc_leading_zero32__5212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5212__count)));
                            vlSelf->__Vfunc_leading_zero32__5212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5212__count)));
                            vlSelf->__Vfunc_leading_zero32__5212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5212__count)));
                            vlSelf->__Vfunc_leading_zero32__5212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5212__count)));
                            vlSelf->__Vfunc_leading_zero32__5212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5212__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5224__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5224__part 
                            = vlSelf->__Vfunc_leading_zero32__5224__value;
                        vlSelf->__Vfunc_leading_zero32__5224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5224__count)));
                            vlSelf->__Vfunc_leading_zero32__5224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5224__count)));
                            vlSelf->__Vfunc_leading_zero32__5224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5224__count)));
                            vlSelf->__Vfunc_leading_zero32__5224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5224__count)));
                            vlSelf->__Vfunc_leading_zero32__5224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5236__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5236__part 
                            = vlSelf->__Vfunc_leading_zero32__5236__value;
                        vlSelf->__Vfunc_leading_zero32__5236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5236__count)));
                            vlSelf->__Vfunc_leading_zero32__5236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5236__count)));
                            vlSelf->__Vfunc_leading_zero32__5236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5236__count)));
                            vlSelf->__Vfunc_leading_zero32__5236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5236__count)));
                            vlSelf->__Vfunc_leading_zero32__5236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5248__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5248__part 
                            = vlSelf->__Vfunc_leading_zero32__5248__value;
                        vlSelf->__Vfunc_leading_zero32__5248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5248__count)));
                            vlSelf->__Vfunc_leading_zero32__5248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5248__count)));
                            vlSelf->__Vfunc_leading_zero32__5248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5248__count)));
                            vlSelf->__Vfunc_leading_zero32__5248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5248__count)));
                            vlSelf->__Vfunc_leading_zero32__5248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5248__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5260__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5260__part 
                            = vlSelf->__Vfunc_leading_zero32__5260__value;
                        vlSelf->__Vfunc_leading_zero32__5260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5260__count)));
                            vlSelf->__Vfunc_leading_zero32__5260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5260__count)));
                            vlSelf->__Vfunc_leading_zero32__5260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5260__count)));
                            vlSelf->__Vfunc_leading_zero32__5260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5260__count)));
                            vlSelf->__Vfunc_leading_zero32__5260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5260__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5272__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5272__part 
                            = vlSelf->__Vfunc_leading_zero32__5272__value;
                        vlSelf->__Vfunc_leading_zero32__5272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5272__count)));
                            vlSelf->__Vfunc_leading_zero32__5272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5272__count)));
                            vlSelf->__Vfunc_leading_zero32__5272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5272__count)));
                            vlSelf->__Vfunc_leading_zero32__5272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5272__count)));
                            vlSelf->__Vfunc_leading_zero32__5272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5272__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5284__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5284__part 
                            = vlSelf->__Vfunc_leading_zero32__5284__value;
                        vlSelf->__Vfunc_leading_zero32__5284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5284__count)));
                            vlSelf->__Vfunc_leading_zero32__5284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5284__count)));
                            vlSelf->__Vfunc_leading_zero32__5284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5284__count)));
                            vlSelf->__Vfunc_leading_zero32__5284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5284__count)));
                            vlSelf->__Vfunc_leading_zero32__5284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5284__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5296__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5296__part 
                            = vlSelf->__Vfunc_leading_zero32__5296__value;
                        vlSelf->__Vfunc_leading_zero32__5296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5296__count)));
                            vlSelf->__Vfunc_leading_zero32__5296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5296__count)));
                            vlSelf->__Vfunc_leading_zero32__5296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5296__count)));
                            vlSelf->__Vfunc_leading_zero32__5296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5296__count)));
                            vlSelf->__Vfunc_leading_zero32__5296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5296__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5308__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5308__part 
                            = vlSelf->__Vfunc_leading_zero32__5308__value;
                        vlSelf->__Vfunc_leading_zero32__5308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5308__count)));
                            vlSelf->__Vfunc_leading_zero32__5308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5308__count)));
                            vlSelf->__Vfunc_leading_zero32__5308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5308__count)));
                            vlSelf->__Vfunc_leading_zero32__5308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5308__count)));
                            vlSelf->__Vfunc_leading_zero32__5308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5308__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5320__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5320__part 
                            = vlSelf->__Vfunc_leading_zero32__5320__value;
                        vlSelf->__Vfunc_leading_zero32__5320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5320__count)));
                            vlSelf->__Vfunc_leading_zero32__5320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5320__count)));
                            vlSelf->__Vfunc_leading_zero32__5320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5320__count)));
                            vlSelf->__Vfunc_leading_zero32__5320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5320__count)));
                            vlSelf->__Vfunc_leading_zero32__5320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5320__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5332__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5332__part 
                            = vlSelf->__Vfunc_leading_zero32__5332__value;
                        vlSelf->__Vfunc_leading_zero32__5332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5332__count)));
                            vlSelf->__Vfunc_leading_zero32__5332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5332__count)));
                            vlSelf->__Vfunc_leading_zero32__5332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5332__count)));
                            vlSelf->__Vfunc_leading_zero32__5332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5332__count)));
                            vlSelf->__Vfunc_leading_zero32__5332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5332__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5344__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5344__part 
                            = vlSelf->__Vfunc_leading_zero32__5344__value;
                        vlSelf->__Vfunc_leading_zero32__5344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5344__count)));
                            vlSelf->__Vfunc_leading_zero32__5344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5344__count)));
                            vlSelf->__Vfunc_leading_zero32__5344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5344__count)));
                            vlSelf->__Vfunc_leading_zero32__5344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5344__count)));
                            vlSelf->__Vfunc_leading_zero32__5344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5344__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5356__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5356__part 
                            = vlSelf->__Vfunc_leading_zero32__5356__value;
                        vlSelf->__Vfunc_leading_zero32__5356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5356__count)));
                            vlSelf->__Vfunc_leading_zero32__5356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5356__count)));
                            vlSelf->__Vfunc_leading_zero32__5356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5356__count)));
                            vlSelf->__Vfunc_leading_zero32__5356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5356__count)));
                            vlSelf->__Vfunc_leading_zero32__5356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5356__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5368__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5368__part 
                            = vlSelf->__Vfunc_leading_zero32__5368__value;
                        vlSelf->__Vfunc_leading_zero32__5368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5368__count)));
                            vlSelf->__Vfunc_leading_zero32__5368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5368__count)));
                            vlSelf->__Vfunc_leading_zero32__5368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5368__count)));
                            vlSelf->__Vfunc_leading_zero32__5368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5368__count)));
                            vlSelf->__Vfunc_leading_zero32__5368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5368__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5380__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5380__part 
                            = vlSelf->__Vfunc_leading_zero32__5380__value;
                        vlSelf->__Vfunc_leading_zero32__5380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5380__count)));
                            vlSelf->__Vfunc_leading_zero32__5380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5380__count)));
                            vlSelf->__Vfunc_leading_zero32__5380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5380__count)));
                            vlSelf->__Vfunc_leading_zero32__5380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5380__count)));
                            vlSelf->__Vfunc_leading_zero32__5380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5380__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5392__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5392__part 
                            = vlSelf->__Vfunc_leading_zero32__5392__value;
                        vlSelf->__Vfunc_leading_zero32__5392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5392__count)));
                            vlSelf->__Vfunc_leading_zero32__5392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5392__count)));
                            vlSelf->__Vfunc_leading_zero32__5392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5392__count)));
                            vlSelf->__Vfunc_leading_zero32__5392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5392__count)));
                            vlSelf->__Vfunc_leading_zero32__5392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5392__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5404__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5404__part 
                            = vlSelf->__Vfunc_leading_zero32__5404__value;
                        vlSelf->__Vfunc_leading_zero32__5404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5404__count)));
                            vlSelf->__Vfunc_leading_zero32__5404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5404__count)));
                            vlSelf->__Vfunc_leading_zero32__5404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5404__count)));
                            vlSelf->__Vfunc_leading_zero32__5404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5404__count)));
                            vlSelf->__Vfunc_leading_zero32__5404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5404__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5416__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5416__part 
                            = vlSelf->__Vfunc_leading_zero32__5416__value;
                        vlSelf->__Vfunc_leading_zero32__5416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5416__count)));
                            vlSelf->__Vfunc_leading_zero32__5416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5416__count)));
                            vlSelf->__Vfunc_leading_zero32__5416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5416__count)));
                            vlSelf->__Vfunc_leading_zero32__5416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5416__count)));
                            vlSelf->__Vfunc_leading_zero32__5416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5416__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5428__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5428__part 
                            = vlSelf->__Vfunc_leading_zero32__5428__value;
                        vlSelf->__Vfunc_leading_zero32__5428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5428__count)));
                            vlSelf->__Vfunc_leading_zero32__5428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5428__count)));
                            vlSelf->__Vfunc_leading_zero32__5428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5428__count)));
                            vlSelf->__Vfunc_leading_zero32__5428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5428__count)));
                            vlSelf->__Vfunc_leading_zero32__5428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5440__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5440__part 
                            = vlSelf->__Vfunc_leading_zero32__5440__value;
                        vlSelf->__Vfunc_leading_zero32__5440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5440__count)));
                            vlSelf->__Vfunc_leading_zero32__5440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5440__count)));
                            vlSelf->__Vfunc_leading_zero32__5440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5440__count)));
                            vlSelf->__Vfunc_leading_zero32__5440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5440__count)));
                            vlSelf->__Vfunc_leading_zero32__5440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5452__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5452__part 
                            = vlSelf->__Vfunc_leading_zero32__5452__value;
                        vlSelf->__Vfunc_leading_zero32__5452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5452__count)));
                            vlSelf->__Vfunc_leading_zero32__5452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5452__count)));
                            vlSelf->__Vfunc_leading_zero32__5452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5452__count)));
                            vlSelf->__Vfunc_leading_zero32__5452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5452__count)));
                            vlSelf->__Vfunc_leading_zero32__5452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5464__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5464__part 
                            = vlSelf->__Vfunc_leading_zero32__5464__value;
                        vlSelf->__Vfunc_leading_zero32__5464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5464__count)));
                            vlSelf->__Vfunc_leading_zero32__5464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5464__count)));
                            vlSelf->__Vfunc_leading_zero32__5464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5464__count)));
                            vlSelf->__Vfunc_leading_zero32__5464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5464__count)));
                            vlSelf->__Vfunc_leading_zero32__5464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5476__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5476__part 
                            = vlSelf->__Vfunc_leading_zero32__5476__value;
                        vlSelf->__Vfunc_leading_zero32__5476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5476__count)));
                            vlSelf->__Vfunc_leading_zero32__5476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5476__count)));
                            vlSelf->__Vfunc_leading_zero32__5476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5476__count)));
                            vlSelf->__Vfunc_leading_zero32__5476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5476__count)));
                            vlSelf->__Vfunc_leading_zero32__5476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5488__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5488__part 
                            = vlSelf->__Vfunc_leading_zero32__5488__value;
                        vlSelf->__Vfunc_leading_zero32__5488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5488__count)));
                            vlSelf->__Vfunc_leading_zero32__5488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5488__count)));
                            vlSelf->__Vfunc_leading_zero32__5488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5488__count)));
                            vlSelf->__Vfunc_leading_zero32__5488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5488__count)));
                            vlSelf->__Vfunc_leading_zero32__5488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5500__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5500__part 
                            = vlSelf->__Vfunc_leading_zero32__5500__value;
                        vlSelf->__Vfunc_leading_zero32__5500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5500__count)));
                            vlSelf->__Vfunc_leading_zero32__5500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5500__count)));
                            vlSelf->__Vfunc_leading_zero32__5500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5500__count)));
                            vlSelf->__Vfunc_leading_zero32__5500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5500__count)));
                            vlSelf->__Vfunc_leading_zero32__5500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5512__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5512__part 
                            = vlSelf->__Vfunc_leading_zero32__5512__value;
                        vlSelf->__Vfunc_leading_zero32__5512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5512__count)));
                            vlSelf->__Vfunc_leading_zero32__5512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5512__count)));
                            vlSelf->__Vfunc_leading_zero32__5512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5512__count)));
                            vlSelf->__Vfunc_leading_zero32__5512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5512__count)));
                            vlSelf->__Vfunc_leading_zero32__5512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5524__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5524__part 
                            = vlSelf->__Vfunc_leading_zero32__5524__value;
                        vlSelf->__Vfunc_leading_zero32__5524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5524__count)));
                            vlSelf->__Vfunc_leading_zero32__5524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5524__count)));
                            vlSelf->__Vfunc_leading_zero32__5524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5524__count)));
                            vlSelf->__Vfunc_leading_zero32__5524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5524__count)));
                            vlSelf->__Vfunc_leading_zero32__5524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5536__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5536__part 
                            = vlSelf->__Vfunc_leading_zero32__5536__value;
                        vlSelf->__Vfunc_leading_zero32__5536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5536__count)));
                            vlSelf->__Vfunc_leading_zero32__5536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5536__count)));
                            vlSelf->__Vfunc_leading_zero32__5536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5536__count)));
                            vlSelf->__Vfunc_leading_zero32__5536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5536__count)));
                            vlSelf->__Vfunc_leading_zero32__5536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5548__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5548__part 
                            = vlSelf->__Vfunc_leading_zero32__5548__value;
                        vlSelf->__Vfunc_leading_zero32__5548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5548__count)));
                            vlSelf->__Vfunc_leading_zero32__5548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5548__count)));
                            vlSelf->__Vfunc_leading_zero32__5548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5548__count)));
                            vlSelf->__Vfunc_leading_zero32__5548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5548__count)));
                            vlSelf->__Vfunc_leading_zero32__5548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5560__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5560__part 
                            = vlSelf->__Vfunc_leading_zero32__5560__value;
                        vlSelf->__Vfunc_leading_zero32__5560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5560__count)));
                            vlSelf->__Vfunc_leading_zero32__5560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5560__count)));
                            vlSelf->__Vfunc_leading_zero32__5560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5560__count)));
                            vlSelf->__Vfunc_leading_zero32__5560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5560__count)));
                            vlSelf->__Vfunc_leading_zero32__5560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5572__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5572__part 
                            = vlSelf->__Vfunc_leading_zero32__5572__value;
                        vlSelf->__Vfunc_leading_zero32__5572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5572__count)));
                            vlSelf->__Vfunc_leading_zero32__5572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5572__count)));
                            vlSelf->__Vfunc_leading_zero32__5572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5572__count)));
                            vlSelf->__Vfunc_leading_zero32__5572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5572__count)));
                            vlSelf->__Vfunc_leading_zero32__5572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5584__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5584__part 
                            = vlSelf->__Vfunc_leading_zero32__5584__value;
                        vlSelf->__Vfunc_leading_zero32__5584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5584__count)));
                            vlSelf->__Vfunc_leading_zero32__5584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5584__count)));
                            vlSelf->__Vfunc_leading_zero32__5584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5584__count)));
                            vlSelf->__Vfunc_leading_zero32__5584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5584__count)));
                            vlSelf->__Vfunc_leading_zero32__5584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5596__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5596__part 
                            = vlSelf->__Vfunc_leading_zero32__5596__value;
                        vlSelf->__Vfunc_leading_zero32__5596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5596__count)));
                            vlSelf->__Vfunc_leading_zero32__5596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5596__count)));
                            vlSelf->__Vfunc_leading_zero32__5596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5596__count)));
                            vlSelf->__Vfunc_leading_zero32__5596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5596__count)));
                            vlSelf->__Vfunc_leading_zero32__5596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5608__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5608__part 
                            = vlSelf->__Vfunc_leading_zero32__5608__value;
                        vlSelf->__Vfunc_leading_zero32__5608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5608__count)));
                            vlSelf->__Vfunc_leading_zero32__5608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5608__count)));
                            vlSelf->__Vfunc_leading_zero32__5608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5608__count)));
                            vlSelf->__Vfunc_leading_zero32__5608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5608__count)));
                            vlSelf->__Vfunc_leading_zero32__5608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5620__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5620__part 
                            = vlSelf->__Vfunc_leading_zero32__5620__value;
                        vlSelf->__Vfunc_leading_zero32__5620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5620__count)));
                            vlSelf->__Vfunc_leading_zero32__5620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5620__count)));
                            vlSelf->__Vfunc_leading_zero32__5620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5620__count)));
                            vlSelf->__Vfunc_leading_zero32__5620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5620__count)));
                            vlSelf->__Vfunc_leading_zero32__5620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5632__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5632__part 
                            = vlSelf->__Vfunc_leading_zero32__5632__value;
                        vlSelf->__Vfunc_leading_zero32__5632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5632__count)));
                            vlSelf->__Vfunc_leading_zero32__5632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5632__count)));
                            vlSelf->__Vfunc_leading_zero32__5632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5632__count)));
                            vlSelf->__Vfunc_leading_zero32__5632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5632__count)));
                            vlSelf->__Vfunc_leading_zero32__5632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5632__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5644__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5644__part 
                            = vlSelf->__Vfunc_leading_zero32__5644__value;
                        vlSelf->__Vfunc_leading_zero32__5644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5644__count)));
                            vlSelf->__Vfunc_leading_zero32__5644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5644__count)));
                            vlSelf->__Vfunc_leading_zero32__5644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5644__count)));
                            vlSelf->__Vfunc_leading_zero32__5644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5644__count)));
                            vlSelf->__Vfunc_leading_zero32__5644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5656__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5656__part 
                            = vlSelf->__Vfunc_leading_zero32__5656__value;
                        vlSelf->__Vfunc_leading_zero32__5656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5656__count)));
                            vlSelf->__Vfunc_leading_zero32__5656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5656__count)));
                            vlSelf->__Vfunc_leading_zero32__5656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5656__count)));
                            vlSelf->__Vfunc_leading_zero32__5656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5656__count)));
                            vlSelf->__Vfunc_leading_zero32__5656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5668__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5668__part 
                            = vlSelf->__Vfunc_leading_zero32__5668__value;
                        vlSelf->__Vfunc_leading_zero32__5668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5668__count)));
                            vlSelf->__Vfunc_leading_zero32__5668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5668__count)));
                            vlSelf->__Vfunc_leading_zero32__5668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5668__count)));
                            vlSelf->__Vfunc_leading_zero32__5668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5668__count)));
                            vlSelf->__Vfunc_leading_zero32__5668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5680__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5680__part 
                            = vlSelf->__Vfunc_leading_zero32__5680__value;
                        vlSelf->__Vfunc_leading_zero32__5680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5680__count)));
                            vlSelf->__Vfunc_leading_zero32__5680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5680__count)));
                            vlSelf->__Vfunc_leading_zero32__5680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5680__count)));
                            vlSelf->__Vfunc_leading_zero32__5680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5680__count)));
                            vlSelf->__Vfunc_leading_zero32__5680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5692__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5692__part 
                            = vlSelf->__Vfunc_leading_zero32__5692__value;
                        vlSelf->__Vfunc_leading_zero32__5692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5692__count)));
                            vlSelf->__Vfunc_leading_zero32__5692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5692__count)));
                            vlSelf->__Vfunc_leading_zero32__5692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5692__count)));
                            vlSelf->__Vfunc_leading_zero32__5692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5692__count)));
                            vlSelf->__Vfunc_leading_zero32__5692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5704__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5704__part 
                            = vlSelf->__Vfunc_leading_zero32__5704__value;
                        vlSelf->__Vfunc_leading_zero32__5704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5704__count)));
                            vlSelf->__Vfunc_leading_zero32__5704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5704__count)));
                            vlSelf->__Vfunc_leading_zero32__5704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5704__count)));
                            vlSelf->__Vfunc_leading_zero32__5704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5704__count)));
                            vlSelf->__Vfunc_leading_zero32__5704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5716__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5716__part 
                            = vlSelf->__Vfunc_leading_zero32__5716__value;
                        vlSelf->__Vfunc_leading_zero32__5716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5716__count)));
                            vlSelf->__Vfunc_leading_zero32__5716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5716__count)));
                            vlSelf->__Vfunc_leading_zero32__5716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5716__count)));
                            vlSelf->__Vfunc_leading_zero32__5716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5716__count)));
                            vlSelf->__Vfunc_leading_zero32__5716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5728__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5728__part 
                            = vlSelf->__Vfunc_leading_zero32__5728__value;
                        vlSelf->__Vfunc_leading_zero32__5728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5728__count)));
                            vlSelf->__Vfunc_leading_zero32__5728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5728__count)));
                            vlSelf->__Vfunc_leading_zero32__5728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5728__count)));
                            vlSelf->__Vfunc_leading_zero32__5728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5728__count)));
                            vlSelf->__Vfunc_leading_zero32__5728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5740__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5740__part 
                            = vlSelf->__Vfunc_leading_zero32__5740__value;
                        vlSelf->__Vfunc_leading_zero32__5740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5740__count)));
                            vlSelf->__Vfunc_leading_zero32__5740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5740__count)));
                            vlSelf->__Vfunc_leading_zero32__5740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5740__count)));
                            vlSelf->__Vfunc_leading_zero32__5740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5740__count)));
                            vlSelf->__Vfunc_leading_zero32__5740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5752__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5752__part 
                            = vlSelf->__Vfunc_leading_zero32__5752__value;
                        vlSelf->__Vfunc_leading_zero32__5752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5752__count)));
                            vlSelf->__Vfunc_leading_zero32__5752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5752__count)));
                            vlSelf->__Vfunc_leading_zero32__5752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5752__count)));
                            vlSelf->__Vfunc_leading_zero32__5752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5752__count)));
                            vlSelf->__Vfunc_leading_zero32__5752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5764__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5764__part 
                            = vlSelf->__Vfunc_leading_zero32__5764__value;
                        vlSelf->__Vfunc_leading_zero32__5764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5764__count)));
                            vlSelf->__Vfunc_leading_zero32__5764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5764__count)));
                            vlSelf->__Vfunc_leading_zero32__5764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5764__count)));
                            vlSelf->__Vfunc_leading_zero32__5764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5764__count)));
                            vlSelf->__Vfunc_leading_zero32__5764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5776__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5776__part 
                            = vlSelf->__Vfunc_leading_zero32__5776__value;
                        vlSelf->__Vfunc_leading_zero32__5776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5776__count)));
                            vlSelf->__Vfunc_leading_zero32__5776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5776__count)));
                            vlSelf->__Vfunc_leading_zero32__5776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5776__count)));
                            vlSelf->__Vfunc_leading_zero32__5776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5776__count)));
                            vlSelf->__Vfunc_leading_zero32__5776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5776__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5788__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5788__part 
                            = vlSelf->__Vfunc_leading_zero32__5788__value;
                        vlSelf->__Vfunc_leading_zero32__5788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5788__count)));
                            vlSelf->__Vfunc_leading_zero32__5788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5788__count)));
                            vlSelf->__Vfunc_leading_zero32__5788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5788__count)));
                            vlSelf->__Vfunc_leading_zero32__5788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5788__count)));
                            vlSelf->__Vfunc_leading_zero32__5788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5788__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5800__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5800__part 
                            = vlSelf->__Vfunc_leading_zero32__5800__value;
                        vlSelf->__Vfunc_leading_zero32__5800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5800__count)));
                            vlSelf->__Vfunc_leading_zero32__5800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5800__count)));
                            vlSelf->__Vfunc_leading_zero32__5800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5800__count)));
                            vlSelf->__Vfunc_leading_zero32__5800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5800__count)));
                            vlSelf->__Vfunc_leading_zero32__5800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5812__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5812__part 
                            = vlSelf->__Vfunc_leading_zero32__5812__value;
                        vlSelf->__Vfunc_leading_zero32__5812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5812__count)));
                            vlSelf->__Vfunc_leading_zero32__5812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5812__count)));
                            vlSelf->__Vfunc_leading_zero32__5812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5812__count)));
                            vlSelf->__Vfunc_leading_zero32__5812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5812__count)));
                            vlSelf->__Vfunc_leading_zero32__5812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5812__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5824__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5824__part 
                            = vlSelf->__Vfunc_leading_zero32__5824__value;
                        vlSelf->__Vfunc_leading_zero32__5824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5824__count)));
                            vlSelf->__Vfunc_leading_zero32__5824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5824__count)));
                            vlSelf->__Vfunc_leading_zero32__5824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5824__count)));
                            vlSelf->__Vfunc_leading_zero32__5824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5824__count)));
                            vlSelf->__Vfunc_leading_zero32__5824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5824__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5836__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5836__part 
                            = vlSelf->__Vfunc_leading_zero32__5836__value;
                        vlSelf->__Vfunc_leading_zero32__5836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5836__count)));
                            vlSelf->__Vfunc_leading_zero32__5836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5836__count)));
                            vlSelf->__Vfunc_leading_zero32__5836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5836__count)));
                            vlSelf->__Vfunc_leading_zero32__5836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5836__count)));
                            vlSelf->__Vfunc_leading_zero32__5836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5848__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5848__part 
                            = vlSelf->__Vfunc_leading_zero32__5848__value;
                        vlSelf->__Vfunc_leading_zero32__5848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5848__count)));
                            vlSelf->__Vfunc_leading_zero32__5848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5848__count)));
                            vlSelf->__Vfunc_leading_zero32__5848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5848__count)));
                            vlSelf->__Vfunc_leading_zero32__5848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5848__count)));
                            vlSelf->__Vfunc_leading_zero32__5848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5848__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5860__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5860__part 
                            = vlSelf->__Vfunc_leading_zero32__5860__value;
                        vlSelf->__Vfunc_leading_zero32__5860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5860__count)));
                            vlSelf->__Vfunc_leading_zero32__5860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5860__count)));
                            vlSelf->__Vfunc_leading_zero32__5860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5860__count)));
                            vlSelf->__Vfunc_leading_zero32__5860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5860__count)));
                            vlSelf->__Vfunc_leading_zero32__5860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5860__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5872__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5872__part 
                            = vlSelf->__Vfunc_leading_zero32__5872__value;
                        vlSelf->__Vfunc_leading_zero32__5872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5872__count)));
                            vlSelf->__Vfunc_leading_zero32__5872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5872__count)));
                            vlSelf->__Vfunc_leading_zero32__5872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5872__count)));
                            vlSelf->__Vfunc_leading_zero32__5872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5872__count)));
                            vlSelf->__Vfunc_leading_zero32__5872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5884__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5884__part 
                            = vlSelf->__Vfunc_leading_zero32__5884__value;
                        vlSelf->__Vfunc_leading_zero32__5884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5884__count)));
                            vlSelf->__Vfunc_leading_zero32__5884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5884__count)));
                            vlSelf->__Vfunc_leading_zero32__5884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5884__count)));
                            vlSelf->__Vfunc_leading_zero32__5884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5884__count)));
                            vlSelf->__Vfunc_leading_zero32__5884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5884__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5896__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5896__part 
                            = vlSelf->__Vfunc_leading_zero32__5896__value;
                        vlSelf->__Vfunc_leading_zero32__5896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5896__count)));
                            vlSelf->__Vfunc_leading_zero32__5896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5896__count)));
                            vlSelf->__Vfunc_leading_zero32__5896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5896__count)));
                            vlSelf->__Vfunc_leading_zero32__5896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5896__count)));
                            vlSelf->__Vfunc_leading_zero32__5896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5896__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5908__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5908__part 
                            = vlSelf->__Vfunc_leading_zero32__5908__value;
                        vlSelf->__Vfunc_leading_zero32__5908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5908__count)));
                            vlSelf->__Vfunc_leading_zero32__5908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5908__count)));
                            vlSelf->__Vfunc_leading_zero32__5908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5908__count)));
                            vlSelf->__Vfunc_leading_zero32__5908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5908__count)));
                            vlSelf->__Vfunc_leading_zero32__5908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5920__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5920__part 
                            = vlSelf->__Vfunc_leading_zero32__5920__value;
                        vlSelf->__Vfunc_leading_zero32__5920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5920__count)));
                            vlSelf->__Vfunc_leading_zero32__5920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5920__count)));
                            vlSelf->__Vfunc_leading_zero32__5920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5920__count)));
                            vlSelf->__Vfunc_leading_zero32__5920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5920__count)));
                            vlSelf->__Vfunc_leading_zero32__5920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5920__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5932__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5932__part 
                            = vlSelf->__Vfunc_leading_zero32__5932__value;
                        vlSelf->__Vfunc_leading_zero32__5932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5932__count)));
                            vlSelf->__Vfunc_leading_zero32__5932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5932__count)));
                            vlSelf->__Vfunc_leading_zero32__5932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5932__count)));
                            vlSelf->__Vfunc_leading_zero32__5932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5932__count)));
                            vlSelf->__Vfunc_leading_zero32__5932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5932__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5944__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5944__part 
                            = vlSelf->__Vfunc_leading_zero32__5944__value;
                        vlSelf->__Vfunc_leading_zero32__5944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5944__count)));
                            vlSelf->__Vfunc_leading_zero32__5944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5944__count)));
                            vlSelf->__Vfunc_leading_zero32__5944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5944__count)));
                            vlSelf->__Vfunc_leading_zero32__5944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5944__count)));
                            vlSelf->__Vfunc_leading_zero32__5944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5944__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5956__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5956__part 
                            = vlSelf->__Vfunc_leading_zero32__5956__value;
                        vlSelf->__Vfunc_leading_zero32__5956__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5956__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5956__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5956__count)));
                            vlSelf->__Vfunc_leading_zero32__5956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5956__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5956__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5956__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5956__count)));
                            vlSelf->__Vfunc_leading_zero32__5956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5956__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5956__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5956__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5956__count)));
                            vlSelf->__Vfunc_leading_zero32__5956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5956__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5956__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5956__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5956__count)));
                            vlSelf->__Vfunc_leading_zero32__5956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5956__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5956__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5956__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5956__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5956__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5956__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5956__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5956__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5968__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5968__part 
                            = vlSelf->__Vfunc_leading_zero32__5968__value;
                        vlSelf->__Vfunc_leading_zero32__5968__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5968__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5968__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5968__count)));
                            vlSelf->__Vfunc_leading_zero32__5968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5968__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5968__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5968__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5968__count)));
                            vlSelf->__Vfunc_leading_zero32__5968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5968__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5968__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5968__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5968__count)));
                            vlSelf->__Vfunc_leading_zero32__5968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5968__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5968__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5968__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5968__count)));
                            vlSelf->__Vfunc_leading_zero32__5968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5968__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5968__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5968__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5968__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5968__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5968__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5968__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5968__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5980__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5980__part 
                            = vlSelf->__Vfunc_leading_zero32__5980__value;
                        vlSelf->__Vfunc_leading_zero32__5980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5980__count)));
                            vlSelf->__Vfunc_leading_zero32__5980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5980__count)));
                            vlSelf->__Vfunc_leading_zero32__5980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5980__count)));
                            vlSelf->__Vfunc_leading_zero32__5980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5980__count)));
                            vlSelf->__Vfunc_leading_zero32__5980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5980__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5992__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5992__part 
                            = vlSelf->__Vfunc_leading_zero32__5992__value;
                        vlSelf->__Vfunc_leading_zero32__5992__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5992__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5992__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5992__count)));
                            vlSelf->__Vfunc_leading_zero32__5992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5992__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5992__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5992__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5992__count)));
                            vlSelf->__Vfunc_leading_zero32__5992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5992__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5992__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5992__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5992__count)));
                            vlSelf->__Vfunc_leading_zero32__5992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5992__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5992__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5992__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5992__count)));
                            vlSelf->__Vfunc_leading_zero32__5992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5992__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5992__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5992__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5992__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5992__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5992__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5992__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5992__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6004__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6004__part 
                            = vlSelf->__Vfunc_leading_zero32__6004__value;
                        vlSelf->__Vfunc_leading_zero32__6004__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6004__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6004__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6004__count)));
                            vlSelf->__Vfunc_leading_zero32__6004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6004__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6004__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6004__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6004__count)));
                            vlSelf->__Vfunc_leading_zero32__6004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6004__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6004__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6004__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6004__count)));
                            vlSelf->__Vfunc_leading_zero32__6004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6004__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6004__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6004__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6004__count)));
                            vlSelf->__Vfunc_leading_zero32__6004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6004__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6004__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6004__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6004__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6004__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6004__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6004__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6004__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6016__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6016__part 
                            = vlSelf->__Vfunc_leading_zero32__6016__value;
                        vlSelf->__Vfunc_leading_zero32__6016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6016__count)));
                            vlSelf->__Vfunc_leading_zero32__6016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6016__count)));
                            vlSelf->__Vfunc_leading_zero32__6016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6016__count)));
                            vlSelf->__Vfunc_leading_zero32__6016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6016__count)));
                            vlSelf->__Vfunc_leading_zero32__6016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6016__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6028__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6028__part 
                            = vlSelf->__Vfunc_leading_zero32__6028__value;
                        vlSelf->__Vfunc_leading_zero32__6028__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6028__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6028__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6028__count)));
                            vlSelf->__Vfunc_leading_zero32__6028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6028__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6028__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6028__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6028__count)));
                            vlSelf->__Vfunc_leading_zero32__6028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6028__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6028__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6028__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6028__count)));
                            vlSelf->__Vfunc_leading_zero32__6028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6028__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6028__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6028__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6028__count)));
                            vlSelf->__Vfunc_leading_zero32__6028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6028__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6028__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6028__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6028__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6028__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6028__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6028__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6028__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6040__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6040__part 
                            = vlSelf->__Vfunc_leading_zero32__6040__value;
                        vlSelf->__Vfunc_leading_zero32__6040__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6040__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6040__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6040__count)));
                            vlSelf->__Vfunc_leading_zero32__6040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6040__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6040__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6040__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6040__count)));
                            vlSelf->__Vfunc_leading_zero32__6040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6040__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6040__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6040__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6040__count)));
                            vlSelf->__Vfunc_leading_zero32__6040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6040__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6040__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6040__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6040__count)));
                            vlSelf->__Vfunc_leading_zero32__6040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6040__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6040__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6040__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6040__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6040__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6040__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6040__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6040__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6052__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6052__part 
                            = vlSelf->__Vfunc_leading_zero32__6052__value;
                        vlSelf->__Vfunc_leading_zero32__6052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6052__count)));
                            vlSelf->__Vfunc_leading_zero32__6052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6052__count)));
                            vlSelf->__Vfunc_leading_zero32__6052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6052__count)));
                            vlSelf->__Vfunc_leading_zero32__6052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6052__count)));
                            vlSelf->__Vfunc_leading_zero32__6052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6052__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6064__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6064__part 
                            = vlSelf->__Vfunc_leading_zero32__6064__value;
                        vlSelf->__Vfunc_leading_zero32__6064__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6064__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6064__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6064__count)));
                            vlSelf->__Vfunc_leading_zero32__6064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6064__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6064__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6064__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6064__count)));
                            vlSelf->__Vfunc_leading_zero32__6064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6064__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6064__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6064__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6064__count)));
                            vlSelf->__Vfunc_leading_zero32__6064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6064__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6064__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6064__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6064__count)));
                            vlSelf->__Vfunc_leading_zero32__6064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6064__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6064__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6064__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6064__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6064__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6064__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6064__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6064__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6076__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6076__part 
                            = vlSelf->__Vfunc_leading_zero32__6076__value;
                        vlSelf->__Vfunc_leading_zero32__6076__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6076__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6076__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6076__count)));
                            vlSelf->__Vfunc_leading_zero32__6076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6076__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6076__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6076__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6076__count)));
                            vlSelf->__Vfunc_leading_zero32__6076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6076__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6076__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6076__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6076__count)));
                            vlSelf->__Vfunc_leading_zero32__6076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6076__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6076__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6076__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6076__count)));
                            vlSelf->__Vfunc_leading_zero32__6076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6076__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6076__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6076__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6076__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6076__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6076__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6076__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6076__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6088__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6088__part 
                            = vlSelf->__Vfunc_leading_zero32__6088__value;
                        vlSelf->__Vfunc_leading_zero32__6088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6088__count)));
                            vlSelf->__Vfunc_leading_zero32__6088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6088__count)));
                            vlSelf->__Vfunc_leading_zero32__6088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6088__count)));
                            vlSelf->__Vfunc_leading_zero32__6088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6088__count)));
                            vlSelf->__Vfunc_leading_zero32__6088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6088__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6100__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6100__part 
                            = vlSelf->__Vfunc_leading_zero32__6100__value;
                        vlSelf->__Vfunc_leading_zero32__6100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6100__count)));
                            vlSelf->__Vfunc_leading_zero32__6100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6100__count)));
                            vlSelf->__Vfunc_leading_zero32__6100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6100__count)));
                            vlSelf->__Vfunc_leading_zero32__6100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6100__count)));
                            vlSelf->__Vfunc_leading_zero32__6100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6100__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6112__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6112__part 
                            = vlSelf->__Vfunc_leading_zero32__6112__value;
                        vlSelf->__Vfunc_leading_zero32__6112__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6112__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6112__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6112__count)));
                            vlSelf->__Vfunc_leading_zero32__6112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6112__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6112__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6112__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6112__count)));
                            vlSelf->__Vfunc_leading_zero32__6112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6112__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6112__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6112__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6112__count)));
                            vlSelf->__Vfunc_leading_zero32__6112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6112__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6112__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6112__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6112__count)));
                            vlSelf->__Vfunc_leading_zero32__6112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6112__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6112__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6112__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6112__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6112__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6112__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6112__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6112__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6124__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6124__part 
                            = vlSelf->__Vfunc_leading_zero32__6124__value;
                        vlSelf->__Vfunc_leading_zero32__6124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6124__count)));
                            vlSelf->__Vfunc_leading_zero32__6124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6124__count)));
                            vlSelf->__Vfunc_leading_zero32__6124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6124__count)));
                            vlSelf->__Vfunc_leading_zero32__6124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6124__count)));
                            vlSelf->__Vfunc_leading_zero32__6124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6136__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6136__part 
                            = vlSelf->__Vfunc_leading_zero32__6136__value;
                        vlSelf->__Vfunc_leading_zero32__6136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6136__count)));
                            vlSelf->__Vfunc_leading_zero32__6136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6136__count)));
                            vlSelf->__Vfunc_leading_zero32__6136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6136__count)));
                            vlSelf->__Vfunc_leading_zero32__6136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6136__count)));
                            vlSelf->__Vfunc_leading_zero32__6136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6148__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6148__part 
                            = vlSelf->__Vfunc_leading_zero32__6148__value;
                        vlSelf->__Vfunc_leading_zero32__6148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6148__count)));
                            vlSelf->__Vfunc_leading_zero32__6148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6148__count)));
                            vlSelf->__Vfunc_leading_zero32__6148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6148__count)));
                            vlSelf->__Vfunc_leading_zero32__6148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6148__count)));
                            vlSelf->__Vfunc_leading_zero32__6148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6160__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6160__part 
                            = vlSelf->__Vfunc_leading_zero32__6160__value;
                        vlSelf->__Vfunc_leading_zero32__6160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6160__count)));
                            vlSelf->__Vfunc_leading_zero32__6160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6160__count)));
                            vlSelf->__Vfunc_leading_zero32__6160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6160__count)));
                            vlSelf->__Vfunc_leading_zero32__6160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6160__count)));
                            vlSelf->__Vfunc_leading_zero32__6160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6172__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6172__part 
                            = vlSelf->__Vfunc_leading_zero32__6172__value;
                        vlSelf->__Vfunc_leading_zero32__6172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6172__count)));
                            vlSelf->__Vfunc_leading_zero32__6172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6172__count)));
                            vlSelf->__Vfunc_leading_zero32__6172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6172__count)));
                            vlSelf->__Vfunc_leading_zero32__6172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6172__count)));
                            vlSelf->__Vfunc_leading_zero32__6172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6184__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6184__part 
                            = vlSelf->__Vfunc_leading_zero32__6184__value;
                        vlSelf->__Vfunc_leading_zero32__6184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6184__count)));
                            vlSelf->__Vfunc_leading_zero32__6184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6184__count)));
                            vlSelf->__Vfunc_leading_zero32__6184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6184__count)));
                            vlSelf->__Vfunc_leading_zero32__6184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6184__count)));
                            vlSelf->__Vfunc_leading_zero32__6184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3125__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3125__part 
                            = vlSelf->__Vfunc_leading_zero32__3125__value;
                        vlSelf->__Vfunc_leading_zero32__3125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                            vlSelf->__Vfunc_leading_zero32__3125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3137__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3137__part 
                            = vlSelf->__Vfunc_leading_zero32__3137__value;
                        vlSelf->__Vfunc_leading_zero32__3137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                            vlSelf->__Vfunc_leading_zero32__3137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3149__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3149__part 
                            = vlSelf->__Vfunc_leading_zero32__3149__value;
                        vlSelf->__Vfunc_leading_zero32__3149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                            vlSelf->__Vfunc_leading_zero32__3149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3161__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3161__part 
                            = vlSelf->__Vfunc_leading_zero32__3161__value;
                        vlSelf->__Vfunc_leading_zero32__3161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                            vlSelf->__Vfunc_leading_zero32__3161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3173__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3173__part 
                            = vlSelf->__Vfunc_leading_zero32__3173__value;
                        vlSelf->__Vfunc_leading_zero32__3173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                            vlSelf->__Vfunc_leading_zero32__3173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3173__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3185__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3185__part 
                            = vlSelf->__Vfunc_leading_zero32__3185__value;
                        vlSelf->__Vfunc_leading_zero32__3185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                            vlSelf->__Vfunc_leading_zero32__3185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3197__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3197__part 
                            = vlSelf->__Vfunc_leading_zero32__3197__value;
                        vlSelf->__Vfunc_leading_zero32__3197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                            vlSelf->__Vfunc_leading_zero32__3197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3209__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3209__part 
                            = vlSelf->__Vfunc_leading_zero32__3209__value;
                        vlSelf->__Vfunc_leading_zero32__3209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                            vlSelf->__Vfunc_leading_zero32__3209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3209__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3221__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3221__part 
                            = vlSelf->__Vfunc_leading_zero32__3221__value;
                        vlSelf->__Vfunc_leading_zero32__3221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                            vlSelf->__Vfunc_leading_zero32__3221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3233__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3233__part 
                            = vlSelf->__Vfunc_leading_zero32__3233__value;
                        vlSelf->__Vfunc_leading_zero32__3233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                            vlSelf->__Vfunc_leading_zero32__3233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3245__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3245__part 
                            = vlSelf->__Vfunc_leading_zero32__3245__value;
                        vlSelf->__Vfunc_leading_zero32__3245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                            vlSelf->__Vfunc_leading_zero32__3245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3245__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3257__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3257__part 
                            = vlSelf->__Vfunc_leading_zero32__3257__value;
                        vlSelf->__Vfunc_leading_zero32__3257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                            vlSelf->__Vfunc_leading_zero32__3257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3269__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3269__part 
                            = vlSelf->__Vfunc_leading_zero32__3269__value;
                        vlSelf->__Vfunc_leading_zero32__3269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                            vlSelf->__Vfunc_leading_zero32__3269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3281__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3281__part 
                            = vlSelf->__Vfunc_leading_zero32__3281__value;
                        vlSelf->__Vfunc_leading_zero32__3281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                            vlSelf->__Vfunc_leading_zero32__3281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3293__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3293__part 
                            = vlSelf->__Vfunc_leading_zero32__3293__value;
                        vlSelf->__Vfunc_leading_zero32__3293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                            vlSelf->__Vfunc_leading_zero32__3293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3305__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3305__part 
                            = vlSelf->__Vfunc_leading_zero32__3305__value;
                        vlSelf->__Vfunc_leading_zero32__3305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                            vlSelf->__Vfunc_leading_zero32__3305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3317__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3317__part 
                            = vlSelf->__Vfunc_leading_zero32__3317__value;
                        vlSelf->__Vfunc_leading_zero32__3317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                            vlSelf->__Vfunc_leading_zero32__3317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3329__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3329__part 
                            = vlSelf->__Vfunc_leading_zero32__3329__value;
                        vlSelf->__Vfunc_leading_zero32__3329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                            vlSelf->__Vfunc_leading_zero32__3329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3341__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3341__part 
                            = vlSelf->__Vfunc_leading_zero32__3341__value;
                        vlSelf->__Vfunc_leading_zero32__3341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                            vlSelf->__Vfunc_leading_zero32__3341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3353__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3353__part 
                            = vlSelf->__Vfunc_leading_zero32__3353__value;
                        vlSelf->__Vfunc_leading_zero32__3353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                            vlSelf->__Vfunc_leading_zero32__3353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3353__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3365__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3365__part 
                            = vlSelf->__Vfunc_leading_zero32__3365__value;
                        vlSelf->__Vfunc_leading_zero32__3365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                            vlSelf->__Vfunc_leading_zero32__3365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3377__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3377__part 
                            = vlSelf->__Vfunc_leading_zero32__3377__value;
                        vlSelf->__Vfunc_leading_zero32__3377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                            vlSelf->__Vfunc_leading_zero32__3377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3389__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3389__part 
                            = vlSelf->__Vfunc_leading_zero32__3389__value;
                        vlSelf->__Vfunc_leading_zero32__3389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                            vlSelf->__Vfunc_leading_zero32__3389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3389__Vfuncout)) 
                             - (IData)(8U))));
}
