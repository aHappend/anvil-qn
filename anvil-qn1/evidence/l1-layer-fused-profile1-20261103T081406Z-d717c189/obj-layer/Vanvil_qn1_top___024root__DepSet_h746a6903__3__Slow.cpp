// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__4(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__4\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7672__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7672__part 
                            = vlSelf->__Vfunc_leading_zero32__7672__value;
                        vlSelf->__Vfunc_leading_zero32__7672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7672__count)));
                            vlSelf->__Vfunc_leading_zero32__7672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7672__count)));
                            vlSelf->__Vfunc_leading_zero32__7672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7672__count)));
                            vlSelf->__Vfunc_leading_zero32__7672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7672__count)));
                            vlSelf->__Vfunc_leading_zero32__7672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7672__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7678__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7678__part 
                            = vlSelf->__Vfunc_leading_zero32__7678__value;
                        vlSelf->__Vfunc_leading_zero32__7678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7678__count)));
                            vlSelf->__Vfunc_leading_zero32__7678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7678__count)));
                            vlSelf->__Vfunc_leading_zero32__7678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7678__count)));
                            vlSelf->__Vfunc_leading_zero32__7678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7678__count)));
                            vlSelf->__Vfunc_leading_zero32__7678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7678__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7684__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7684__part 
                            = vlSelf->__Vfunc_leading_zero32__7684__value;
                        vlSelf->__Vfunc_leading_zero32__7684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7684__count)));
                            vlSelf->__Vfunc_leading_zero32__7684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7684__count)));
                            vlSelf->__Vfunc_leading_zero32__7684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7684__count)));
                            vlSelf->__Vfunc_leading_zero32__7684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7684__count)));
                            vlSelf->__Vfunc_leading_zero32__7684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7684__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7690__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7690__part 
                            = vlSelf->__Vfunc_leading_zero32__7690__value;
                        vlSelf->__Vfunc_leading_zero32__7690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7690__count)));
                            vlSelf->__Vfunc_leading_zero32__7690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7690__count)));
                            vlSelf->__Vfunc_leading_zero32__7690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7690__count)));
                            vlSelf->__Vfunc_leading_zero32__7690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7690__count)));
                            vlSelf->__Vfunc_leading_zero32__7690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7690__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7696__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7696__part 
                            = vlSelf->__Vfunc_leading_zero32__7696__value;
                        vlSelf->__Vfunc_leading_zero32__7696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7696__count)));
                            vlSelf->__Vfunc_leading_zero32__7696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7696__count)));
                            vlSelf->__Vfunc_leading_zero32__7696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7696__count)));
                            vlSelf->__Vfunc_leading_zero32__7696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7696__count)));
                            vlSelf->__Vfunc_leading_zero32__7696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7696__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7702__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7702__part 
                            = vlSelf->__Vfunc_leading_zero32__7702__value;
                        vlSelf->__Vfunc_leading_zero32__7702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7702__count)));
                            vlSelf->__Vfunc_leading_zero32__7702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7702__count)));
                            vlSelf->__Vfunc_leading_zero32__7702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7702__count)));
                            vlSelf->__Vfunc_leading_zero32__7702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7702__count)));
                            vlSelf->__Vfunc_leading_zero32__7702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7702__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7708__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7708__part 
                            = vlSelf->__Vfunc_leading_zero32__7708__value;
                        vlSelf->__Vfunc_leading_zero32__7708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7708__count)));
                            vlSelf->__Vfunc_leading_zero32__7708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7708__count)));
                            vlSelf->__Vfunc_leading_zero32__7708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7708__count)));
                            vlSelf->__Vfunc_leading_zero32__7708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7708__count)));
                            vlSelf->__Vfunc_leading_zero32__7708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7708__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7714__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7714__part 
                            = vlSelf->__Vfunc_leading_zero32__7714__value;
                        vlSelf->__Vfunc_leading_zero32__7714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7714__count)));
                            vlSelf->__Vfunc_leading_zero32__7714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7714__count)));
                            vlSelf->__Vfunc_leading_zero32__7714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7714__count)));
                            vlSelf->__Vfunc_leading_zero32__7714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7714__count)));
                            vlSelf->__Vfunc_leading_zero32__7714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7714__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7720__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7720__part 
                            = vlSelf->__Vfunc_leading_zero32__7720__value;
                        vlSelf->__Vfunc_leading_zero32__7720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7720__count)));
                            vlSelf->__Vfunc_leading_zero32__7720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7720__count)));
                            vlSelf->__Vfunc_leading_zero32__7720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7720__count)));
                            vlSelf->__Vfunc_leading_zero32__7720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7720__count)));
                            vlSelf->__Vfunc_leading_zero32__7720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7720__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8881__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__8881__part 
                            = vlSelf->__Vfunc_leading_zero32__8881__value;
                        vlSelf->__Vfunc_leading_zero32__8881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8881__count)));
                            vlSelf->__Vfunc_leading_zero32__8881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8881__count)));
                            vlSelf->__Vfunc_leading_zero32__8881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8881__count)));
                            vlSelf->__Vfunc_leading_zero32__8881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8881__count)));
                            vlSelf->__Vfunc_leading_zero32__8881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8881__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9665__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9665__part 
                            = vlSelf->__Vfunc_leading_zero32__9665__value;
                        vlSelf->__Vfunc_leading_zero32__9665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9665__count)));
                            vlSelf->__Vfunc_leading_zero32__9665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9665__count)));
                            vlSelf->__Vfunc_leading_zero32__9665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9665__count)));
                            vlSelf->__Vfunc_leading_zero32__9665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9665__count)));
                            vlSelf->__Vfunc_leading_zero32__9665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9665__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9671__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9671__part 
                            = vlSelf->__Vfunc_leading_zero32__9671__value;
                        vlSelf->__Vfunc_leading_zero32__9671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9671__count)));
                            vlSelf->__Vfunc_leading_zero32__9671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9671__count)));
                            vlSelf->__Vfunc_leading_zero32__9671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9671__count)));
                            vlSelf->__Vfunc_leading_zero32__9671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9671__count)));
                            vlSelf->__Vfunc_leading_zero32__9671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9671__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9677__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9677__part 
                            = vlSelf->__Vfunc_leading_zero32__9677__value;
                        vlSelf->__Vfunc_leading_zero32__9677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9677__count)));
                            vlSelf->__Vfunc_leading_zero32__9677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9677__count)));
                            vlSelf->__Vfunc_leading_zero32__9677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9677__count)));
                            vlSelf->__Vfunc_leading_zero32__9677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9677__count)));
                            vlSelf->__Vfunc_leading_zero32__9677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9677__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9683__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9683__part 
                            = vlSelf->__Vfunc_leading_zero32__9683__value;
                        vlSelf->__Vfunc_leading_zero32__9683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9683__count)));
                            vlSelf->__Vfunc_leading_zero32__9683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9683__count)));
                            vlSelf->__Vfunc_leading_zero32__9683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9683__count)));
                            vlSelf->__Vfunc_leading_zero32__9683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9683__count)));
                            vlSelf->__Vfunc_leading_zero32__9683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9683__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9689__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9689__part 
                            = vlSelf->__Vfunc_leading_zero32__9689__value;
                        vlSelf->__Vfunc_leading_zero32__9689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9689__count)));
                            vlSelf->__Vfunc_leading_zero32__9689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9689__count)));
                            vlSelf->__Vfunc_leading_zero32__9689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9689__count)));
                            vlSelf->__Vfunc_leading_zero32__9689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9689__count)));
                            vlSelf->__Vfunc_leading_zero32__9689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9689__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9695__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9695__part 
                            = vlSelf->__Vfunc_leading_zero32__9695__value;
                        vlSelf->__Vfunc_leading_zero32__9695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9695__count)));
                            vlSelf->__Vfunc_leading_zero32__9695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9695__count)));
                            vlSelf->__Vfunc_leading_zero32__9695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9695__count)));
                            vlSelf->__Vfunc_leading_zero32__9695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9695__count)));
                            vlSelf->__Vfunc_leading_zero32__9695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9695__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9701__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9701__part 
                            = vlSelf->__Vfunc_leading_zero32__9701__value;
                        vlSelf->__Vfunc_leading_zero32__9701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9701__count)));
                            vlSelf->__Vfunc_leading_zero32__9701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9701__count)));
                            vlSelf->__Vfunc_leading_zero32__9701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9701__count)));
                            vlSelf->__Vfunc_leading_zero32__9701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9701__count)));
                            vlSelf->__Vfunc_leading_zero32__9701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9701__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9707__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9707__part 
                            = vlSelf->__Vfunc_leading_zero32__9707__value;
                        vlSelf->__Vfunc_leading_zero32__9707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9707__count)));
                            vlSelf->__Vfunc_leading_zero32__9707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9707__count)));
                            vlSelf->__Vfunc_leading_zero32__9707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9707__count)));
                            vlSelf->__Vfunc_leading_zero32__9707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9707__count)));
                            vlSelf->__Vfunc_leading_zero32__9707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9707__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9713__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9713__part 
                            = vlSelf->__Vfunc_leading_zero32__9713__value;
                        vlSelf->__Vfunc_leading_zero32__9713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9713__count)));
                            vlSelf->__Vfunc_leading_zero32__9713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9713__count)));
                            vlSelf->__Vfunc_leading_zero32__9713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9713__count)));
                            vlSelf->__Vfunc_leading_zero32__9713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9713__count)));
                            vlSelf->__Vfunc_leading_zero32__9713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9713__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9719__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9719__part 
                            = vlSelf->__Vfunc_leading_zero32__9719__value;
                        vlSelf->__Vfunc_leading_zero32__9719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9719__count)));
                            vlSelf->__Vfunc_leading_zero32__9719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9719__count)));
                            vlSelf->__Vfunc_leading_zero32__9719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9719__count)));
                            vlSelf->__Vfunc_leading_zero32__9719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9719__count)));
                            vlSelf->__Vfunc_leading_zero32__9719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9719__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9725__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9725__part 
                            = vlSelf->__Vfunc_leading_zero32__9725__value;
                        vlSelf->__Vfunc_leading_zero32__9725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9725__count)));
                            vlSelf->__Vfunc_leading_zero32__9725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9725__count)));
                            vlSelf->__Vfunc_leading_zero32__9725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9725__count)));
                            vlSelf->__Vfunc_leading_zero32__9725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9725__count)));
                            vlSelf->__Vfunc_leading_zero32__9725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9725__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9731__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9731__part 
                            = vlSelf->__Vfunc_leading_zero32__9731__value;
                        vlSelf->__Vfunc_leading_zero32__9731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9731__count)));
                            vlSelf->__Vfunc_leading_zero32__9731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9731__count)));
                            vlSelf->__Vfunc_leading_zero32__9731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9731__count)));
                            vlSelf->__Vfunc_leading_zero32__9731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9731__count)));
                            vlSelf->__Vfunc_leading_zero32__9731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9731__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9737__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9737__part 
                            = vlSelf->__Vfunc_leading_zero32__9737__value;
                        vlSelf->__Vfunc_leading_zero32__9737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9737__count)));
                            vlSelf->__Vfunc_leading_zero32__9737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9737__count)));
                            vlSelf->__Vfunc_leading_zero32__9737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9737__count)));
                            vlSelf->__Vfunc_leading_zero32__9737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9737__count)));
                            vlSelf->__Vfunc_leading_zero32__9737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9737__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9743__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9743__part 
                            = vlSelf->__Vfunc_leading_zero32__9743__value;
                        vlSelf->__Vfunc_leading_zero32__9743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9743__count)));
                            vlSelf->__Vfunc_leading_zero32__9743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9743__count)));
                            vlSelf->__Vfunc_leading_zero32__9743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9743__count)));
                            vlSelf->__Vfunc_leading_zero32__9743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9743__count)));
                            vlSelf->__Vfunc_leading_zero32__9743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9743__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9749__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9749__part 
                            = vlSelf->__Vfunc_leading_zero32__9749__value;
                        vlSelf->__Vfunc_leading_zero32__9749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9749__count)));
                            vlSelf->__Vfunc_leading_zero32__9749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9749__count)));
                            vlSelf->__Vfunc_leading_zero32__9749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9749__count)));
                            vlSelf->__Vfunc_leading_zero32__9749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9749__count)));
                            vlSelf->__Vfunc_leading_zero32__9749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9749__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9755__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9755__part 
                            = vlSelf->__Vfunc_leading_zero32__9755__value;
                        vlSelf->__Vfunc_leading_zero32__9755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9755__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9761__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9761__part 
                            = vlSelf->__Vfunc_leading_zero32__9761__value;
                        vlSelf->__Vfunc_leading_zero32__9761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9761__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9767__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9767__part 
                            = vlSelf->__Vfunc_leading_zero32__9767__value;
                        vlSelf->__Vfunc_leading_zero32__9767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9767__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9773__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9773__part 
                            = vlSelf->__Vfunc_leading_zero32__9773__value;
                        vlSelf->__Vfunc_leading_zero32__9773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9773__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9779__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9779__part 
                            = vlSelf->__Vfunc_leading_zero32__9779__value;
                        vlSelf->__Vfunc_leading_zero32__9779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9779__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9785__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9785__part 
                            = vlSelf->__Vfunc_leading_zero32__9785__value;
                        vlSelf->__Vfunc_leading_zero32__9785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9785__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9791__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9791__part 
                            = vlSelf->__Vfunc_leading_zero32__9791__value;
                        vlSelf->__Vfunc_leading_zero32__9791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9791__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9797__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9797__part 
                            = vlSelf->__Vfunc_leading_zero32__9797__value;
                        vlSelf->__Vfunc_leading_zero32__9797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9797__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9803__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9803__part 
                            = vlSelf->__Vfunc_leading_zero32__9803__value;
                        vlSelf->__Vfunc_leading_zero32__9803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9803__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9809__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9809__part 
                            = vlSelf->__Vfunc_leading_zero32__9809__value;
                        vlSelf->__Vfunc_leading_zero32__9809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9809__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9815__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9815__part 
                            = vlSelf->__Vfunc_leading_zero32__9815__value;
                        vlSelf->__Vfunc_leading_zero32__9815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9815__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9821__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9821__part 
                            = vlSelf->__Vfunc_leading_zero32__9821__value;
                        vlSelf->__Vfunc_leading_zero32__9821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9821__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9827__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9827__part 
                            = vlSelf->__Vfunc_leading_zero32__9827__value;
                        vlSelf->__Vfunc_leading_zero32__9827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9827__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9833__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9833__part 
                            = vlSelf->__Vfunc_leading_zero32__9833__value;
                        vlSelf->__Vfunc_leading_zero32__9833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9833__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9839__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9839__part 
                            = vlSelf->__Vfunc_leading_zero32__9839__value;
                        vlSelf->__Vfunc_leading_zero32__9839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9839__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9845__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9845__part 
                            = vlSelf->__Vfunc_leading_zero32__9845__value;
                        vlSelf->__Vfunc_leading_zero32__9845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9845__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9851__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9851__part 
                            = vlSelf->__Vfunc_leading_zero32__9851__value;
                        vlSelf->__Vfunc_leading_zero32__9851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9851__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9857__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9857__part 
                            = vlSelf->__Vfunc_leading_zero32__9857__value;
                        vlSelf->__Vfunc_leading_zero32__9857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9857__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9863__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9863__part 
                            = vlSelf->__Vfunc_leading_zero32__9863__value;
                        vlSelf->__Vfunc_leading_zero32__9863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9863__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9869__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9869__part 
                            = vlSelf->__Vfunc_leading_zero32__9869__value;
                        vlSelf->__Vfunc_leading_zero32__9869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9869__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9875__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9875__part 
                            = vlSelf->__Vfunc_leading_zero32__9875__value;
                        vlSelf->__Vfunc_leading_zero32__9875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9875__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9881__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9881__part 
                            = vlSelf->__Vfunc_leading_zero32__9881__value;
                        vlSelf->__Vfunc_leading_zero32__9881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9881__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9887__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9887__part 
                            = vlSelf->__Vfunc_leading_zero32__9887__value;
                        vlSelf->__Vfunc_leading_zero32__9887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9887__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9893__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9893__part 
                            = vlSelf->__Vfunc_leading_zero32__9893__value;
                        vlSelf->__Vfunc_leading_zero32__9893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9893__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9899__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9899__part 
                            = vlSelf->__Vfunc_leading_zero32__9899__value;
                        vlSelf->__Vfunc_leading_zero32__9899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9899__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9905__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9905__part 
                            = vlSelf->__Vfunc_leading_zero32__9905__value;
                        vlSelf->__Vfunc_leading_zero32__9905__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9905__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9905__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9905__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9905__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9905__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9911__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9911__part 
                            = vlSelf->__Vfunc_leading_zero32__9911__value;
                        vlSelf->__Vfunc_leading_zero32__9911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9911__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9917__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9917__part 
                            = vlSelf->__Vfunc_leading_zero32__9917__value;
                        vlSelf->__Vfunc_leading_zero32__9917__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9917__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9917__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9917__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9917__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9917__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9923__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9923__part 
                            = vlSelf->__Vfunc_leading_zero32__9923__value;
                        vlSelf->__Vfunc_leading_zero32__9923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9923__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9929__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9929__part 
                            = vlSelf->__Vfunc_leading_zero32__9929__value;
                        vlSelf->__Vfunc_leading_zero32__9929__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9929__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9929__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9929__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9929__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9929__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9935__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9935__part 
                            = vlSelf->__Vfunc_leading_zero32__9935__value;
                        vlSelf->__Vfunc_leading_zero32__9935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9935__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9941__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9941__part 
                            = vlSelf->__Vfunc_leading_zero32__9941__value;
                        vlSelf->__Vfunc_leading_zero32__9941__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9941__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9941__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9941__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9941__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9941__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9947__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9947__part 
                            = vlSelf->__Vfunc_leading_zero32__9947__value;
                        vlSelf->__Vfunc_leading_zero32__9947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9947__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9953__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9953__part 
                            = vlSelf->__Vfunc_leading_zero32__9953__value;
                        vlSelf->__Vfunc_leading_zero32__9953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9953__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9959__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9959__part 
                            = vlSelf->__Vfunc_leading_zero32__9959__value;
                        vlSelf->__Vfunc_leading_zero32__9959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9959__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9965__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9965__part 
                            = vlSelf->__Vfunc_leading_zero32__9965__value;
                        vlSelf->__Vfunc_leading_zero32__9965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9965__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9971__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9971__part 
                            = vlSelf->__Vfunc_leading_zero32__9971__value;
                        vlSelf->__Vfunc_leading_zero32__9971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9971__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9977__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9977__part 
                            = vlSelf->__Vfunc_leading_zero32__9977__value;
                        vlSelf->__Vfunc_leading_zero32__9977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9977__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9983__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9983__part 
                            = vlSelf->__Vfunc_leading_zero32__9983__value;
                        vlSelf->__Vfunc_leading_zero32__9983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9983__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9989__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9989__part 
                            = vlSelf->__Vfunc_leading_zero32__9989__value;
                        vlSelf->__Vfunc_leading_zero32__9989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9989__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9995__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9995__part 
                            = vlSelf->__Vfunc_leading_zero32__9995__value;
                        vlSelf->__Vfunc_leading_zero32__9995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9995__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10001__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10001__part 
                            = vlSelf->__Vfunc_leading_zero32__10001__value;
                        vlSelf->__Vfunc_leading_zero32__10001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10001__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10007__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10007__part 
                            = vlSelf->__Vfunc_leading_zero32__10007__value;
                        vlSelf->__Vfunc_leading_zero32__10007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10007__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10013__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10013__part 
                            = vlSelf->__Vfunc_leading_zero32__10013__value;
                        vlSelf->__Vfunc_leading_zero32__10013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10013__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10019__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10019__part 
                            = vlSelf->__Vfunc_leading_zero32__10019__value;
                        vlSelf->__Vfunc_leading_zero32__10019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10019__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10025__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10025__part 
                            = vlSelf->__Vfunc_leading_zero32__10025__value;
                        vlSelf->__Vfunc_leading_zero32__10025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10025__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10031__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10031__part 
                            = vlSelf->__Vfunc_leading_zero32__10031__value;
                        vlSelf->__Vfunc_leading_zero32__10031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10031__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10037__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10037__part 
                            = vlSelf->__Vfunc_leading_zero32__10037__value;
                        vlSelf->__Vfunc_leading_zero32__10037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10037__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10043__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10043__part 
                            = vlSelf->__Vfunc_leading_zero32__10043__value;
                        vlSelf->__Vfunc_leading_zero32__10043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10043__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10049__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10049__part 
                            = vlSelf->__Vfunc_leading_zero32__10049__value;
                        vlSelf->__Vfunc_leading_zero32__10049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10049__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10055__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10055__part 
                            = vlSelf->__Vfunc_leading_zero32__10055__value;
                        vlSelf->__Vfunc_leading_zero32__10055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10055__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10061__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10061__part 
                            = vlSelf->__Vfunc_leading_zero32__10061__value;
                        vlSelf->__Vfunc_leading_zero32__10061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10061__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10067__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10067__part 
                            = vlSelf->__Vfunc_leading_zero32__10067__value;
                        vlSelf->__Vfunc_leading_zero32__10067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10067__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10073__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10073__part 
                            = vlSelf->__Vfunc_leading_zero32__10073__value;
                        vlSelf->__Vfunc_leading_zero32__10073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10073__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10079__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10079__part 
                            = vlSelf->__Vfunc_leading_zero32__10079__value;
                        vlSelf->__Vfunc_leading_zero32__10079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10079__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10085__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10085__part 
                            = vlSelf->__Vfunc_leading_zero32__10085__value;
                        vlSelf->__Vfunc_leading_zero32__10085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10085__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10091__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10091__part 
                            = vlSelf->__Vfunc_leading_zero32__10091__value;
                        vlSelf->__Vfunc_leading_zero32__10091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10091__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10097__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10097__part 
                            = vlSelf->__Vfunc_leading_zero32__10097__value;
                        vlSelf->__Vfunc_leading_zero32__10097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10097__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10103__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10103__part 
                            = vlSelf->__Vfunc_leading_zero32__10103__value;
                        vlSelf->__Vfunc_leading_zero32__10103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10103__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10109__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10109__part 
                            = vlSelf->__Vfunc_leading_zero32__10109__value;
                        vlSelf->__Vfunc_leading_zero32__10109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10109__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10115__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10115__part 
                            = vlSelf->__Vfunc_leading_zero32__10115__value;
                        vlSelf->__Vfunc_leading_zero32__10115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10115__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10121__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10121__part 
                            = vlSelf->__Vfunc_leading_zero32__10121__value;
                        vlSelf->__Vfunc_leading_zero32__10121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10121__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10127__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10127__part 
                            = vlSelf->__Vfunc_leading_zero32__10127__value;
                        vlSelf->__Vfunc_leading_zero32__10127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10127__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10133__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10133__part 
                            = vlSelf->__Vfunc_leading_zero32__10133__value;
                        vlSelf->__Vfunc_leading_zero32__10133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10133__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10139__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10139__part 
                            = vlSelf->__Vfunc_leading_zero32__10139__value;
                        vlSelf->__Vfunc_leading_zero32__10139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10139__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10145__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10145__part 
                            = vlSelf->__Vfunc_leading_zero32__10145__value;
                        vlSelf->__Vfunc_leading_zero32__10145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10145__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10151__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10151__part 
                            = vlSelf->__Vfunc_leading_zero32__10151__value;
                        vlSelf->__Vfunc_leading_zero32__10151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10151__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10157__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10157__part 
                            = vlSelf->__Vfunc_leading_zero32__10157__value;
                        vlSelf->__Vfunc_leading_zero32__10157__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10157__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10157__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10157__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10157__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10157__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10163__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10163__part 
                            = vlSelf->__Vfunc_leading_zero32__10163__value;
                        vlSelf->__Vfunc_leading_zero32__10163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10163__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10169__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10169__part 
                            = vlSelf->__Vfunc_leading_zero32__10169__value;
                        vlSelf->__Vfunc_leading_zero32__10169__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10169__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10169__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10169__count)));
                            vlSelf->__Vfunc_leading_zero32__10169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10169__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10169__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10169__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10169__count)));
                            vlSelf->__Vfunc_leading_zero32__10169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10169__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10169__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10169__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10169__count)));
                            vlSelf->__Vfunc_leading_zero32__10169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10169__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10169__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10169__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10169__count)));
                            vlSelf->__Vfunc_leading_zero32__10169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10169__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10169__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10169__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10169__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10169__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10169__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10169__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10169__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10175__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10175__part 
                            = vlSelf->__Vfunc_leading_zero32__10175__value;
                        vlSelf->__Vfunc_leading_zero32__10175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10175__count)));
                            vlSelf->__Vfunc_leading_zero32__10175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10175__count)));
                            vlSelf->__Vfunc_leading_zero32__10175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10175__count)));
                            vlSelf->__Vfunc_leading_zero32__10175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10175__count)));
                            vlSelf->__Vfunc_leading_zero32__10175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10175__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10181__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10181__part 
                            = vlSelf->__Vfunc_leading_zero32__10181__value;
                        vlSelf->__Vfunc_leading_zero32__10181__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10181__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10181__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10181__count)));
                            vlSelf->__Vfunc_leading_zero32__10181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10181__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10181__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10181__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10181__count)));
                            vlSelf->__Vfunc_leading_zero32__10181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10181__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10181__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10181__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10181__count)));
                            vlSelf->__Vfunc_leading_zero32__10181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10181__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10181__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10181__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10181__count)));
                            vlSelf->__Vfunc_leading_zero32__10181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10181__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10181__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10181__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10181__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10181__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10181__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10181__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10181__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10187__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10187__part 
                            = vlSelf->__Vfunc_leading_zero32__10187__value;
                        vlSelf->__Vfunc_leading_zero32__10187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10187__count)));
                            vlSelf->__Vfunc_leading_zero32__10187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10187__count)));
                            vlSelf->__Vfunc_leading_zero32__10187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10187__count)));
                            vlSelf->__Vfunc_leading_zero32__10187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10187__count)));
                            vlSelf->__Vfunc_leading_zero32__10187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10187__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10193__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10193__part 
                            = vlSelf->__Vfunc_leading_zero32__10193__value;
                        vlSelf->__Vfunc_leading_zero32__10193__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10193__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10193__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10193__count)));
                            vlSelf->__Vfunc_leading_zero32__10193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10193__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10193__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10193__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10193__count)));
                            vlSelf->__Vfunc_leading_zero32__10193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10193__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10193__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10193__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10193__count)));
                            vlSelf->__Vfunc_leading_zero32__10193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10193__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10193__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10193__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10193__count)));
                            vlSelf->__Vfunc_leading_zero32__10193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10193__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10193__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10193__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10193__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10193__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10193__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10193__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10193__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10199__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10199__part 
                            = vlSelf->__Vfunc_leading_zero32__10199__value;
                        vlSelf->__Vfunc_leading_zero32__10199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10199__count)));
                            vlSelf->__Vfunc_leading_zero32__10199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10199__count)));
                            vlSelf->__Vfunc_leading_zero32__10199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10199__count)));
                            vlSelf->__Vfunc_leading_zero32__10199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10199__count)));
                            vlSelf->__Vfunc_leading_zero32__10199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10199__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10205__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10205__part 
                            = vlSelf->__Vfunc_leading_zero32__10205__value;
                        vlSelf->__Vfunc_leading_zero32__10205__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10205__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10205__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10205__count)));
                            vlSelf->__Vfunc_leading_zero32__10205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10205__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10205__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10205__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10205__count)));
                            vlSelf->__Vfunc_leading_zero32__10205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10205__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10205__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10205__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10205__count)));
                            vlSelf->__Vfunc_leading_zero32__10205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10205__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10205__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10205__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10205__count)));
                            vlSelf->__Vfunc_leading_zero32__10205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10205__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10205__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10205__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10205__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10205__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10205__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10205__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10205__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10211__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10211__part 
                            = vlSelf->__Vfunc_leading_zero32__10211__value;
                        vlSelf->__Vfunc_leading_zero32__10211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10211__count)));
                            vlSelf->__Vfunc_leading_zero32__10211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10211__count)));
                            vlSelf->__Vfunc_leading_zero32__10211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10211__count)));
                            vlSelf->__Vfunc_leading_zero32__10211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10211__count)));
                            vlSelf->__Vfunc_leading_zero32__10211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10211__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10217__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10217__part 
                            = vlSelf->__Vfunc_leading_zero32__10217__value;
                        vlSelf->__Vfunc_leading_zero32__10217__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10217__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10217__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10217__count)));
                            vlSelf->__Vfunc_leading_zero32__10217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10217__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10217__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10217__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10217__count)));
                            vlSelf->__Vfunc_leading_zero32__10217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10217__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10217__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10217__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10217__count)));
                            vlSelf->__Vfunc_leading_zero32__10217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10217__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10217__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10217__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10217__count)));
                            vlSelf->__Vfunc_leading_zero32__10217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10217__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10217__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10217__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10217__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10217__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10217__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10217__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10217__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10223__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10223__part 
                            = vlSelf->__Vfunc_leading_zero32__10223__value;
                        vlSelf->__Vfunc_leading_zero32__10223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10223__count)));
                            vlSelf->__Vfunc_leading_zero32__10223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10223__count)));
                            vlSelf->__Vfunc_leading_zero32__10223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10223__count)));
                            vlSelf->__Vfunc_leading_zero32__10223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10223__count)));
                            vlSelf->__Vfunc_leading_zero32__10223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10223__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10229__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10229__part 
                            = vlSelf->__Vfunc_leading_zero32__10229__value;
                        vlSelf->__Vfunc_leading_zero32__10229__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10229__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10229__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10229__count)));
                            vlSelf->__Vfunc_leading_zero32__10229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10229__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10229__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10229__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10229__count)));
                            vlSelf->__Vfunc_leading_zero32__10229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10229__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10229__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10229__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10229__count)));
                            vlSelf->__Vfunc_leading_zero32__10229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10229__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10229__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10229__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10229__count)));
                            vlSelf->__Vfunc_leading_zero32__10229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10229__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10229__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10229__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10229__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10229__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10229__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10229__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10229__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10235__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10235__part 
                            = vlSelf->__Vfunc_leading_zero32__10235__value;
                        vlSelf->__Vfunc_leading_zero32__10235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10235__count)));
                            vlSelf->__Vfunc_leading_zero32__10235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10235__count)));
                            vlSelf->__Vfunc_leading_zero32__10235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10235__count)));
                            vlSelf->__Vfunc_leading_zero32__10235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10235__count)));
                            vlSelf->__Vfunc_leading_zero32__10235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10235__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10241__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10241__part 
                            = vlSelf->__Vfunc_leading_zero32__10241__value;
                        vlSelf->__Vfunc_leading_zero32__10241__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10241__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10241__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10241__count)));
                            vlSelf->__Vfunc_leading_zero32__10241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10241__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10241__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10241__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10241__count)));
                            vlSelf->__Vfunc_leading_zero32__10241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10241__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10241__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10241__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10241__count)));
                            vlSelf->__Vfunc_leading_zero32__10241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10241__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10241__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10241__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10241__count)));
                            vlSelf->__Vfunc_leading_zero32__10241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10241__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10241__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10241__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10241__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10241__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10241__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10241__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10241__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10247__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10247__part 
                            = vlSelf->__Vfunc_leading_zero32__10247__value;
                        vlSelf->__Vfunc_leading_zero32__10247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10247__count)));
                            vlSelf->__Vfunc_leading_zero32__10247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10247__count)));
                            vlSelf->__Vfunc_leading_zero32__10247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10247__count)));
                            vlSelf->__Vfunc_leading_zero32__10247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10247__count)));
                            vlSelf->__Vfunc_leading_zero32__10247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10247__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10253__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10253__part 
                            = vlSelf->__Vfunc_leading_zero32__10253__value;
                        vlSelf->__Vfunc_leading_zero32__10253__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10253__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10253__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10253__count)));
                            vlSelf->__Vfunc_leading_zero32__10253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10253__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10253__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10253__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10253__count)));
                            vlSelf->__Vfunc_leading_zero32__10253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10253__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10253__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10253__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10253__count)));
                            vlSelf->__Vfunc_leading_zero32__10253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10253__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10253__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10253__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10253__count)));
                            vlSelf->__Vfunc_leading_zero32__10253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10253__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10253__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10253__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10253__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10253__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10253__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10253__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10253__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10259__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10259__part 
                            = vlSelf->__Vfunc_leading_zero32__10259__value;
                        vlSelf->__Vfunc_leading_zero32__10259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10259__count)));
                            vlSelf->__Vfunc_leading_zero32__10259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10259__count)));
                            vlSelf->__Vfunc_leading_zero32__10259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10259__count)));
                            vlSelf->__Vfunc_leading_zero32__10259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10259__count)));
                            vlSelf->__Vfunc_leading_zero32__10259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10259__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10265__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10265__part 
                            = vlSelf->__Vfunc_leading_zero32__10265__value;
                        vlSelf->__Vfunc_leading_zero32__10265__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10265__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10265__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10265__count)));
                            vlSelf->__Vfunc_leading_zero32__10265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10265__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10265__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10265__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10265__count)));
                            vlSelf->__Vfunc_leading_zero32__10265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10265__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10265__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10265__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10265__count)));
                            vlSelf->__Vfunc_leading_zero32__10265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10265__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10265__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10265__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10265__count)));
                            vlSelf->__Vfunc_leading_zero32__10265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10265__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10265__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10265__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10265__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10265__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10265__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10265__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10265__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10271__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10271__part 
                            = vlSelf->__Vfunc_leading_zero32__10271__value;
                        vlSelf->__Vfunc_leading_zero32__10271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10271__count)));
                            vlSelf->__Vfunc_leading_zero32__10271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10271__count)));
                            vlSelf->__Vfunc_leading_zero32__10271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10271__count)));
                            vlSelf->__Vfunc_leading_zero32__10271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10271__count)));
                            vlSelf->__Vfunc_leading_zero32__10271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10271__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10277__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10277__part 
                            = vlSelf->__Vfunc_leading_zero32__10277__value;
                        vlSelf->__Vfunc_leading_zero32__10277__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10277__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10277__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10277__count)));
                            vlSelf->__Vfunc_leading_zero32__10277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10277__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10277__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10277__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10277__count)));
                            vlSelf->__Vfunc_leading_zero32__10277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10277__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10277__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10277__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10277__count)));
                            vlSelf->__Vfunc_leading_zero32__10277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10277__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10277__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10277__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10277__count)));
                            vlSelf->__Vfunc_leading_zero32__10277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10277__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10277__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10277__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10277__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10277__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10277__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10277__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10277__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10283__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10283__part 
                            = vlSelf->__Vfunc_leading_zero32__10283__value;
                        vlSelf->__Vfunc_leading_zero32__10283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10283__count)));
                            vlSelf->__Vfunc_leading_zero32__10283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10283__count)));
                            vlSelf->__Vfunc_leading_zero32__10283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10283__count)));
                            vlSelf->__Vfunc_leading_zero32__10283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10283__count)));
                            vlSelf->__Vfunc_leading_zero32__10283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10283__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10289__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10289__part 
                            = vlSelf->__Vfunc_leading_zero32__10289__value;
                        vlSelf->__Vfunc_leading_zero32__10289__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10289__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10289__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10289__count)));
                            vlSelf->__Vfunc_leading_zero32__10289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10289__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10289__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10289__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10289__count)));
                            vlSelf->__Vfunc_leading_zero32__10289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10289__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10289__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10289__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10289__count)));
                            vlSelf->__Vfunc_leading_zero32__10289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10289__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10289__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10289__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10289__count)));
                            vlSelf->__Vfunc_leading_zero32__10289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10289__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10289__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10289__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10289__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10289__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10289__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10289__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10289__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10295__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10295__part 
                            = vlSelf->__Vfunc_leading_zero32__10295__value;
                        vlSelf->__Vfunc_leading_zero32__10295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10295__count)));
                            vlSelf->__Vfunc_leading_zero32__10295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10295__count)));
                            vlSelf->__Vfunc_leading_zero32__10295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10295__count)));
                            vlSelf->__Vfunc_leading_zero32__10295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10295__count)));
                            vlSelf->__Vfunc_leading_zero32__10295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10295__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10301__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10301__part 
                            = vlSelf->__Vfunc_leading_zero32__10301__value;
                        vlSelf->__Vfunc_leading_zero32__10301__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10301__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10301__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10301__count)));
                            vlSelf->__Vfunc_leading_zero32__10301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10301__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10301__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10301__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10301__count)));
                            vlSelf->__Vfunc_leading_zero32__10301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10301__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10301__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10301__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10301__count)));
                            vlSelf->__Vfunc_leading_zero32__10301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10301__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10301__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10301__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10301__count)));
                            vlSelf->__Vfunc_leading_zero32__10301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10301__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10301__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10301__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10301__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10301__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10301__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10301__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10301__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10307__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10307__part 
                            = vlSelf->__Vfunc_leading_zero32__10307__value;
                        vlSelf->__Vfunc_leading_zero32__10307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10307__count)));
                            vlSelf->__Vfunc_leading_zero32__10307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10307__count)));
                            vlSelf->__Vfunc_leading_zero32__10307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10307__count)));
                            vlSelf->__Vfunc_leading_zero32__10307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10307__count)));
                            vlSelf->__Vfunc_leading_zero32__10307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10307__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10313__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10313__part 
                            = vlSelf->__Vfunc_leading_zero32__10313__value;
                        vlSelf->__Vfunc_leading_zero32__10313__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10313__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10313__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10313__count)));
                            vlSelf->__Vfunc_leading_zero32__10313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10313__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10313__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10313__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10313__count)));
                            vlSelf->__Vfunc_leading_zero32__10313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10313__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10313__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10313__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10313__count)));
                            vlSelf->__Vfunc_leading_zero32__10313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10313__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10313__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10313__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10313__count)));
                            vlSelf->__Vfunc_leading_zero32__10313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10313__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10313__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10313__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10313__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10313__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10313__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10313__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10313__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10319__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10319__part 
                            = vlSelf->__Vfunc_leading_zero32__10319__value;
                        vlSelf->__Vfunc_leading_zero32__10319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10319__count)));
                            vlSelf->__Vfunc_leading_zero32__10319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10319__count)));
                            vlSelf->__Vfunc_leading_zero32__10319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10319__count)));
                            vlSelf->__Vfunc_leading_zero32__10319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10319__count)));
                            vlSelf->__Vfunc_leading_zero32__10319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10319__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10325__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10325__part 
                            = vlSelf->__Vfunc_leading_zero32__10325__value;
                        vlSelf->__Vfunc_leading_zero32__10325__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10325__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10325__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10325__count)));
                            vlSelf->__Vfunc_leading_zero32__10325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10325__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10325__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10325__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10325__count)));
                            vlSelf->__Vfunc_leading_zero32__10325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10325__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10325__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10325__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10325__count)));
                            vlSelf->__Vfunc_leading_zero32__10325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10325__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10325__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10325__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10325__count)));
                            vlSelf->__Vfunc_leading_zero32__10325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10325__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10325__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10325__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10325__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10325__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10325__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10325__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10325__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10331__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10331__part 
                            = vlSelf->__Vfunc_leading_zero32__10331__value;
                        vlSelf->__Vfunc_leading_zero32__10331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10331__count)));
                            vlSelf->__Vfunc_leading_zero32__10331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10331__count)));
                            vlSelf->__Vfunc_leading_zero32__10331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10331__count)));
                            vlSelf->__Vfunc_leading_zero32__10331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10331__count)));
                            vlSelf->__Vfunc_leading_zero32__10331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10331__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10337__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10337__part 
                            = vlSelf->__Vfunc_leading_zero32__10337__value;
                        vlSelf->__Vfunc_leading_zero32__10337__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10337__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10337__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10337__count)));
                            vlSelf->__Vfunc_leading_zero32__10337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10337__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10337__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10337__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10337__count)));
                            vlSelf->__Vfunc_leading_zero32__10337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10337__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10337__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10337__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10337__count)));
                            vlSelf->__Vfunc_leading_zero32__10337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10337__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10337__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10337__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10337__count)));
                            vlSelf->__Vfunc_leading_zero32__10337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10337__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10337__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10337__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10337__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10337__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10337__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10337__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10337__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10343__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10343__part 
                            = vlSelf->__Vfunc_leading_zero32__10343__value;
                        vlSelf->__Vfunc_leading_zero32__10343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10343__count)));
                            vlSelf->__Vfunc_leading_zero32__10343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10343__count)));
                            vlSelf->__Vfunc_leading_zero32__10343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10343__count)));
                            vlSelf->__Vfunc_leading_zero32__10343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10343__count)));
                            vlSelf->__Vfunc_leading_zero32__10343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10343__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10349__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10349__part 
                            = vlSelf->__Vfunc_leading_zero32__10349__value;
                        vlSelf->__Vfunc_leading_zero32__10349__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10349__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10349__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10349__count)));
                            vlSelf->__Vfunc_leading_zero32__10349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10349__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10349__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10349__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10349__count)));
                            vlSelf->__Vfunc_leading_zero32__10349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10349__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10349__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10349__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10349__count)));
                            vlSelf->__Vfunc_leading_zero32__10349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10349__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10349__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10349__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10349__count)));
                            vlSelf->__Vfunc_leading_zero32__10349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10349__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10349__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10349__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10349__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10349__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10349__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10349__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10349__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10355__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10355__part 
                            = vlSelf->__Vfunc_leading_zero32__10355__value;
                        vlSelf->__Vfunc_leading_zero32__10355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10355__count)));
                            vlSelf->__Vfunc_leading_zero32__10355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10355__count)));
                            vlSelf->__Vfunc_leading_zero32__10355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10355__count)));
                            vlSelf->__Vfunc_leading_zero32__10355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10355__count)));
                            vlSelf->__Vfunc_leading_zero32__10355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10355__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10361__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10361__part 
                            = vlSelf->__Vfunc_leading_zero32__10361__value;
                        vlSelf->__Vfunc_leading_zero32__10361__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10361__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10361__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10361__count)));
                            vlSelf->__Vfunc_leading_zero32__10361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10361__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10361__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10361__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10361__count)));
                            vlSelf->__Vfunc_leading_zero32__10361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10361__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10361__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10361__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10361__count)));
                            vlSelf->__Vfunc_leading_zero32__10361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10361__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10361__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10361__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10361__count)));
                            vlSelf->__Vfunc_leading_zero32__10361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10361__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10361__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10361__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10361__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10361__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10361__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10361__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10361__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10367__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10367__part 
                            = vlSelf->__Vfunc_leading_zero32__10367__value;
                        vlSelf->__Vfunc_leading_zero32__10367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10367__count)));
                            vlSelf->__Vfunc_leading_zero32__10367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10367__count)));
                            vlSelf->__Vfunc_leading_zero32__10367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10367__count)));
                            vlSelf->__Vfunc_leading_zero32__10367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10367__count)));
                            vlSelf->__Vfunc_leading_zero32__10367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10367__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10373__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10373__part 
                            = vlSelf->__Vfunc_leading_zero32__10373__value;
                        vlSelf->__Vfunc_leading_zero32__10373__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10373__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10373__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10373__count)));
                            vlSelf->__Vfunc_leading_zero32__10373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10373__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10373__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10373__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10373__count)));
                            vlSelf->__Vfunc_leading_zero32__10373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10373__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10373__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10373__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10373__count)));
                            vlSelf->__Vfunc_leading_zero32__10373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10373__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10373__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10373__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10373__count)));
                            vlSelf->__Vfunc_leading_zero32__10373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10373__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10373__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10373__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10373__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10373__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10373__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10373__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10373__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10379__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10379__part 
                            = vlSelf->__Vfunc_leading_zero32__10379__value;
                        vlSelf->__Vfunc_leading_zero32__10379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10379__count)));
                            vlSelf->__Vfunc_leading_zero32__10379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10379__count)));
                            vlSelf->__Vfunc_leading_zero32__10379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10379__count)));
                            vlSelf->__Vfunc_leading_zero32__10379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10379__count)));
                            vlSelf->__Vfunc_leading_zero32__10379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10379__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10385__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10385__part 
                            = vlSelf->__Vfunc_leading_zero32__10385__value;
                        vlSelf->__Vfunc_leading_zero32__10385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10385__count)));
                            vlSelf->__Vfunc_leading_zero32__10385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10385__count)));
                            vlSelf->__Vfunc_leading_zero32__10385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10385__count)));
                            vlSelf->__Vfunc_leading_zero32__10385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10385__count)));
                            vlSelf->__Vfunc_leading_zero32__10385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10385__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10391__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10391__part 
                            = vlSelf->__Vfunc_leading_zero32__10391__value;
                        vlSelf->__Vfunc_leading_zero32__10391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10391__count)));
                            vlSelf->__Vfunc_leading_zero32__10391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10391__count)));
                            vlSelf->__Vfunc_leading_zero32__10391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10391__count)));
                            vlSelf->__Vfunc_leading_zero32__10391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10391__count)));
                            vlSelf->__Vfunc_leading_zero32__10391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10391__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10397__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10397__part 
                            = vlSelf->__Vfunc_leading_zero32__10397__value;
                        vlSelf->__Vfunc_leading_zero32__10397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10397__count)));
                            vlSelf->__Vfunc_leading_zero32__10397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10397__count)));
                            vlSelf->__Vfunc_leading_zero32__10397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10397__count)));
                            vlSelf->__Vfunc_leading_zero32__10397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10397__count)));
                            vlSelf->__Vfunc_leading_zero32__10397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10397__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10403__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10403__part 
                            = vlSelf->__Vfunc_leading_zero32__10403__value;
                        vlSelf->__Vfunc_leading_zero32__10403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10403__count)));
                            vlSelf->__Vfunc_leading_zero32__10403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10403__count)));
                            vlSelf->__Vfunc_leading_zero32__10403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10403__count)));
                            vlSelf->__Vfunc_leading_zero32__10403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10403__count)));
                            vlSelf->__Vfunc_leading_zero32__10403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10403__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10409__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10409__part 
                            = vlSelf->__Vfunc_leading_zero32__10409__value;
                        vlSelf->__Vfunc_leading_zero32__10409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10409__count)));
                            vlSelf->__Vfunc_leading_zero32__10409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10409__count)));
                            vlSelf->__Vfunc_leading_zero32__10409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10409__count)));
                            vlSelf->__Vfunc_leading_zero32__10409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10409__count)));
                            vlSelf->__Vfunc_leading_zero32__10409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10409__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10415__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10415__part 
                            = vlSelf->__Vfunc_leading_zero32__10415__value;
                        vlSelf->__Vfunc_leading_zero32__10415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10415__count)));
                            vlSelf->__Vfunc_leading_zero32__10415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10415__count)));
                            vlSelf->__Vfunc_leading_zero32__10415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10415__count)));
                            vlSelf->__Vfunc_leading_zero32__10415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10415__count)));
                            vlSelf->__Vfunc_leading_zero32__10415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10415__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10421__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10421__part 
                            = vlSelf->__Vfunc_leading_zero32__10421__value;
                        vlSelf->__Vfunc_leading_zero32__10421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10421__count)));
                            vlSelf->__Vfunc_leading_zero32__10421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10421__count)));
                            vlSelf->__Vfunc_leading_zero32__10421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10421__count)));
                            vlSelf->__Vfunc_leading_zero32__10421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10421__count)));
                            vlSelf->__Vfunc_leading_zero32__10421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10421__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11987__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__11987__part 
                            = vlSelf->__Vfunc_leading_zero32__11987__value;
                        vlSelf->__Vfunc_leading_zero32__11987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11987__count)));
                            vlSelf->__Vfunc_leading_zero32__11987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11987__count)));
                            vlSelf->__Vfunc_leading_zero32__11987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11987__count)));
                            vlSelf->__Vfunc_leading_zero32__11987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11987__count)));
                            vlSelf->__Vfunc_leading_zero32__11987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11987__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11993__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__11993__part 
                            = vlSelf->__Vfunc_leading_zero32__11993__value;
                        vlSelf->__Vfunc_leading_zero32__11993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11993__count)));
                            vlSelf->__Vfunc_leading_zero32__11993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11993__count)));
                            vlSelf->__Vfunc_leading_zero32__11993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11993__count)));
                            vlSelf->__Vfunc_leading_zero32__11993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11993__count)));
                            vlSelf->__Vfunc_leading_zero32__11993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11993__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12023__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12023__part 
                            = vlSelf->__Vfunc_leading_zero32__12023__value;
                        vlSelf->__Vfunc_leading_zero32__12023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12023__count)));
                            vlSelf->__Vfunc_leading_zero32__12023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12023__count)));
                            vlSelf->__Vfunc_leading_zero32__12023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12023__count)));
                            vlSelf->__Vfunc_leading_zero32__12023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12023__count)));
                            vlSelf->__Vfunc_leading_zero32__12023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12023__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12029__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12029__part 
                            = vlSelf->__Vfunc_leading_zero32__12029__value;
                        vlSelf->__Vfunc_leading_zero32__12029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12029__count)));
                            vlSelf->__Vfunc_leading_zero32__12029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12029__count)));
                            vlSelf->__Vfunc_leading_zero32__12029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12029__count)));
                            vlSelf->__Vfunc_leading_zero32__12029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12029__count)));
                            vlSelf->__Vfunc_leading_zero32__12029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12029__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12059__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12059__part 
                            = vlSelf->__Vfunc_leading_zero32__12059__value;
                        vlSelf->__Vfunc_leading_zero32__12059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12059__count)));
                            vlSelf->__Vfunc_leading_zero32__12059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12059__count)));
                            vlSelf->__Vfunc_leading_zero32__12059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12059__count)));
                            vlSelf->__Vfunc_leading_zero32__12059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12059__count)));
                            vlSelf->__Vfunc_leading_zero32__12059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12059__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12065__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12065__part 
                            = vlSelf->__Vfunc_leading_zero32__12065__value;
                        vlSelf->__Vfunc_leading_zero32__12065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12065__count)));
                            vlSelf->__Vfunc_leading_zero32__12065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12065__count)));
                            vlSelf->__Vfunc_leading_zero32__12065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12065__count)));
                            vlSelf->__Vfunc_leading_zero32__12065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12065__count)));
                            vlSelf->__Vfunc_leading_zero32__12065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12065__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12095__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12095__part 
                            = vlSelf->__Vfunc_leading_zero32__12095__value;
                        vlSelf->__Vfunc_leading_zero32__12095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12095__count)));
                            vlSelf->__Vfunc_leading_zero32__12095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12095__count)));
                            vlSelf->__Vfunc_leading_zero32__12095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12095__count)));
                            vlSelf->__Vfunc_leading_zero32__12095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12095__count)));
                            vlSelf->__Vfunc_leading_zero32__12095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12095__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12101__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12101__part 
                            = vlSelf->__Vfunc_leading_zero32__12101__value;
                        vlSelf->__Vfunc_leading_zero32__12101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12101__count)));
                            vlSelf->__Vfunc_leading_zero32__12101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12101__count)));
                            vlSelf->__Vfunc_leading_zero32__12101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12101__count)));
                            vlSelf->__Vfunc_leading_zero32__12101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12101__count)));
                            vlSelf->__Vfunc_leading_zero32__12101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12101__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12131__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12131__part 
                            = vlSelf->__Vfunc_leading_zero32__12131__value;
                        vlSelf->__Vfunc_leading_zero32__12131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12131__count)));
                            vlSelf->__Vfunc_leading_zero32__12131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12131__count)));
                            vlSelf->__Vfunc_leading_zero32__12131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12131__count)));
                            vlSelf->__Vfunc_leading_zero32__12131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12131__count)));
                            vlSelf->__Vfunc_leading_zero32__12131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12131__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12137__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12137__part 
                            = vlSelf->__Vfunc_leading_zero32__12137__value;
                        vlSelf->__Vfunc_leading_zero32__12137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12137__count)));
                            vlSelf->__Vfunc_leading_zero32__12137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12137__count)));
                            vlSelf->__Vfunc_leading_zero32__12137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12137__count)));
                            vlSelf->__Vfunc_leading_zero32__12137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12137__count)));
                            vlSelf->__Vfunc_leading_zero32__12137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12137__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12167__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12167__part 
                            = vlSelf->__Vfunc_leading_zero32__12167__value;
                        vlSelf->__Vfunc_leading_zero32__12167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12167__count)));
                            vlSelf->__Vfunc_leading_zero32__12167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12167__count)));
                            vlSelf->__Vfunc_leading_zero32__12167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12167__count)));
                            vlSelf->__Vfunc_leading_zero32__12167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12167__count)));
                            vlSelf->__Vfunc_leading_zero32__12167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12167__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12173__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12173__part 
                            = vlSelf->__Vfunc_leading_zero32__12173__value;
                        vlSelf->__Vfunc_leading_zero32__12173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12173__count)));
                            vlSelf->__Vfunc_leading_zero32__12173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12173__count)));
                            vlSelf->__Vfunc_leading_zero32__12173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12173__count)));
                            vlSelf->__Vfunc_leading_zero32__12173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12173__count)));
                            vlSelf->__Vfunc_leading_zero32__12173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12173__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12203__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12203__part 
                            = vlSelf->__Vfunc_leading_zero32__12203__value;
                        vlSelf->__Vfunc_leading_zero32__12203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12203__count)));
                            vlSelf->__Vfunc_leading_zero32__12203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12203__count)));
                            vlSelf->__Vfunc_leading_zero32__12203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12203__count)));
                            vlSelf->__Vfunc_leading_zero32__12203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12203__count)));
                            vlSelf->__Vfunc_leading_zero32__12203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12203__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12209__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12209__part 
                            = vlSelf->__Vfunc_leading_zero32__12209__value;
                        vlSelf->__Vfunc_leading_zero32__12209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12209__count)));
                            vlSelf->__Vfunc_leading_zero32__12209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12209__count)));
                            vlSelf->__Vfunc_leading_zero32__12209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12209__count)));
                            vlSelf->__Vfunc_leading_zero32__12209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12209__count)));
                            vlSelf->__Vfunc_leading_zero32__12209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12209__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12239__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12239__part 
                            = vlSelf->__Vfunc_leading_zero32__12239__value;
                        vlSelf->__Vfunc_leading_zero32__12239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12239__count)));
                            vlSelf->__Vfunc_leading_zero32__12239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12239__count)));
                            vlSelf->__Vfunc_leading_zero32__12239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12239__count)));
                            vlSelf->__Vfunc_leading_zero32__12239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12239__count)));
                            vlSelf->__Vfunc_leading_zero32__12239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12239__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12245__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12245__part 
                            = vlSelf->__Vfunc_leading_zero32__12245__value;
                        vlSelf->__Vfunc_leading_zero32__12245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12245__count)));
                            vlSelf->__Vfunc_leading_zero32__12245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12245__count)));
                            vlSelf->__Vfunc_leading_zero32__12245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12245__count)));
                            vlSelf->__Vfunc_leading_zero32__12245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12245__count)));
                            vlSelf->__Vfunc_leading_zero32__12245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12245__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12275__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12275__part 
                            = vlSelf->__Vfunc_leading_zero32__12275__value;
                        vlSelf->__Vfunc_leading_zero32__12275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12275__count)));
                            vlSelf->__Vfunc_leading_zero32__12275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12275__count)));
                            vlSelf->__Vfunc_leading_zero32__12275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12275__count)));
                            vlSelf->__Vfunc_leading_zero32__12275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12275__count)));
                            vlSelf->__Vfunc_leading_zero32__12275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12275__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12281__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12281__part 
                            = vlSelf->__Vfunc_leading_zero32__12281__value;
                        vlSelf->__Vfunc_leading_zero32__12281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12281__count)));
                            vlSelf->__Vfunc_leading_zero32__12281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12281__count)));
                            vlSelf->__Vfunc_leading_zero32__12281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12281__count)));
                            vlSelf->__Vfunc_leading_zero32__12281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12281__count)));
                            vlSelf->__Vfunc_leading_zero32__12281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12281__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12311__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12311__part 
                            = vlSelf->__Vfunc_leading_zero32__12311__value;
                        vlSelf->__Vfunc_leading_zero32__12311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12311__count)));
                            vlSelf->__Vfunc_leading_zero32__12311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12311__count)));
                            vlSelf->__Vfunc_leading_zero32__12311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12311__count)));
                            vlSelf->__Vfunc_leading_zero32__12311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12311__count)));
                            vlSelf->__Vfunc_leading_zero32__12311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12311__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12317__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12317__part 
                            = vlSelf->__Vfunc_leading_zero32__12317__value;
                        vlSelf->__Vfunc_leading_zero32__12317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12317__count)));
                            vlSelf->__Vfunc_leading_zero32__12317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12317__count)));
                            vlSelf->__Vfunc_leading_zero32__12317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12317__count)));
                            vlSelf->__Vfunc_leading_zero32__12317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12317__count)));
                            vlSelf->__Vfunc_leading_zero32__12317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12317__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12347__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12347__part 
                            = vlSelf->__Vfunc_leading_zero32__12347__value;
                        vlSelf->__Vfunc_leading_zero32__12347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12347__count)));
                            vlSelf->__Vfunc_leading_zero32__12347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12347__count)));
                            vlSelf->__Vfunc_leading_zero32__12347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12347__count)));
                            vlSelf->__Vfunc_leading_zero32__12347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12347__count)));
                            vlSelf->__Vfunc_leading_zero32__12347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12347__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12353__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12353__part 
                            = vlSelf->__Vfunc_leading_zero32__12353__value;
                        vlSelf->__Vfunc_leading_zero32__12353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12353__count)));
                            vlSelf->__Vfunc_leading_zero32__12353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12353__count)));
                            vlSelf->__Vfunc_leading_zero32__12353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12353__count)));
                            vlSelf->__Vfunc_leading_zero32__12353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12353__count)));
                            vlSelf->__Vfunc_leading_zero32__12353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12353__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12383__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12383__part 
                            = vlSelf->__Vfunc_leading_zero32__12383__value;
                        vlSelf->__Vfunc_leading_zero32__12383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12383__count)));
                            vlSelf->__Vfunc_leading_zero32__12383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12383__count)));
                            vlSelf->__Vfunc_leading_zero32__12383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12383__count)));
                            vlSelf->__Vfunc_leading_zero32__12383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12383__count)));
                            vlSelf->__Vfunc_leading_zero32__12383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12383__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12389__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12389__part 
                            = vlSelf->__Vfunc_leading_zero32__12389__value;
                        vlSelf->__Vfunc_leading_zero32__12389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12389__count)));
                            vlSelf->__Vfunc_leading_zero32__12389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12389__count)));
                            vlSelf->__Vfunc_leading_zero32__12389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12389__count)));
                            vlSelf->__Vfunc_leading_zero32__12389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12389__count)));
                            vlSelf->__Vfunc_leading_zero32__12389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12389__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12419__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12419__part 
                            = vlSelf->__Vfunc_leading_zero32__12419__value;
                        vlSelf->__Vfunc_leading_zero32__12419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12419__count)));
                            vlSelf->__Vfunc_leading_zero32__12419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12419__count)));
                            vlSelf->__Vfunc_leading_zero32__12419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12419__count)));
                            vlSelf->__Vfunc_leading_zero32__12419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12419__count)));
                            vlSelf->__Vfunc_leading_zero32__12419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12419__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12425__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12425__part 
                            = vlSelf->__Vfunc_leading_zero32__12425__value;
                        vlSelf->__Vfunc_leading_zero32__12425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12425__count)));
                            vlSelf->__Vfunc_leading_zero32__12425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12425__count)));
                            vlSelf->__Vfunc_leading_zero32__12425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12425__count)));
                            vlSelf->__Vfunc_leading_zero32__12425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12425__count)));
                            vlSelf->__Vfunc_leading_zero32__12425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12425__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12455__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12455__part 
                            = vlSelf->__Vfunc_leading_zero32__12455__value;
                        vlSelf->__Vfunc_leading_zero32__12455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12455__count)));
                            vlSelf->__Vfunc_leading_zero32__12455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12455__count)));
                            vlSelf->__Vfunc_leading_zero32__12455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12455__count)));
                            vlSelf->__Vfunc_leading_zero32__12455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12455__count)));
                            vlSelf->__Vfunc_leading_zero32__12455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12455__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12461__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12461__part 
                            = vlSelf->__Vfunc_leading_zero32__12461__value;
                        vlSelf->__Vfunc_leading_zero32__12461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12461__count)));
                            vlSelf->__Vfunc_leading_zero32__12461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12461__count)));
                            vlSelf->__Vfunc_leading_zero32__12461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12461__count)));
                            vlSelf->__Vfunc_leading_zero32__12461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12461__count)));
                            vlSelf->__Vfunc_leading_zero32__12461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12461__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12491__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12491__part 
                            = vlSelf->__Vfunc_leading_zero32__12491__value;
                        vlSelf->__Vfunc_leading_zero32__12491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12491__count)));
                            vlSelf->__Vfunc_leading_zero32__12491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12491__count)));
                            vlSelf->__Vfunc_leading_zero32__12491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12491__count)));
                            vlSelf->__Vfunc_leading_zero32__12491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12491__count)));
                            vlSelf->__Vfunc_leading_zero32__12491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12491__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12497__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12497__part 
                            = vlSelf->__Vfunc_leading_zero32__12497__value;
                        vlSelf->__Vfunc_leading_zero32__12497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12497__count)));
                            vlSelf->__Vfunc_leading_zero32__12497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12497__count)));
                            vlSelf->__Vfunc_leading_zero32__12497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12497__count)));
                            vlSelf->__Vfunc_leading_zero32__12497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12497__count)));
                            vlSelf->__Vfunc_leading_zero32__12497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12497__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12527__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12527__part 
                            = vlSelf->__Vfunc_leading_zero32__12527__value;
                        vlSelf->__Vfunc_leading_zero32__12527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12527__count)));
                            vlSelf->__Vfunc_leading_zero32__12527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12527__count)));
                            vlSelf->__Vfunc_leading_zero32__12527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12527__count)));
                            vlSelf->__Vfunc_leading_zero32__12527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12527__count)));
                            vlSelf->__Vfunc_leading_zero32__12527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12527__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12533__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12533__part 
                            = vlSelf->__Vfunc_leading_zero32__12533__value;
                        vlSelf->__Vfunc_leading_zero32__12533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12533__count)));
                            vlSelf->__Vfunc_leading_zero32__12533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12533__count)));
                            vlSelf->__Vfunc_leading_zero32__12533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12533__count)));
                            vlSelf->__Vfunc_leading_zero32__12533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12533__count)));
                            vlSelf->__Vfunc_leading_zero32__12533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12533__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12563__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12563__part 
                            = vlSelf->__Vfunc_leading_zero32__12563__value;
                        vlSelf->__Vfunc_leading_zero32__12563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12563__count)));
                            vlSelf->__Vfunc_leading_zero32__12563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12563__count)));
                            vlSelf->__Vfunc_leading_zero32__12563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12563__count)));
                            vlSelf->__Vfunc_leading_zero32__12563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12563__count)));
                            vlSelf->__Vfunc_leading_zero32__12563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12563__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12569__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12569__part 
                            = vlSelf->__Vfunc_leading_zero32__12569__value;
                        vlSelf->__Vfunc_leading_zero32__12569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12569__count)));
                            vlSelf->__Vfunc_leading_zero32__12569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12569__count)));
                            vlSelf->__Vfunc_leading_zero32__12569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12569__count)));
                            vlSelf->__Vfunc_leading_zero32__12569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12569__count)));
                            vlSelf->__Vfunc_leading_zero32__12569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12569__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12599__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12599__part 
                            = vlSelf->__Vfunc_leading_zero32__12599__value;
                        vlSelf->__Vfunc_leading_zero32__12599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12599__count)));
                            vlSelf->__Vfunc_leading_zero32__12599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12599__count)));
                            vlSelf->__Vfunc_leading_zero32__12599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12599__count)));
                            vlSelf->__Vfunc_leading_zero32__12599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12599__count)));
                            vlSelf->__Vfunc_leading_zero32__12599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12599__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12605__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12605__part 
                            = vlSelf->__Vfunc_leading_zero32__12605__value;
                        vlSelf->__Vfunc_leading_zero32__12605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12605__count)));
                            vlSelf->__Vfunc_leading_zero32__12605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12605__count)));
                            vlSelf->__Vfunc_leading_zero32__12605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12605__count)));
                            vlSelf->__Vfunc_leading_zero32__12605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12605__count)));
                            vlSelf->__Vfunc_leading_zero32__12605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12605__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12635__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12635__part 
                            = vlSelf->__Vfunc_leading_zero32__12635__value;
                        vlSelf->__Vfunc_leading_zero32__12635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12635__count)));
                            vlSelf->__Vfunc_leading_zero32__12635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12635__count)));
                            vlSelf->__Vfunc_leading_zero32__12635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12635__count)));
                            vlSelf->__Vfunc_leading_zero32__12635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12635__count)));
                            vlSelf->__Vfunc_leading_zero32__12635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12635__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12641__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12641__part 
                            = vlSelf->__Vfunc_leading_zero32__12641__value;
                        vlSelf->__Vfunc_leading_zero32__12641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12641__count)));
                            vlSelf->__Vfunc_leading_zero32__12641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12641__count)));
                            vlSelf->__Vfunc_leading_zero32__12641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12641__count)));
                            vlSelf->__Vfunc_leading_zero32__12641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12641__count)));
                            vlSelf->__Vfunc_leading_zero32__12641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12641__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12671__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12671__part 
                            = vlSelf->__Vfunc_leading_zero32__12671__value;
                        vlSelf->__Vfunc_leading_zero32__12671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12671__count)));
                            vlSelf->__Vfunc_leading_zero32__12671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12671__count)));
                            vlSelf->__Vfunc_leading_zero32__12671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12671__count)));
                            vlSelf->__Vfunc_leading_zero32__12671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12671__count)));
                            vlSelf->__Vfunc_leading_zero32__12671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12671__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12677__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12677__part 
                            = vlSelf->__Vfunc_leading_zero32__12677__value;
                        vlSelf->__Vfunc_leading_zero32__12677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12677__count)));
                            vlSelf->__Vfunc_leading_zero32__12677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12677__count)));
                            vlSelf->__Vfunc_leading_zero32__12677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12677__count)));
                            vlSelf->__Vfunc_leading_zero32__12677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12677__count)));
                            vlSelf->__Vfunc_leading_zero32__12677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12677__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12707__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12707__part 
                            = vlSelf->__Vfunc_leading_zero32__12707__value;
                        vlSelf->__Vfunc_leading_zero32__12707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12707__count)));
                            vlSelf->__Vfunc_leading_zero32__12707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12707__count)));
                            vlSelf->__Vfunc_leading_zero32__12707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12707__count)));
                            vlSelf->__Vfunc_leading_zero32__12707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12707__count)));
                            vlSelf->__Vfunc_leading_zero32__12707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12707__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12713__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12713__part 
                            = vlSelf->__Vfunc_leading_zero32__12713__value;
                        vlSelf->__Vfunc_leading_zero32__12713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12713__count)));
                            vlSelf->__Vfunc_leading_zero32__12713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12713__count)));
                            vlSelf->__Vfunc_leading_zero32__12713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12713__count)));
                            vlSelf->__Vfunc_leading_zero32__12713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12713__count)));
                            vlSelf->__Vfunc_leading_zero32__12713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12713__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12743__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12743__part 
                            = vlSelf->__Vfunc_leading_zero32__12743__value;
                        vlSelf->__Vfunc_leading_zero32__12743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12743__count)));
                            vlSelf->__Vfunc_leading_zero32__12743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12743__count)));
                            vlSelf->__Vfunc_leading_zero32__12743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12743__count)));
                            vlSelf->__Vfunc_leading_zero32__12743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12743__count)));
                            vlSelf->__Vfunc_leading_zero32__12743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12743__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12749__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12749__part 
                            = vlSelf->__Vfunc_leading_zero32__12749__value;
                        vlSelf->__Vfunc_leading_zero32__12749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12749__count)));
                            vlSelf->__Vfunc_leading_zero32__12749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12749__count)));
                            vlSelf->__Vfunc_leading_zero32__12749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12749__count)));
                            vlSelf->__Vfunc_leading_zero32__12749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12749__count)));
                            vlSelf->__Vfunc_leading_zero32__12749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12749__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12779__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12779__part 
                            = vlSelf->__Vfunc_leading_zero32__12779__value;
                        vlSelf->__Vfunc_leading_zero32__12779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12779__count)));
                            vlSelf->__Vfunc_leading_zero32__12779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12779__count)));
                            vlSelf->__Vfunc_leading_zero32__12779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12779__count)));
                            vlSelf->__Vfunc_leading_zero32__12779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12779__count)));
                            vlSelf->__Vfunc_leading_zero32__12779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12779__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12785__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12785__part 
                            = vlSelf->__Vfunc_leading_zero32__12785__value;
                        vlSelf->__Vfunc_leading_zero32__12785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12785__count)));
                            vlSelf->__Vfunc_leading_zero32__12785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12785__count)));
                            vlSelf->__Vfunc_leading_zero32__12785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12785__count)));
                            vlSelf->__Vfunc_leading_zero32__12785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12785__count)));
                            vlSelf->__Vfunc_leading_zero32__12785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12785__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12815__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12815__part 
                            = vlSelf->__Vfunc_leading_zero32__12815__value;
                        vlSelf->__Vfunc_leading_zero32__12815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12815__count)));
                            vlSelf->__Vfunc_leading_zero32__12815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12815__count)));
                            vlSelf->__Vfunc_leading_zero32__12815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12815__count)));
                            vlSelf->__Vfunc_leading_zero32__12815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12815__count)));
                            vlSelf->__Vfunc_leading_zero32__12815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12815__Vfuncout)) 
                             - (IData)(5U))));
}
