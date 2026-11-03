// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__26(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__26\n"); );
    // Body
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
}
