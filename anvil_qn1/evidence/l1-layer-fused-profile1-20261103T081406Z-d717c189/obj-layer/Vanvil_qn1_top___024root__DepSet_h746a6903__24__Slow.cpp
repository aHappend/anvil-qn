// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__25(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__25\n"); );
    // Body
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
}
