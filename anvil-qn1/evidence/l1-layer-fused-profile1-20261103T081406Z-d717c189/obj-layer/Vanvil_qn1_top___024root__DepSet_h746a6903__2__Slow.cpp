// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__3(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__3\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6568__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6568__part 
                            = vlSelf->__Vfunc_leading_zero32__6568__value;
                        vlSelf->__Vfunc_leading_zero32__6568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6568__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6574__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6574__part 
                            = vlSelf->__Vfunc_leading_zero32__6574__value;
                        vlSelf->__Vfunc_leading_zero32__6574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6574__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6580__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6580__part 
                            = vlSelf->__Vfunc_leading_zero32__6580__value;
                        vlSelf->__Vfunc_leading_zero32__6580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6580__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6586__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6586__part 
                            = vlSelf->__Vfunc_leading_zero32__6586__value;
                        vlSelf->__Vfunc_leading_zero32__6586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6586__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6592__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6592__part 
                            = vlSelf->__Vfunc_leading_zero32__6592__value;
                        vlSelf->__Vfunc_leading_zero32__6592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6592__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6598__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6598__part 
                            = vlSelf->__Vfunc_leading_zero32__6598__value;
                        vlSelf->__Vfunc_leading_zero32__6598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6598__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6604__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6604__part 
                            = vlSelf->__Vfunc_leading_zero32__6604__value;
                        vlSelf->__Vfunc_leading_zero32__6604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6604__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6610__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6610__part 
                            = vlSelf->__Vfunc_leading_zero32__6610__value;
                        vlSelf->__Vfunc_leading_zero32__6610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6610__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6616__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6616__part 
                            = vlSelf->__Vfunc_leading_zero32__6616__value;
                        vlSelf->__Vfunc_leading_zero32__6616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6616__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6622__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6622__part 
                            = vlSelf->__Vfunc_leading_zero32__6622__value;
                        vlSelf->__Vfunc_leading_zero32__6622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                            vlSelf->__Vfunc_leading_zero32__6622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6622__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6628__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6628__part 
                            = vlSelf->__Vfunc_leading_zero32__6628__value;
                        vlSelf->__Vfunc_leading_zero32__6628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                            vlSelf->__Vfunc_leading_zero32__6628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6628__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6634__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6634__part 
                            = vlSelf->__Vfunc_leading_zero32__6634__value;
                        vlSelf->__Vfunc_leading_zero32__6634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                            vlSelf->__Vfunc_leading_zero32__6634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6634__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6640__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6640__part 
                            = vlSelf->__Vfunc_leading_zero32__6640__value;
                        vlSelf->__Vfunc_leading_zero32__6640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                            vlSelf->__Vfunc_leading_zero32__6640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6640__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6646__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6646__part 
                            = vlSelf->__Vfunc_leading_zero32__6646__value;
                        vlSelf->__Vfunc_leading_zero32__6646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                            vlSelf->__Vfunc_leading_zero32__6646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6646__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6652__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6652__part 
                            = vlSelf->__Vfunc_leading_zero32__6652__value;
                        vlSelf->__Vfunc_leading_zero32__6652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                            vlSelf->__Vfunc_leading_zero32__6652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6652__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6658__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6658__part 
                            = vlSelf->__Vfunc_leading_zero32__6658__value;
                        vlSelf->__Vfunc_leading_zero32__6658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                            vlSelf->__Vfunc_leading_zero32__6658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6658__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6664__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6664__part 
                            = vlSelf->__Vfunc_leading_zero32__6664__value;
                        vlSelf->__Vfunc_leading_zero32__6664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                            vlSelf->__Vfunc_leading_zero32__6664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6664__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6670__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6670__part 
                            = vlSelf->__Vfunc_leading_zero32__6670__value;
                        vlSelf->__Vfunc_leading_zero32__6670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                            vlSelf->__Vfunc_leading_zero32__6670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6670__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6676__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6676__part 
                            = vlSelf->__Vfunc_leading_zero32__6676__value;
                        vlSelf->__Vfunc_leading_zero32__6676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                            vlSelf->__Vfunc_leading_zero32__6676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6676__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6682__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6682__part 
                            = vlSelf->__Vfunc_leading_zero32__6682__value;
                        vlSelf->__Vfunc_leading_zero32__6682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                            vlSelf->__Vfunc_leading_zero32__6682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6682__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6688__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6688__part 
                            = vlSelf->__Vfunc_leading_zero32__6688__value;
                        vlSelf->__Vfunc_leading_zero32__6688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                            vlSelf->__Vfunc_leading_zero32__6688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6688__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6694__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6694__part 
                            = vlSelf->__Vfunc_leading_zero32__6694__value;
                        vlSelf->__Vfunc_leading_zero32__6694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                            vlSelf->__Vfunc_leading_zero32__6694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6694__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6700__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6700__part 
                            = vlSelf->__Vfunc_leading_zero32__6700__value;
                        vlSelf->__Vfunc_leading_zero32__6700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                            vlSelf->__Vfunc_leading_zero32__6700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6700__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6706__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6706__part 
                            = vlSelf->__Vfunc_leading_zero32__6706__value;
                        vlSelf->__Vfunc_leading_zero32__6706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                            vlSelf->__Vfunc_leading_zero32__6706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6706__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6712__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6712__part 
                            = vlSelf->__Vfunc_leading_zero32__6712__value;
                        vlSelf->__Vfunc_leading_zero32__6712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                            vlSelf->__Vfunc_leading_zero32__6712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6712__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6718__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6718__part 
                            = vlSelf->__Vfunc_leading_zero32__6718__value;
                        vlSelf->__Vfunc_leading_zero32__6718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                            vlSelf->__Vfunc_leading_zero32__6718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6718__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6724__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6724__part 
                            = vlSelf->__Vfunc_leading_zero32__6724__value;
                        vlSelf->__Vfunc_leading_zero32__6724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                            vlSelf->__Vfunc_leading_zero32__6724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6724__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6730__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6730__part 
                            = vlSelf->__Vfunc_leading_zero32__6730__value;
                        vlSelf->__Vfunc_leading_zero32__6730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                            vlSelf->__Vfunc_leading_zero32__6730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6730__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6736__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6736__part 
                            = vlSelf->__Vfunc_leading_zero32__6736__value;
                        vlSelf->__Vfunc_leading_zero32__6736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                            vlSelf->__Vfunc_leading_zero32__6736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6736__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6742__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6742__part 
                            = vlSelf->__Vfunc_leading_zero32__6742__value;
                        vlSelf->__Vfunc_leading_zero32__6742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                            vlSelf->__Vfunc_leading_zero32__6742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6742__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6748__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6748__part 
                            = vlSelf->__Vfunc_leading_zero32__6748__value;
                        vlSelf->__Vfunc_leading_zero32__6748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                            vlSelf->__Vfunc_leading_zero32__6748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6748__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6754__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6754__part 
                            = vlSelf->__Vfunc_leading_zero32__6754__value;
                        vlSelf->__Vfunc_leading_zero32__6754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                            vlSelf->__Vfunc_leading_zero32__6754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6754__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6760__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6760__part 
                            = vlSelf->__Vfunc_leading_zero32__6760__value;
                        vlSelf->__Vfunc_leading_zero32__6760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                            vlSelf->__Vfunc_leading_zero32__6760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6760__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6766__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6766__part 
                            = vlSelf->__Vfunc_leading_zero32__6766__value;
                        vlSelf->__Vfunc_leading_zero32__6766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                            vlSelf->__Vfunc_leading_zero32__6766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6766__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6772__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6772__part 
                            = vlSelf->__Vfunc_leading_zero32__6772__value;
                        vlSelf->__Vfunc_leading_zero32__6772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                            vlSelf->__Vfunc_leading_zero32__6772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6772__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6778__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6778__part 
                            = vlSelf->__Vfunc_leading_zero32__6778__value;
                        vlSelf->__Vfunc_leading_zero32__6778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                            vlSelf->__Vfunc_leading_zero32__6778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6778__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6784__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6784__part 
                            = vlSelf->__Vfunc_leading_zero32__6784__value;
                        vlSelf->__Vfunc_leading_zero32__6784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                            vlSelf->__Vfunc_leading_zero32__6784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6784__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6790__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6790__part 
                            = vlSelf->__Vfunc_leading_zero32__6790__value;
                        vlSelf->__Vfunc_leading_zero32__6790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                            vlSelf->__Vfunc_leading_zero32__6790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6790__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6796__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6796__part 
                            = vlSelf->__Vfunc_leading_zero32__6796__value;
                        vlSelf->__Vfunc_leading_zero32__6796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                            vlSelf->__Vfunc_leading_zero32__6796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6796__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6802__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6802__part 
                            = vlSelf->__Vfunc_leading_zero32__6802__value;
                        vlSelf->__Vfunc_leading_zero32__6802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                            vlSelf->__Vfunc_leading_zero32__6802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6802__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6808__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6808__part 
                            = vlSelf->__Vfunc_leading_zero32__6808__value;
                        vlSelf->__Vfunc_leading_zero32__6808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                            vlSelf->__Vfunc_leading_zero32__6808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6808__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6814__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6814__part 
                            = vlSelf->__Vfunc_leading_zero32__6814__value;
                        vlSelf->__Vfunc_leading_zero32__6814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                            vlSelf->__Vfunc_leading_zero32__6814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6814__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6820__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6820__part 
                            = vlSelf->__Vfunc_leading_zero32__6820__value;
                        vlSelf->__Vfunc_leading_zero32__6820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                            vlSelf->__Vfunc_leading_zero32__6820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6820__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6826__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6826__part 
                            = vlSelf->__Vfunc_leading_zero32__6826__value;
                        vlSelf->__Vfunc_leading_zero32__6826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                            vlSelf->__Vfunc_leading_zero32__6826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6826__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6832__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6832__part 
                            = vlSelf->__Vfunc_leading_zero32__6832__value;
                        vlSelf->__Vfunc_leading_zero32__6832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                            vlSelf->__Vfunc_leading_zero32__6832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6832__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6838__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6838__part 
                            = vlSelf->__Vfunc_leading_zero32__6838__value;
                        vlSelf->__Vfunc_leading_zero32__6838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                            vlSelf->__Vfunc_leading_zero32__6838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6838__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6844__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6844__part 
                            = vlSelf->__Vfunc_leading_zero32__6844__value;
                        vlSelf->__Vfunc_leading_zero32__6844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                            vlSelf->__Vfunc_leading_zero32__6844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6844__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6850__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6850__part 
                            = vlSelf->__Vfunc_leading_zero32__6850__value;
                        vlSelf->__Vfunc_leading_zero32__6850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                            vlSelf->__Vfunc_leading_zero32__6850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6850__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6856__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6856__part 
                            = vlSelf->__Vfunc_leading_zero32__6856__value;
                        vlSelf->__Vfunc_leading_zero32__6856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                            vlSelf->__Vfunc_leading_zero32__6856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6856__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6862__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6862__part 
                            = vlSelf->__Vfunc_leading_zero32__6862__value;
                        vlSelf->__Vfunc_leading_zero32__6862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                            vlSelf->__Vfunc_leading_zero32__6862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6862__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6868__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6868__part 
                            = vlSelf->__Vfunc_leading_zero32__6868__value;
                        vlSelf->__Vfunc_leading_zero32__6868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                            vlSelf->__Vfunc_leading_zero32__6868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6868__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6874__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6874__part 
                            = vlSelf->__Vfunc_leading_zero32__6874__value;
                        vlSelf->__Vfunc_leading_zero32__6874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                            vlSelf->__Vfunc_leading_zero32__6874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6874__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6880__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6880__part 
                            = vlSelf->__Vfunc_leading_zero32__6880__value;
                        vlSelf->__Vfunc_leading_zero32__6880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                            vlSelf->__Vfunc_leading_zero32__6880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6880__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6886__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6886__part 
                            = vlSelf->__Vfunc_leading_zero32__6886__value;
                        vlSelf->__Vfunc_leading_zero32__6886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                            vlSelf->__Vfunc_leading_zero32__6886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6886__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6892__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6892__part 
                            = vlSelf->__Vfunc_leading_zero32__6892__value;
                        vlSelf->__Vfunc_leading_zero32__6892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                            vlSelf->__Vfunc_leading_zero32__6892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6892__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6898__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6898__part 
                            = vlSelf->__Vfunc_leading_zero32__6898__value;
                        vlSelf->__Vfunc_leading_zero32__6898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                            vlSelf->__Vfunc_leading_zero32__6898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6898__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6904__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6904__part 
                            = vlSelf->__Vfunc_leading_zero32__6904__value;
                        vlSelf->__Vfunc_leading_zero32__6904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                            vlSelf->__Vfunc_leading_zero32__6904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6904__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6910__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6910__part 
                            = vlSelf->__Vfunc_leading_zero32__6910__value;
                        vlSelf->__Vfunc_leading_zero32__6910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                            vlSelf->__Vfunc_leading_zero32__6910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6910__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6916__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6916__part 
                            = vlSelf->__Vfunc_leading_zero32__6916__value;
                        vlSelf->__Vfunc_leading_zero32__6916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                            vlSelf->__Vfunc_leading_zero32__6916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6916__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6922__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6922__part 
                            = vlSelf->__Vfunc_leading_zero32__6922__value;
                        vlSelf->__Vfunc_leading_zero32__6922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                            vlSelf->__Vfunc_leading_zero32__6922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6922__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6928__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6928__part 
                            = vlSelf->__Vfunc_leading_zero32__6928__value;
                        vlSelf->__Vfunc_leading_zero32__6928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                            vlSelf->__Vfunc_leading_zero32__6928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6928__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6934__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6934__part 
                            = vlSelf->__Vfunc_leading_zero32__6934__value;
                        vlSelf->__Vfunc_leading_zero32__6934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                            vlSelf->__Vfunc_leading_zero32__6934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6934__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6940__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6940__part 
                            = vlSelf->__Vfunc_leading_zero32__6940__value;
                        vlSelf->__Vfunc_leading_zero32__6940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                            vlSelf->__Vfunc_leading_zero32__6940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6940__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6946__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6946__part 
                            = vlSelf->__Vfunc_leading_zero32__6946__value;
                        vlSelf->__Vfunc_leading_zero32__6946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                            vlSelf->__Vfunc_leading_zero32__6946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6946__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6952__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6952__part 
                            = vlSelf->__Vfunc_leading_zero32__6952__value;
                        vlSelf->__Vfunc_leading_zero32__6952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                            vlSelf->__Vfunc_leading_zero32__6952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6952__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6958__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6958__part 
                            = vlSelf->__Vfunc_leading_zero32__6958__value;
                        vlSelf->__Vfunc_leading_zero32__6958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                            vlSelf->__Vfunc_leading_zero32__6958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6958__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6964__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6964__part 
                            = vlSelf->__Vfunc_leading_zero32__6964__value;
                        vlSelf->__Vfunc_leading_zero32__6964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                            vlSelf->__Vfunc_leading_zero32__6964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6964__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6970__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6970__part 
                            = vlSelf->__Vfunc_leading_zero32__6970__value;
                        vlSelf->__Vfunc_leading_zero32__6970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                            vlSelf->__Vfunc_leading_zero32__6970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6970__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6976__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6976__part 
                            = vlSelf->__Vfunc_leading_zero32__6976__value;
                        vlSelf->__Vfunc_leading_zero32__6976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                            vlSelf->__Vfunc_leading_zero32__6976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6976__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6982__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6982__part 
                            = vlSelf->__Vfunc_leading_zero32__6982__value;
                        vlSelf->__Vfunc_leading_zero32__6982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                            vlSelf->__Vfunc_leading_zero32__6982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6982__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6988__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6988__part 
                            = vlSelf->__Vfunc_leading_zero32__6988__value;
                        vlSelf->__Vfunc_leading_zero32__6988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                            vlSelf->__Vfunc_leading_zero32__6988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6988__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6994__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6994__part 
                            = vlSelf->__Vfunc_leading_zero32__6994__value;
                        vlSelf->__Vfunc_leading_zero32__6994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                            vlSelf->__Vfunc_leading_zero32__6994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6994__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7000__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7000__part 
                            = vlSelf->__Vfunc_leading_zero32__7000__value;
                        vlSelf->__Vfunc_leading_zero32__7000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                            vlSelf->__Vfunc_leading_zero32__7000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7000__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7006__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7006__part 
                            = vlSelf->__Vfunc_leading_zero32__7006__value;
                        vlSelf->__Vfunc_leading_zero32__7006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                            vlSelf->__Vfunc_leading_zero32__7006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7006__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7012__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7012__part 
                            = vlSelf->__Vfunc_leading_zero32__7012__value;
                        vlSelf->__Vfunc_leading_zero32__7012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                            vlSelf->__Vfunc_leading_zero32__7012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7012__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7018__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7018__part 
                            = vlSelf->__Vfunc_leading_zero32__7018__value;
                        vlSelf->__Vfunc_leading_zero32__7018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                            vlSelf->__Vfunc_leading_zero32__7018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7018__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7024__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7024__part 
                            = vlSelf->__Vfunc_leading_zero32__7024__value;
                        vlSelf->__Vfunc_leading_zero32__7024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                            vlSelf->__Vfunc_leading_zero32__7024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7024__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7030__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7030__part 
                            = vlSelf->__Vfunc_leading_zero32__7030__value;
                        vlSelf->__Vfunc_leading_zero32__7030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                            vlSelf->__Vfunc_leading_zero32__7030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7030__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7036__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7036__part 
                            = vlSelf->__Vfunc_leading_zero32__7036__value;
                        vlSelf->__Vfunc_leading_zero32__7036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                            vlSelf->__Vfunc_leading_zero32__7036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7036__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7042__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7042__part 
                            = vlSelf->__Vfunc_leading_zero32__7042__value;
                        vlSelf->__Vfunc_leading_zero32__7042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                            vlSelf->__Vfunc_leading_zero32__7042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7042__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7048__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7048__part 
                            = vlSelf->__Vfunc_leading_zero32__7048__value;
                        vlSelf->__Vfunc_leading_zero32__7048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                            vlSelf->__Vfunc_leading_zero32__7048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7048__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7054__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7054__part 
                            = vlSelf->__Vfunc_leading_zero32__7054__value;
                        vlSelf->__Vfunc_leading_zero32__7054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                            vlSelf->__Vfunc_leading_zero32__7054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7054__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7060__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7060__part 
                            = vlSelf->__Vfunc_leading_zero32__7060__value;
                        vlSelf->__Vfunc_leading_zero32__7060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                            vlSelf->__Vfunc_leading_zero32__7060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7060__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7066__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7066__part 
                            = vlSelf->__Vfunc_leading_zero32__7066__value;
                        vlSelf->__Vfunc_leading_zero32__7066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                            vlSelf->__Vfunc_leading_zero32__7066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7066__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7072__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7072__part 
                            = vlSelf->__Vfunc_leading_zero32__7072__value;
                        vlSelf->__Vfunc_leading_zero32__7072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                            vlSelf->__Vfunc_leading_zero32__7072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7072__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7078__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7078__part 
                            = vlSelf->__Vfunc_leading_zero32__7078__value;
                        vlSelf->__Vfunc_leading_zero32__7078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                            vlSelf->__Vfunc_leading_zero32__7078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7078__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7084__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7084__part 
                            = vlSelf->__Vfunc_leading_zero32__7084__value;
                        vlSelf->__Vfunc_leading_zero32__7084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                            vlSelf->__Vfunc_leading_zero32__7084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7084__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7090__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7090__part 
                            = vlSelf->__Vfunc_leading_zero32__7090__value;
                        vlSelf->__Vfunc_leading_zero32__7090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                            vlSelf->__Vfunc_leading_zero32__7090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7090__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7096__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7096__part 
                            = vlSelf->__Vfunc_leading_zero32__7096__value;
                        vlSelf->__Vfunc_leading_zero32__7096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                            vlSelf->__Vfunc_leading_zero32__7096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7096__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7102__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7102__part 
                            = vlSelf->__Vfunc_leading_zero32__7102__value;
                        vlSelf->__Vfunc_leading_zero32__7102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                            vlSelf->__Vfunc_leading_zero32__7102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7102__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7108__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7108__part 
                            = vlSelf->__Vfunc_leading_zero32__7108__value;
                        vlSelf->__Vfunc_leading_zero32__7108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                            vlSelf->__Vfunc_leading_zero32__7108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7108__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7114__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7114__part 
                            = vlSelf->__Vfunc_leading_zero32__7114__value;
                        vlSelf->__Vfunc_leading_zero32__7114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                            vlSelf->__Vfunc_leading_zero32__7114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7114__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7120__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7120__part 
                            = vlSelf->__Vfunc_leading_zero32__7120__value;
                        vlSelf->__Vfunc_leading_zero32__7120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                            vlSelf->__Vfunc_leading_zero32__7120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7120__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7126__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7126__part 
                            = vlSelf->__Vfunc_leading_zero32__7126__value;
                        vlSelf->__Vfunc_leading_zero32__7126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                            vlSelf->__Vfunc_leading_zero32__7126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7126__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7132__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7132__part 
                            = vlSelf->__Vfunc_leading_zero32__7132__value;
                        vlSelf->__Vfunc_leading_zero32__7132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                            vlSelf->__Vfunc_leading_zero32__7132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7132__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7138__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7138__part 
                            = vlSelf->__Vfunc_leading_zero32__7138__value;
                        vlSelf->__Vfunc_leading_zero32__7138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                            vlSelf->__Vfunc_leading_zero32__7138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7138__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7144__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7144__part 
                            = vlSelf->__Vfunc_leading_zero32__7144__value;
                        vlSelf->__Vfunc_leading_zero32__7144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                            vlSelf->__Vfunc_leading_zero32__7144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7144__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7150__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7150__part 
                            = vlSelf->__Vfunc_leading_zero32__7150__value;
                        vlSelf->__Vfunc_leading_zero32__7150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                            vlSelf->__Vfunc_leading_zero32__7150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7150__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7156__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7156__part 
                            = vlSelf->__Vfunc_leading_zero32__7156__value;
                        vlSelf->__Vfunc_leading_zero32__7156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                            vlSelf->__Vfunc_leading_zero32__7156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7156__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7162__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7162__part 
                            = vlSelf->__Vfunc_leading_zero32__7162__value;
                        vlSelf->__Vfunc_leading_zero32__7162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                            vlSelf->__Vfunc_leading_zero32__7162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7162__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7168__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7168__part 
                            = vlSelf->__Vfunc_leading_zero32__7168__value;
                        vlSelf->__Vfunc_leading_zero32__7168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                            vlSelf->__Vfunc_leading_zero32__7168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7168__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7174__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7174__part 
                            = vlSelf->__Vfunc_leading_zero32__7174__value;
                        vlSelf->__Vfunc_leading_zero32__7174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                            vlSelf->__Vfunc_leading_zero32__7174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7174__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7180__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7180__part 
                            = vlSelf->__Vfunc_leading_zero32__7180__value;
                        vlSelf->__Vfunc_leading_zero32__7180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                            vlSelf->__Vfunc_leading_zero32__7180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7180__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7186__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7186__part 
                            = vlSelf->__Vfunc_leading_zero32__7186__value;
                        vlSelf->__Vfunc_leading_zero32__7186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                            vlSelf->__Vfunc_leading_zero32__7186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7186__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7192__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7192__part 
                            = vlSelf->__Vfunc_leading_zero32__7192__value;
                        vlSelf->__Vfunc_leading_zero32__7192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                            vlSelf->__Vfunc_leading_zero32__7192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7192__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7198__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7198__part 
                            = vlSelf->__Vfunc_leading_zero32__7198__value;
                        vlSelf->__Vfunc_leading_zero32__7198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                            vlSelf->__Vfunc_leading_zero32__7198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7198__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7204__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7204__part 
                            = vlSelf->__Vfunc_leading_zero32__7204__value;
                        vlSelf->__Vfunc_leading_zero32__7204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                            vlSelf->__Vfunc_leading_zero32__7204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7204__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7210__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7210__part 
                            = vlSelf->__Vfunc_leading_zero32__7210__value;
                        vlSelf->__Vfunc_leading_zero32__7210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                            vlSelf->__Vfunc_leading_zero32__7210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7210__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7216__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7216__part 
                            = vlSelf->__Vfunc_leading_zero32__7216__value;
                        vlSelf->__Vfunc_leading_zero32__7216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                            vlSelf->__Vfunc_leading_zero32__7216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7216__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7222__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7222__part 
                            = vlSelf->__Vfunc_leading_zero32__7222__value;
                        vlSelf->__Vfunc_leading_zero32__7222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                            vlSelf->__Vfunc_leading_zero32__7222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7222__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7228__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7228__part 
                            = vlSelf->__Vfunc_leading_zero32__7228__value;
                        vlSelf->__Vfunc_leading_zero32__7228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                            vlSelf->__Vfunc_leading_zero32__7228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7228__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7234__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7234__part 
                            = vlSelf->__Vfunc_leading_zero32__7234__value;
                        vlSelf->__Vfunc_leading_zero32__7234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7234__count)));
                            vlSelf->__Vfunc_leading_zero32__7234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7234__count)));
                            vlSelf->__Vfunc_leading_zero32__7234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7234__count)));
                            vlSelf->__Vfunc_leading_zero32__7234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7234__count)));
                            vlSelf->__Vfunc_leading_zero32__7234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7234__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7240__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7240__part 
                            = vlSelf->__Vfunc_leading_zero32__7240__value;
                        vlSelf->__Vfunc_leading_zero32__7240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7240__count)));
                            vlSelf->__Vfunc_leading_zero32__7240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7240__count)));
                            vlSelf->__Vfunc_leading_zero32__7240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7240__count)));
                            vlSelf->__Vfunc_leading_zero32__7240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7240__count)));
                            vlSelf->__Vfunc_leading_zero32__7240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7240__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7246__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7246__part 
                            = vlSelf->__Vfunc_leading_zero32__7246__value;
                        vlSelf->__Vfunc_leading_zero32__7246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7246__count)));
                            vlSelf->__Vfunc_leading_zero32__7246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7246__count)));
                            vlSelf->__Vfunc_leading_zero32__7246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7246__count)));
                            vlSelf->__Vfunc_leading_zero32__7246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7246__count)));
                            vlSelf->__Vfunc_leading_zero32__7246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7246__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7252__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7252__part 
                            = vlSelf->__Vfunc_leading_zero32__7252__value;
                        vlSelf->__Vfunc_leading_zero32__7252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7252__count)));
                            vlSelf->__Vfunc_leading_zero32__7252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7252__count)));
                            vlSelf->__Vfunc_leading_zero32__7252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7252__count)));
                            vlSelf->__Vfunc_leading_zero32__7252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7252__count)));
                            vlSelf->__Vfunc_leading_zero32__7252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7252__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7258__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7258__part 
                            = vlSelf->__Vfunc_leading_zero32__7258__value;
                        vlSelf->__Vfunc_leading_zero32__7258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7258__count)));
                            vlSelf->__Vfunc_leading_zero32__7258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7258__count)));
                            vlSelf->__Vfunc_leading_zero32__7258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7258__count)));
                            vlSelf->__Vfunc_leading_zero32__7258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7258__count)));
                            vlSelf->__Vfunc_leading_zero32__7258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7258__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7264__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7264__part 
                            = vlSelf->__Vfunc_leading_zero32__7264__value;
                        vlSelf->__Vfunc_leading_zero32__7264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7264__count)));
                            vlSelf->__Vfunc_leading_zero32__7264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7264__count)));
                            vlSelf->__Vfunc_leading_zero32__7264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7264__count)));
                            vlSelf->__Vfunc_leading_zero32__7264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7264__count)));
                            vlSelf->__Vfunc_leading_zero32__7264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7264__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7270__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7270__part 
                            = vlSelf->__Vfunc_leading_zero32__7270__value;
                        vlSelf->__Vfunc_leading_zero32__7270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7270__count)));
                            vlSelf->__Vfunc_leading_zero32__7270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7270__count)));
                            vlSelf->__Vfunc_leading_zero32__7270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7270__count)));
                            vlSelf->__Vfunc_leading_zero32__7270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7270__count)));
                            vlSelf->__Vfunc_leading_zero32__7270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7270__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7276__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7276__part 
                            = vlSelf->__Vfunc_leading_zero32__7276__value;
                        vlSelf->__Vfunc_leading_zero32__7276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7276__count)));
                            vlSelf->__Vfunc_leading_zero32__7276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7276__count)));
                            vlSelf->__Vfunc_leading_zero32__7276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7276__count)));
                            vlSelf->__Vfunc_leading_zero32__7276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7276__count)));
                            vlSelf->__Vfunc_leading_zero32__7276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7276__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7282__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7282__part 
                            = vlSelf->__Vfunc_leading_zero32__7282__value;
                        vlSelf->__Vfunc_leading_zero32__7282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7282__count)));
                            vlSelf->__Vfunc_leading_zero32__7282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7282__count)));
                            vlSelf->__Vfunc_leading_zero32__7282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7282__count)));
                            vlSelf->__Vfunc_leading_zero32__7282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7282__count)));
                            vlSelf->__Vfunc_leading_zero32__7282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7282__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7288__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7288__part 
                            = vlSelf->__Vfunc_leading_zero32__7288__value;
                        vlSelf->__Vfunc_leading_zero32__7288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7288__count)));
                            vlSelf->__Vfunc_leading_zero32__7288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7288__count)));
                            vlSelf->__Vfunc_leading_zero32__7288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7288__count)));
                            vlSelf->__Vfunc_leading_zero32__7288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7288__count)));
                            vlSelf->__Vfunc_leading_zero32__7288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7288__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7294__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7294__part 
                            = vlSelf->__Vfunc_leading_zero32__7294__value;
                        vlSelf->__Vfunc_leading_zero32__7294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7294__count)));
                            vlSelf->__Vfunc_leading_zero32__7294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7294__count)));
                            vlSelf->__Vfunc_leading_zero32__7294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7294__count)));
                            vlSelf->__Vfunc_leading_zero32__7294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7294__count)));
                            vlSelf->__Vfunc_leading_zero32__7294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7294__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7300__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7300__part 
                            = vlSelf->__Vfunc_leading_zero32__7300__value;
                        vlSelf->__Vfunc_leading_zero32__7300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7300__count)));
                            vlSelf->__Vfunc_leading_zero32__7300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7300__count)));
                            vlSelf->__Vfunc_leading_zero32__7300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7300__count)));
                            vlSelf->__Vfunc_leading_zero32__7300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7300__count)));
                            vlSelf->__Vfunc_leading_zero32__7300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7300__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7306__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7306__part 
                            = vlSelf->__Vfunc_leading_zero32__7306__value;
                        vlSelf->__Vfunc_leading_zero32__7306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7306__count)));
                            vlSelf->__Vfunc_leading_zero32__7306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7306__count)));
                            vlSelf->__Vfunc_leading_zero32__7306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7306__count)));
                            vlSelf->__Vfunc_leading_zero32__7306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7306__count)));
                            vlSelf->__Vfunc_leading_zero32__7306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7306__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7312__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7312__part 
                            = vlSelf->__Vfunc_leading_zero32__7312__value;
                        vlSelf->__Vfunc_leading_zero32__7312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7312__count)));
                            vlSelf->__Vfunc_leading_zero32__7312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7312__count)));
                            vlSelf->__Vfunc_leading_zero32__7312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7312__count)));
                            vlSelf->__Vfunc_leading_zero32__7312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7312__count)));
                            vlSelf->__Vfunc_leading_zero32__7312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7312__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7318__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7318__part 
                            = vlSelf->__Vfunc_leading_zero32__7318__value;
                        vlSelf->__Vfunc_leading_zero32__7318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7318__count)));
                            vlSelf->__Vfunc_leading_zero32__7318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7318__count)));
                            vlSelf->__Vfunc_leading_zero32__7318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7318__count)));
                            vlSelf->__Vfunc_leading_zero32__7318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7318__count)));
                            vlSelf->__Vfunc_leading_zero32__7318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7318__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7324__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7324__part 
                            = vlSelf->__Vfunc_leading_zero32__7324__value;
                        vlSelf->__Vfunc_leading_zero32__7324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7324__count)));
                            vlSelf->__Vfunc_leading_zero32__7324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7324__count)));
                            vlSelf->__Vfunc_leading_zero32__7324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7324__count)));
                            vlSelf->__Vfunc_leading_zero32__7324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7324__count)));
                            vlSelf->__Vfunc_leading_zero32__7324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7324__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7330__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7330__part 
                            = vlSelf->__Vfunc_leading_zero32__7330__value;
                        vlSelf->__Vfunc_leading_zero32__7330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7330__count)));
                            vlSelf->__Vfunc_leading_zero32__7330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7330__count)));
                            vlSelf->__Vfunc_leading_zero32__7330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7330__count)));
                            vlSelf->__Vfunc_leading_zero32__7330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7330__count)));
                            vlSelf->__Vfunc_leading_zero32__7330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7330__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7336__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7336__part 
                            = vlSelf->__Vfunc_leading_zero32__7336__value;
                        vlSelf->__Vfunc_leading_zero32__7336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7336__count)));
                            vlSelf->__Vfunc_leading_zero32__7336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7336__count)));
                            vlSelf->__Vfunc_leading_zero32__7336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7336__count)));
                            vlSelf->__Vfunc_leading_zero32__7336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7336__count)));
                            vlSelf->__Vfunc_leading_zero32__7336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7336__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7342__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7342__part 
                            = vlSelf->__Vfunc_leading_zero32__7342__value;
                        vlSelf->__Vfunc_leading_zero32__7342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7342__count)));
                            vlSelf->__Vfunc_leading_zero32__7342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7342__count)));
                            vlSelf->__Vfunc_leading_zero32__7342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7342__count)));
                            vlSelf->__Vfunc_leading_zero32__7342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7342__count)));
                            vlSelf->__Vfunc_leading_zero32__7342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7342__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7348__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7348__part 
                            = vlSelf->__Vfunc_leading_zero32__7348__value;
                        vlSelf->__Vfunc_leading_zero32__7348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7348__count)));
                            vlSelf->__Vfunc_leading_zero32__7348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7348__count)));
                            vlSelf->__Vfunc_leading_zero32__7348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7348__count)));
                            vlSelf->__Vfunc_leading_zero32__7348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7348__count)));
                            vlSelf->__Vfunc_leading_zero32__7348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7348__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7354__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7354__part 
                            = vlSelf->__Vfunc_leading_zero32__7354__value;
                        vlSelf->__Vfunc_leading_zero32__7354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                            vlSelf->__Vfunc_leading_zero32__7354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7354__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7360__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7360__part 
                            = vlSelf->__Vfunc_leading_zero32__7360__value;
                        vlSelf->__Vfunc_leading_zero32__7360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                            vlSelf->__Vfunc_leading_zero32__7360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7360__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7366__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7366__part 
                            = vlSelf->__Vfunc_leading_zero32__7366__value;
                        vlSelf->__Vfunc_leading_zero32__7366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7366__count)));
                            vlSelf->__Vfunc_leading_zero32__7366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7366__count)));
                            vlSelf->__Vfunc_leading_zero32__7366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7366__count)));
                            vlSelf->__Vfunc_leading_zero32__7366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7366__count)));
                            vlSelf->__Vfunc_leading_zero32__7366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7366__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7372__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7372__part 
                            = vlSelf->__Vfunc_leading_zero32__7372__value;
                        vlSelf->__Vfunc_leading_zero32__7372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7372__count)));
                            vlSelf->__Vfunc_leading_zero32__7372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7372__count)));
                            vlSelf->__Vfunc_leading_zero32__7372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7372__count)));
                            vlSelf->__Vfunc_leading_zero32__7372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7372__count)));
                            vlSelf->__Vfunc_leading_zero32__7372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7372__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7378__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7378__part 
                            = vlSelf->__Vfunc_leading_zero32__7378__value;
                        vlSelf->__Vfunc_leading_zero32__7378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7378__count)));
                            vlSelf->__Vfunc_leading_zero32__7378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7378__count)));
                            vlSelf->__Vfunc_leading_zero32__7378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7378__count)));
                            vlSelf->__Vfunc_leading_zero32__7378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7378__count)));
                            vlSelf->__Vfunc_leading_zero32__7378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7378__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7384__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7384__part 
                            = vlSelf->__Vfunc_leading_zero32__7384__value;
                        vlSelf->__Vfunc_leading_zero32__7384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7384__count)));
                            vlSelf->__Vfunc_leading_zero32__7384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7384__count)));
                            vlSelf->__Vfunc_leading_zero32__7384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7384__count)));
                            vlSelf->__Vfunc_leading_zero32__7384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7384__count)));
                            vlSelf->__Vfunc_leading_zero32__7384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7384__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7390__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7390__part 
                            = vlSelf->__Vfunc_leading_zero32__7390__value;
                        vlSelf->__Vfunc_leading_zero32__7390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                            vlSelf->__Vfunc_leading_zero32__7390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7390__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7396__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7396__part 
                            = vlSelf->__Vfunc_leading_zero32__7396__value;
                        vlSelf->__Vfunc_leading_zero32__7396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                            vlSelf->__Vfunc_leading_zero32__7396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7396__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7402__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7402__part 
                            = vlSelf->__Vfunc_leading_zero32__7402__value;
                        vlSelf->__Vfunc_leading_zero32__7402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7402__count)));
                            vlSelf->__Vfunc_leading_zero32__7402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7402__count)));
                            vlSelf->__Vfunc_leading_zero32__7402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7402__count)));
                            vlSelf->__Vfunc_leading_zero32__7402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7402__count)));
                            vlSelf->__Vfunc_leading_zero32__7402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7402__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7408__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7408__part 
                            = vlSelf->__Vfunc_leading_zero32__7408__value;
                        vlSelf->__Vfunc_leading_zero32__7408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7408__count)));
                            vlSelf->__Vfunc_leading_zero32__7408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7408__count)));
                            vlSelf->__Vfunc_leading_zero32__7408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7408__count)));
                            vlSelf->__Vfunc_leading_zero32__7408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7408__count)));
                            vlSelf->__Vfunc_leading_zero32__7408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7408__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7414__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7414__part 
                            = vlSelf->__Vfunc_leading_zero32__7414__value;
                        vlSelf->__Vfunc_leading_zero32__7414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7414__count)));
                            vlSelf->__Vfunc_leading_zero32__7414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7414__count)));
                            vlSelf->__Vfunc_leading_zero32__7414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7414__count)));
                            vlSelf->__Vfunc_leading_zero32__7414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7414__count)));
                            vlSelf->__Vfunc_leading_zero32__7414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7414__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7420__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7420__part 
                            = vlSelf->__Vfunc_leading_zero32__7420__value;
                        vlSelf->__Vfunc_leading_zero32__7420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7420__count)));
                            vlSelf->__Vfunc_leading_zero32__7420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7420__count)));
                            vlSelf->__Vfunc_leading_zero32__7420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7420__count)));
                            vlSelf->__Vfunc_leading_zero32__7420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7420__count)));
                            vlSelf->__Vfunc_leading_zero32__7420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7420__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7426__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7426__part 
                            = vlSelf->__Vfunc_leading_zero32__7426__value;
                        vlSelf->__Vfunc_leading_zero32__7426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                            vlSelf->__Vfunc_leading_zero32__7426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7426__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7432__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7432__part 
                            = vlSelf->__Vfunc_leading_zero32__7432__value;
                        vlSelf->__Vfunc_leading_zero32__7432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                            vlSelf->__Vfunc_leading_zero32__7432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7432__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7438__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7438__part 
                            = vlSelf->__Vfunc_leading_zero32__7438__value;
                        vlSelf->__Vfunc_leading_zero32__7438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7438__count)));
                            vlSelf->__Vfunc_leading_zero32__7438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7438__count)));
                            vlSelf->__Vfunc_leading_zero32__7438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7438__count)));
                            vlSelf->__Vfunc_leading_zero32__7438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7438__count)));
                            vlSelf->__Vfunc_leading_zero32__7438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7438__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7444__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7444__part 
                            = vlSelf->__Vfunc_leading_zero32__7444__value;
                        vlSelf->__Vfunc_leading_zero32__7444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7444__count)));
                            vlSelf->__Vfunc_leading_zero32__7444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7444__count)));
                            vlSelf->__Vfunc_leading_zero32__7444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7444__count)));
                            vlSelf->__Vfunc_leading_zero32__7444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7444__count)));
                            vlSelf->__Vfunc_leading_zero32__7444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7444__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7450__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7450__part 
                            = vlSelf->__Vfunc_leading_zero32__7450__value;
                        vlSelf->__Vfunc_leading_zero32__7450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7450__count)));
                            vlSelf->__Vfunc_leading_zero32__7450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7450__count)));
                            vlSelf->__Vfunc_leading_zero32__7450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7450__count)));
                            vlSelf->__Vfunc_leading_zero32__7450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7450__count)));
                            vlSelf->__Vfunc_leading_zero32__7450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7450__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7456__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7456__part 
                            = vlSelf->__Vfunc_leading_zero32__7456__value;
                        vlSelf->__Vfunc_leading_zero32__7456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7456__count)));
                            vlSelf->__Vfunc_leading_zero32__7456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7456__count)));
                            vlSelf->__Vfunc_leading_zero32__7456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7456__count)));
                            vlSelf->__Vfunc_leading_zero32__7456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7456__count)));
                            vlSelf->__Vfunc_leading_zero32__7456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7456__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7462__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7462__part 
                            = vlSelf->__Vfunc_leading_zero32__7462__value;
                        vlSelf->__Vfunc_leading_zero32__7462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                            vlSelf->__Vfunc_leading_zero32__7462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7462__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7468__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7468__part 
                            = vlSelf->__Vfunc_leading_zero32__7468__value;
                        vlSelf->__Vfunc_leading_zero32__7468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                            vlSelf->__Vfunc_leading_zero32__7468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7468__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7474__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7474__part 
                            = vlSelf->__Vfunc_leading_zero32__7474__value;
                        vlSelf->__Vfunc_leading_zero32__7474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7474__count)));
                            vlSelf->__Vfunc_leading_zero32__7474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7474__count)));
                            vlSelf->__Vfunc_leading_zero32__7474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7474__count)));
                            vlSelf->__Vfunc_leading_zero32__7474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7474__count)));
                            vlSelf->__Vfunc_leading_zero32__7474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7474__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7480__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7480__part 
                            = vlSelf->__Vfunc_leading_zero32__7480__value;
                        vlSelf->__Vfunc_leading_zero32__7480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7480__count)));
                            vlSelf->__Vfunc_leading_zero32__7480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7480__count)));
                            vlSelf->__Vfunc_leading_zero32__7480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7480__count)));
                            vlSelf->__Vfunc_leading_zero32__7480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7480__count)));
                            vlSelf->__Vfunc_leading_zero32__7480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7480__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7486__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7486__part 
                            = vlSelf->__Vfunc_leading_zero32__7486__value;
                        vlSelf->__Vfunc_leading_zero32__7486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7486__count)));
                            vlSelf->__Vfunc_leading_zero32__7486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7486__count)));
                            vlSelf->__Vfunc_leading_zero32__7486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7486__count)));
                            vlSelf->__Vfunc_leading_zero32__7486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7486__count)));
                            vlSelf->__Vfunc_leading_zero32__7486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7486__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7492__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7492__part 
                            = vlSelf->__Vfunc_leading_zero32__7492__value;
                        vlSelf->__Vfunc_leading_zero32__7492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7492__count)));
                            vlSelf->__Vfunc_leading_zero32__7492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7492__count)));
                            vlSelf->__Vfunc_leading_zero32__7492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7492__count)));
                            vlSelf->__Vfunc_leading_zero32__7492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7492__count)));
                            vlSelf->__Vfunc_leading_zero32__7492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7492__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7498__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7498__part 
                            = vlSelf->__Vfunc_leading_zero32__7498__value;
                        vlSelf->__Vfunc_leading_zero32__7498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7498__count)));
                            vlSelf->__Vfunc_leading_zero32__7498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7498__count)));
                            vlSelf->__Vfunc_leading_zero32__7498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7498__count)));
                            vlSelf->__Vfunc_leading_zero32__7498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7498__count)));
                            vlSelf->__Vfunc_leading_zero32__7498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7498__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7504__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7504__part 
                            = vlSelf->__Vfunc_leading_zero32__7504__value;
                        vlSelf->__Vfunc_leading_zero32__7504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7504__count)));
                            vlSelf->__Vfunc_leading_zero32__7504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7504__count)));
                            vlSelf->__Vfunc_leading_zero32__7504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7504__count)));
                            vlSelf->__Vfunc_leading_zero32__7504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7504__count)));
                            vlSelf->__Vfunc_leading_zero32__7504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7504__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7510__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7510__part 
                            = vlSelf->__Vfunc_leading_zero32__7510__value;
                        vlSelf->__Vfunc_leading_zero32__7510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7510__count)));
                            vlSelf->__Vfunc_leading_zero32__7510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7510__count)));
                            vlSelf->__Vfunc_leading_zero32__7510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7510__count)));
                            vlSelf->__Vfunc_leading_zero32__7510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7510__count)));
                            vlSelf->__Vfunc_leading_zero32__7510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7510__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7516__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7516__part 
                            = vlSelf->__Vfunc_leading_zero32__7516__value;
                        vlSelf->__Vfunc_leading_zero32__7516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7516__count)));
                            vlSelf->__Vfunc_leading_zero32__7516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7516__count)));
                            vlSelf->__Vfunc_leading_zero32__7516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7516__count)));
                            vlSelf->__Vfunc_leading_zero32__7516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7516__count)));
                            vlSelf->__Vfunc_leading_zero32__7516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7516__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7522__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7522__part 
                            = vlSelf->__Vfunc_leading_zero32__7522__value;
                        vlSelf->__Vfunc_leading_zero32__7522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7522__count)));
                            vlSelf->__Vfunc_leading_zero32__7522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7522__count)));
                            vlSelf->__Vfunc_leading_zero32__7522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7522__count)));
                            vlSelf->__Vfunc_leading_zero32__7522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7522__count)));
                            vlSelf->__Vfunc_leading_zero32__7522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7522__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7528__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7528__part 
                            = vlSelf->__Vfunc_leading_zero32__7528__value;
                        vlSelf->__Vfunc_leading_zero32__7528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7528__count)));
                            vlSelf->__Vfunc_leading_zero32__7528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7528__count)));
                            vlSelf->__Vfunc_leading_zero32__7528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7528__count)));
                            vlSelf->__Vfunc_leading_zero32__7528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7528__count)));
                            vlSelf->__Vfunc_leading_zero32__7528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7528__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7534__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7534__part 
                            = vlSelf->__Vfunc_leading_zero32__7534__value;
                        vlSelf->__Vfunc_leading_zero32__7534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7534__count)));
                            vlSelf->__Vfunc_leading_zero32__7534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7534__count)));
                            vlSelf->__Vfunc_leading_zero32__7534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7534__count)));
                            vlSelf->__Vfunc_leading_zero32__7534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7534__count)));
                            vlSelf->__Vfunc_leading_zero32__7534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7534__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7540__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7540__part 
                            = vlSelf->__Vfunc_leading_zero32__7540__value;
                        vlSelf->__Vfunc_leading_zero32__7540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7540__count)));
                            vlSelf->__Vfunc_leading_zero32__7540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7540__count)));
                            vlSelf->__Vfunc_leading_zero32__7540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7540__count)));
                            vlSelf->__Vfunc_leading_zero32__7540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7540__count)));
                            vlSelf->__Vfunc_leading_zero32__7540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7540__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7546__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7546__part 
                            = vlSelf->__Vfunc_leading_zero32__7546__value;
                        vlSelf->__Vfunc_leading_zero32__7546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7546__count)));
                            vlSelf->__Vfunc_leading_zero32__7546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7546__count)));
                            vlSelf->__Vfunc_leading_zero32__7546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7546__count)));
                            vlSelf->__Vfunc_leading_zero32__7546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7546__count)));
                            vlSelf->__Vfunc_leading_zero32__7546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7546__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7552__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7552__part 
                            = vlSelf->__Vfunc_leading_zero32__7552__value;
                        vlSelf->__Vfunc_leading_zero32__7552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7552__count)));
                            vlSelf->__Vfunc_leading_zero32__7552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7552__count)));
                            vlSelf->__Vfunc_leading_zero32__7552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7552__count)));
                            vlSelf->__Vfunc_leading_zero32__7552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7552__count)));
                            vlSelf->__Vfunc_leading_zero32__7552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7552__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7558__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7558__part 
                            = vlSelf->__Vfunc_leading_zero32__7558__value;
                        vlSelf->__Vfunc_leading_zero32__7558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7558__count)));
                            vlSelf->__Vfunc_leading_zero32__7558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7558__count)));
                            vlSelf->__Vfunc_leading_zero32__7558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7558__count)));
                            vlSelf->__Vfunc_leading_zero32__7558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7558__count)));
                            vlSelf->__Vfunc_leading_zero32__7558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7558__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7564__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7564__part 
                            = vlSelf->__Vfunc_leading_zero32__7564__value;
                        vlSelf->__Vfunc_leading_zero32__7564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7564__count)));
                            vlSelf->__Vfunc_leading_zero32__7564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7564__count)));
                            vlSelf->__Vfunc_leading_zero32__7564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7564__count)));
                            vlSelf->__Vfunc_leading_zero32__7564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7564__count)));
                            vlSelf->__Vfunc_leading_zero32__7564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7564__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7570__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7570__part 
                            = vlSelf->__Vfunc_leading_zero32__7570__value;
                        vlSelf->__Vfunc_leading_zero32__7570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7570__count)));
                            vlSelf->__Vfunc_leading_zero32__7570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7570__count)));
                            vlSelf->__Vfunc_leading_zero32__7570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7570__count)));
                            vlSelf->__Vfunc_leading_zero32__7570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7570__count)));
                            vlSelf->__Vfunc_leading_zero32__7570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7570__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7576__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7576__part 
                            = vlSelf->__Vfunc_leading_zero32__7576__value;
                        vlSelf->__Vfunc_leading_zero32__7576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7576__count)));
                            vlSelf->__Vfunc_leading_zero32__7576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7576__count)));
                            vlSelf->__Vfunc_leading_zero32__7576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7576__count)));
                            vlSelf->__Vfunc_leading_zero32__7576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7576__count)));
                            vlSelf->__Vfunc_leading_zero32__7576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7576__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7582__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7582__part 
                            = vlSelf->__Vfunc_leading_zero32__7582__value;
                        vlSelf->__Vfunc_leading_zero32__7582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7582__count)));
                            vlSelf->__Vfunc_leading_zero32__7582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7582__count)));
                            vlSelf->__Vfunc_leading_zero32__7582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7582__count)));
                            vlSelf->__Vfunc_leading_zero32__7582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7582__count)));
                            vlSelf->__Vfunc_leading_zero32__7582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7582__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7588__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7588__part 
                            = vlSelf->__Vfunc_leading_zero32__7588__value;
                        vlSelf->__Vfunc_leading_zero32__7588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7588__count)));
                            vlSelf->__Vfunc_leading_zero32__7588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7588__count)));
                            vlSelf->__Vfunc_leading_zero32__7588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7588__count)));
                            vlSelf->__Vfunc_leading_zero32__7588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7588__count)));
                            vlSelf->__Vfunc_leading_zero32__7588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7588__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7594__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7594__part 
                            = vlSelf->__Vfunc_leading_zero32__7594__value;
                        vlSelf->__Vfunc_leading_zero32__7594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7594__count)));
                            vlSelf->__Vfunc_leading_zero32__7594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7594__count)));
                            vlSelf->__Vfunc_leading_zero32__7594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7594__count)));
                            vlSelf->__Vfunc_leading_zero32__7594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7594__count)));
                            vlSelf->__Vfunc_leading_zero32__7594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7594__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7600__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7600__part 
                            = vlSelf->__Vfunc_leading_zero32__7600__value;
                        vlSelf->__Vfunc_leading_zero32__7600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7600__count)));
                            vlSelf->__Vfunc_leading_zero32__7600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7600__count)));
                            vlSelf->__Vfunc_leading_zero32__7600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7600__count)));
                            vlSelf->__Vfunc_leading_zero32__7600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7600__count)));
                            vlSelf->__Vfunc_leading_zero32__7600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7600__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7606__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7606__part 
                            = vlSelf->__Vfunc_leading_zero32__7606__value;
                        vlSelf->__Vfunc_leading_zero32__7606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7606__count)));
                            vlSelf->__Vfunc_leading_zero32__7606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7606__count)));
                            vlSelf->__Vfunc_leading_zero32__7606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7606__count)));
                            vlSelf->__Vfunc_leading_zero32__7606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7606__count)));
                            vlSelf->__Vfunc_leading_zero32__7606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7606__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7612__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7612__part 
                            = vlSelf->__Vfunc_leading_zero32__7612__value;
                        vlSelf->__Vfunc_leading_zero32__7612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7612__count)));
                            vlSelf->__Vfunc_leading_zero32__7612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7612__count)));
                            vlSelf->__Vfunc_leading_zero32__7612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7612__count)));
                            vlSelf->__Vfunc_leading_zero32__7612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7612__count)));
                            vlSelf->__Vfunc_leading_zero32__7612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7612__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7618__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7618__part 
                            = vlSelf->__Vfunc_leading_zero32__7618__value;
                        vlSelf->__Vfunc_leading_zero32__7618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7618__count)));
                            vlSelf->__Vfunc_leading_zero32__7618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7618__count)));
                            vlSelf->__Vfunc_leading_zero32__7618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7618__count)));
                            vlSelf->__Vfunc_leading_zero32__7618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7618__count)));
                            vlSelf->__Vfunc_leading_zero32__7618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7618__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7624__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7624__part 
                            = vlSelf->__Vfunc_leading_zero32__7624__value;
                        vlSelf->__Vfunc_leading_zero32__7624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7624__count)));
                            vlSelf->__Vfunc_leading_zero32__7624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7624__count)));
                            vlSelf->__Vfunc_leading_zero32__7624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7624__count)));
                            vlSelf->__Vfunc_leading_zero32__7624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7624__count)));
                            vlSelf->__Vfunc_leading_zero32__7624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7624__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7630__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7630__part 
                            = vlSelf->__Vfunc_leading_zero32__7630__value;
                        vlSelf->__Vfunc_leading_zero32__7630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7630__count)));
                            vlSelf->__Vfunc_leading_zero32__7630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7630__count)));
                            vlSelf->__Vfunc_leading_zero32__7630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7630__count)));
                            vlSelf->__Vfunc_leading_zero32__7630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7630__count)));
                            vlSelf->__Vfunc_leading_zero32__7630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7630__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7636__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7636__part 
                            = vlSelf->__Vfunc_leading_zero32__7636__value;
                        vlSelf->__Vfunc_leading_zero32__7636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7636__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7642__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7642__part 
                            = vlSelf->__Vfunc_leading_zero32__7642__value;
                        vlSelf->__Vfunc_leading_zero32__7642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7642__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7648__part 
                            = vlSelf->__Vfunc_leading_zero32__7648__value;
                        vlSelf->__Vfunc_leading_zero32__7648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7648__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7654__part 
                            = vlSelf->__Vfunc_leading_zero32__7654__value;
                        vlSelf->__Vfunc_leading_zero32__7654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7654__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7660__part 
                            = vlSelf->__Vfunc_leading_zero32__7660__value;
                        vlSelf->__Vfunc_leading_zero32__7660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7660__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7666__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7666__part 
                            = vlSelf->__Vfunc_leading_zero32__7666__value;
                        vlSelf->__Vfunc_leading_zero32__7666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7666__count)));
                            vlSelf->__Vfunc_leading_zero32__7666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7666__count)));
                            vlSelf->__Vfunc_leading_zero32__7666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7666__count)));
                            vlSelf->__Vfunc_leading_zero32__7666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7666__count)));
                            vlSelf->__Vfunc_leading_zero32__7666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7666__Vfuncout)) 
                             - (IData)(5U))));
}
