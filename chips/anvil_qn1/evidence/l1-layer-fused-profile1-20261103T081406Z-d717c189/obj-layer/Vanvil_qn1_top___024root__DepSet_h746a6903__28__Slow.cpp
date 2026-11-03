// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__29(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__29\n"); );
    // Body
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
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10434__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10434__part 
                            = vlSelf->__Vfunc_leading_zero32__10434__value;
                        vlSelf->__Vfunc_leading_zero32__10434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10446__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10446__part 
                            = vlSelf->__Vfunc_leading_zero32__10446__value;
                        vlSelf->__Vfunc_leading_zero32__10446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10458__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10458__part 
                            = vlSelf->__Vfunc_leading_zero32__10458__value;
                        vlSelf->__Vfunc_leading_zero32__10458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10470__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10470__part 
                            = vlSelf->__Vfunc_leading_zero32__10470__value;
                        vlSelf->__Vfunc_leading_zero32__10470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10482__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10482__part 
                            = vlSelf->__Vfunc_leading_zero32__10482__value;
                        vlSelf->__Vfunc_leading_zero32__10482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10494__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10494__part 
                            = vlSelf->__Vfunc_leading_zero32__10494__value;
                        vlSelf->__Vfunc_leading_zero32__10494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10506__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10506__part 
                            = vlSelf->__Vfunc_leading_zero32__10506__value;
                        vlSelf->__Vfunc_leading_zero32__10506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10518__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10518__part 
                            = vlSelf->__Vfunc_leading_zero32__10518__value;
                        vlSelf->__Vfunc_leading_zero32__10518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10530__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10530__part 
                            = vlSelf->__Vfunc_leading_zero32__10530__value;
                        vlSelf->__Vfunc_leading_zero32__10530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10542__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10542__part 
                            = vlSelf->__Vfunc_leading_zero32__10542__value;
                        vlSelf->__Vfunc_leading_zero32__10542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10554__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10554__part 
                            = vlSelf->__Vfunc_leading_zero32__10554__value;
                        vlSelf->__Vfunc_leading_zero32__10554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10566__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10566__part 
                            = vlSelf->__Vfunc_leading_zero32__10566__value;
                        vlSelf->__Vfunc_leading_zero32__10566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10578__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10578__part 
                            = vlSelf->__Vfunc_leading_zero32__10578__value;
                        vlSelf->__Vfunc_leading_zero32__10578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10590__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10590__part 
                            = vlSelf->__Vfunc_leading_zero32__10590__value;
                        vlSelf->__Vfunc_leading_zero32__10590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10602__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10602__part 
                            = vlSelf->__Vfunc_leading_zero32__10602__value;
                        vlSelf->__Vfunc_leading_zero32__10602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10614__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10614__part 
                            = vlSelf->__Vfunc_leading_zero32__10614__value;
                        vlSelf->__Vfunc_leading_zero32__10614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10626__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10626__part 
                            = vlSelf->__Vfunc_leading_zero32__10626__value;
                        vlSelf->__Vfunc_leading_zero32__10626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10638__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10638__part 
                            = vlSelf->__Vfunc_leading_zero32__10638__value;
                        vlSelf->__Vfunc_leading_zero32__10638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10650__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10650__part 
                            = vlSelf->__Vfunc_leading_zero32__10650__value;
                        vlSelf->__Vfunc_leading_zero32__10650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10662__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10662__part 
                            = vlSelf->__Vfunc_leading_zero32__10662__value;
                        vlSelf->__Vfunc_leading_zero32__10662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10674__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10674__part 
                            = vlSelf->__Vfunc_leading_zero32__10674__value;
                        vlSelf->__Vfunc_leading_zero32__10674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10686__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10686__part 
                            = vlSelf->__Vfunc_leading_zero32__10686__value;
                        vlSelf->__Vfunc_leading_zero32__10686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10698__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10698__part 
                            = vlSelf->__Vfunc_leading_zero32__10698__value;
                        vlSelf->__Vfunc_leading_zero32__10698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10710__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10710__part 
                            = vlSelf->__Vfunc_leading_zero32__10710__value;
                        vlSelf->__Vfunc_leading_zero32__10710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10722__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10722__part 
                            = vlSelf->__Vfunc_leading_zero32__10722__value;
                        vlSelf->__Vfunc_leading_zero32__10722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10734__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10734__part 
                            = vlSelf->__Vfunc_leading_zero32__10734__value;
                        vlSelf->__Vfunc_leading_zero32__10734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10746__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10746__part 
                            = vlSelf->__Vfunc_leading_zero32__10746__value;
                        vlSelf->__Vfunc_leading_zero32__10746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10758__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10758__part 
                            = vlSelf->__Vfunc_leading_zero32__10758__value;
                        vlSelf->__Vfunc_leading_zero32__10758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10770__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10770__part 
                            = vlSelf->__Vfunc_leading_zero32__10770__value;
                        vlSelf->__Vfunc_leading_zero32__10770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10782__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10782__part 
                            = vlSelf->__Vfunc_leading_zero32__10782__value;
                        vlSelf->__Vfunc_leading_zero32__10782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10794__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10794__part 
                            = vlSelf->__Vfunc_leading_zero32__10794__value;
                        vlSelf->__Vfunc_leading_zero32__10794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10806__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10806__part 
                            = vlSelf->__Vfunc_leading_zero32__10806__value;
                        vlSelf->__Vfunc_leading_zero32__10806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10818__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10818__part 
                            = vlSelf->__Vfunc_leading_zero32__10818__value;
                        vlSelf->__Vfunc_leading_zero32__10818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10830__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10830__part 
                            = vlSelf->__Vfunc_leading_zero32__10830__value;
                        vlSelf->__Vfunc_leading_zero32__10830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10842__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10842__part 
                            = vlSelf->__Vfunc_leading_zero32__10842__value;
                        vlSelf->__Vfunc_leading_zero32__10842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10854__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10854__part 
                            = vlSelf->__Vfunc_leading_zero32__10854__value;
                        vlSelf->__Vfunc_leading_zero32__10854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10866__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10866__part 
                            = vlSelf->__Vfunc_leading_zero32__10866__value;
                        vlSelf->__Vfunc_leading_zero32__10866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10878__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10878__part 
                            = vlSelf->__Vfunc_leading_zero32__10878__value;
                        vlSelf->__Vfunc_leading_zero32__10878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10890__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10890__part 
                            = vlSelf->__Vfunc_leading_zero32__10890__value;
                        vlSelf->__Vfunc_leading_zero32__10890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10902__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10902__part 
                            = vlSelf->__Vfunc_leading_zero32__10902__value;
                        vlSelf->__Vfunc_leading_zero32__10902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10914__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10914__part 
                            = vlSelf->__Vfunc_leading_zero32__10914__value;
                        vlSelf->__Vfunc_leading_zero32__10914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10926__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10926__part 
                            = vlSelf->__Vfunc_leading_zero32__10926__value;
                        vlSelf->__Vfunc_leading_zero32__10926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10938__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10938__part 
                            = vlSelf->__Vfunc_leading_zero32__10938__value;
                        vlSelf->__Vfunc_leading_zero32__10938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10950__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10950__part 
                            = vlSelf->__Vfunc_leading_zero32__10950__value;
                        vlSelf->__Vfunc_leading_zero32__10950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10962__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10962__part 
                            = vlSelf->__Vfunc_leading_zero32__10962__value;
                        vlSelf->__Vfunc_leading_zero32__10962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10974__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10974__part 
                            = vlSelf->__Vfunc_leading_zero32__10974__value;
                        vlSelf->__Vfunc_leading_zero32__10974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10986__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10986__part 
                            = vlSelf->__Vfunc_leading_zero32__10986__value;
                        vlSelf->__Vfunc_leading_zero32__10986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10998__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10998__part 
                            = vlSelf->__Vfunc_leading_zero32__10998__value;
                        vlSelf->__Vfunc_leading_zero32__10998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11010__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11010__part 
                            = vlSelf->__Vfunc_leading_zero32__11010__value;
                        vlSelf->__Vfunc_leading_zero32__11010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11022__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11022__part 
                            = vlSelf->__Vfunc_leading_zero32__11022__value;
                        vlSelf->__Vfunc_leading_zero32__11022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11034__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11034__part 
                            = vlSelf->__Vfunc_leading_zero32__11034__value;
                        vlSelf->__Vfunc_leading_zero32__11034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11046__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11046__part 
                            = vlSelf->__Vfunc_leading_zero32__11046__value;
                        vlSelf->__Vfunc_leading_zero32__11046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11058__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11058__part 
                            = vlSelf->__Vfunc_leading_zero32__11058__value;
                        vlSelf->__Vfunc_leading_zero32__11058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11070__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11070__part 
                            = vlSelf->__Vfunc_leading_zero32__11070__value;
                        vlSelf->__Vfunc_leading_zero32__11070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11082__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11082__part 
                            = vlSelf->__Vfunc_leading_zero32__11082__value;
                        vlSelf->__Vfunc_leading_zero32__11082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11094__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11094__part 
                            = vlSelf->__Vfunc_leading_zero32__11094__value;
                        vlSelf->__Vfunc_leading_zero32__11094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11106__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11106__part 
                            = vlSelf->__Vfunc_leading_zero32__11106__value;
                        vlSelf->__Vfunc_leading_zero32__11106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11118__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11118__part 
                            = vlSelf->__Vfunc_leading_zero32__11118__value;
                        vlSelf->__Vfunc_leading_zero32__11118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11130__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11130__part 
                            = vlSelf->__Vfunc_leading_zero32__11130__value;
                        vlSelf->__Vfunc_leading_zero32__11130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11142__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11142__part 
                            = vlSelf->__Vfunc_leading_zero32__11142__value;
                        vlSelf->__Vfunc_leading_zero32__11142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11154__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11154__part 
                            = vlSelf->__Vfunc_leading_zero32__11154__value;
                        vlSelf->__Vfunc_leading_zero32__11154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11166__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11166__part 
                            = vlSelf->__Vfunc_leading_zero32__11166__value;
                        vlSelf->__Vfunc_leading_zero32__11166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11178__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11178__part 
                            = vlSelf->__Vfunc_leading_zero32__11178__value;
                        vlSelf->__Vfunc_leading_zero32__11178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11190__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11190__part 
                            = vlSelf->__Vfunc_leading_zero32__11190__value;
                        vlSelf->__Vfunc_leading_zero32__11190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11202__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11202__part 
                            = vlSelf->__Vfunc_leading_zero32__11202__value;
                        vlSelf->__Vfunc_leading_zero32__11202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11214__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11214__part 
                            = vlSelf->__Vfunc_leading_zero32__11214__value;
                        vlSelf->__Vfunc_leading_zero32__11214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11226__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11226__part 
                            = vlSelf->__Vfunc_leading_zero32__11226__value;
                        vlSelf->__Vfunc_leading_zero32__11226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11238__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11238__part 
                            = vlSelf->__Vfunc_leading_zero32__11238__value;
                        vlSelf->__Vfunc_leading_zero32__11238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11250__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11250__part 
                            = vlSelf->__Vfunc_leading_zero32__11250__value;
                        vlSelf->__Vfunc_leading_zero32__11250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11262__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11262__part 
                            = vlSelf->__Vfunc_leading_zero32__11262__value;
                        vlSelf->__Vfunc_leading_zero32__11262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11274__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11274__part 
                            = vlSelf->__Vfunc_leading_zero32__11274__value;
                        vlSelf->__Vfunc_leading_zero32__11274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11274__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11286__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11286__part 
                            = vlSelf->__Vfunc_leading_zero32__11286__value;
                        vlSelf->__Vfunc_leading_zero32__11286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11298__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11298__part 
                            = vlSelf->__Vfunc_leading_zero32__11298__value;
                        vlSelf->__Vfunc_leading_zero32__11298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11310__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11310__part 
                            = vlSelf->__Vfunc_leading_zero32__11310__value;
                        vlSelf->__Vfunc_leading_zero32__11310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11322__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11322__part 
                            = vlSelf->__Vfunc_leading_zero32__11322__value;
                        vlSelf->__Vfunc_leading_zero32__11322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11334__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11334__part 
                            = vlSelf->__Vfunc_leading_zero32__11334__value;
                        vlSelf->__Vfunc_leading_zero32__11334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11346__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11346__part 
                            = vlSelf->__Vfunc_leading_zero32__11346__value;
                        vlSelf->__Vfunc_leading_zero32__11346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11346__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11358__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11358__part 
                            = vlSelf->__Vfunc_leading_zero32__11358__value;
                        vlSelf->__Vfunc_leading_zero32__11358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11358__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11370__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11370__part 
                            = vlSelf->__Vfunc_leading_zero32__11370__value;
                        vlSelf->__Vfunc_leading_zero32__11370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11370__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11382__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11382__part 
                            = vlSelf->__Vfunc_leading_zero32__11382__value;
                        vlSelf->__Vfunc_leading_zero32__11382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11382__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11394__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11394__part 
                            = vlSelf->__Vfunc_leading_zero32__11394__value;
                        vlSelf->__Vfunc_leading_zero32__11394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11394__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11406__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11406__part 
                            = vlSelf->__Vfunc_leading_zero32__11406__value;
                        vlSelf->__Vfunc_leading_zero32__11406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11406__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11418__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11418__part 
                            = vlSelf->__Vfunc_leading_zero32__11418__value;
                        vlSelf->__Vfunc_leading_zero32__11418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11418__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11430__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11430__part 
                            = vlSelf->__Vfunc_leading_zero32__11430__value;
                        vlSelf->__Vfunc_leading_zero32__11430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11430__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11442__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11442__part 
                            = vlSelf->__Vfunc_leading_zero32__11442__value;
                        vlSelf->__Vfunc_leading_zero32__11442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11442__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11454__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11454__part 
                            = vlSelf->__Vfunc_leading_zero32__11454__value;
                        vlSelf->__Vfunc_leading_zero32__11454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11454__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11466__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11466__part 
                            = vlSelf->__Vfunc_leading_zero32__11466__value;
                        vlSelf->__Vfunc_leading_zero32__11466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11466__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11478__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11478__part 
                            = vlSelf->__Vfunc_leading_zero32__11478__value;
                        vlSelf->__Vfunc_leading_zero32__11478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11478__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11490__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11490__part 
                            = vlSelf->__Vfunc_leading_zero32__11490__value;
                        vlSelf->__Vfunc_leading_zero32__11490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11490__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11502__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11502__part 
                            = vlSelf->__Vfunc_leading_zero32__11502__value;
                        vlSelf->__Vfunc_leading_zero32__11502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11502__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11514__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11514__part 
                            = vlSelf->__Vfunc_leading_zero32__11514__value;
                        vlSelf->__Vfunc_leading_zero32__11514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11514__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11526__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11526__part 
                            = vlSelf->__Vfunc_leading_zero32__11526__value;
                        vlSelf->__Vfunc_leading_zero32__11526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11526__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11538__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11538__part 
                            = vlSelf->__Vfunc_leading_zero32__11538__value;
                        vlSelf->__Vfunc_leading_zero32__11538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11538__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11550__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11550__part 
                            = vlSelf->__Vfunc_leading_zero32__11550__value;
                        vlSelf->__Vfunc_leading_zero32__11550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11550__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11562__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11562__part 
                            = vlSelf->__Vfunc_leading_zero32__11562__value;
                        vlSelf->__Vfunc_leading_zero32__11562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11562__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11574__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11574__part 
                            = vlSelf->__Vfunc_leading_zero32__11574__value;
                        vlSelf->__Vfunc_leading_zero32__11574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11574__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11586__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11586__part 
                            = vlSelf->__Vfunc_leading_zero32__11586__value;
                        vlSelf->__Vfunc_leading_zero32__11586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11586__count)));
                            vlSelf->__Vfunc_leading_zero32__11586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11586__count)));
                            vlSelf->__Vfunc_leading_zero32__11586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11586__count)));
                            vlSelf->__Vfunc_leading_zero32__11586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11586__count)));
                            vlSelf->__Vfunc_leading_zero32__11586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11586__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11598__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11598__part 
                            = vlSelf->__Vfunc_leading_zero32__11598__value;
                        vlSelf->__Vfunc_leading_zero32__11598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11598__count)));
                            vlSelf->__Vfunc_leading_zero32__11598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11598__count)));
                            vlSelf->__Vfunc_leading_zero32__11598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11598__count)));
                            vlSelf->__Vfunc_leading_zero32__11598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11598__count)));
                            vlSelf->__Vfunc_leading_zero32__11598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11598__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11610__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11610__part 
                            = vlSelf->__Vfunc_leading_zero32__11610__value;
                        vlSelf->__Vfunc_leading_zero32__11610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11610__count)));
                            vlSelf->__Vfunc_leading_zero32__11610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11610__count)));
                            vlSelf->__Vfunc_leading_zero32__11610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11610__count)));
                            vlSelf->__Vfunc_leading_zero32__11610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11610__count)));
                            vlSelf->__Vfunc_leading_zero32__11610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11610__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11622__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11622__part 
                            = vlSelf->__Vfunc_leading_zero32__11622__value;
                        vlSelf->__Vfunc_leading_zero32__11622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11622__count)));
                            vlSelf->__Vfunc_leading_zero32__11622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11622__count)));
                            vlSelf->__Vfunc_leading_zero32__11622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11622__count)));
                            vlSelf->__Vfunc_leading_zero32__11622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11622__count)));
                            vlSelf->__Vfunc_leading_zero32__11622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11622__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11634__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11634__part 
                            = vlSelf->__Vfunc_leading_zero32__11634__value;
                        vlSelf->__Vfunc_leading_zero32__11634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11634__count)));
                            vlSelf->__Vfunc_leading_zero32__11634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11634__count)));
                            vlSelf->__Vfunc_leading_zero32__11634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11634__count)));
                            vlSelf->__Vfunc_leading_zero32__11634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11634__count)));
                            vlSelf->__Vfunc_leading_zero32__11634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11634__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11646__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11646__part 
                            = vlSelf->__Vfunc_leading_zero32__11646__value;
                        vlSelf->__Vfunc_leading_zero32__11646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11646__count)));
                            vlSelf->__Vfunc_leading_zero32__11646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11646__count)));
                            vlSelf->__Vfunc_leading_zero32__11646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11646__count)));
                            vlSelf->__Vfunc_leading_zero32__11646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11646__count)));
                            vlSelf->__Vfunc_leading_zero32__11646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11646__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11658__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11658__part 
                            = vlSelf->__Vfunc_leading_zero32__11658__value;
                        vlSelf->__Vfunc_leading_zero32__11658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11658__count)));
                            vlSelf->__Vfunc_leading_zero32__11658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11658__count)));
                            vlSelf->__Vfunc_leading_zero32__11658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11658__count)));
                            vlSelf->__Vfunc_leading_zero32__11658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11658__count)));
                            vlSelf->__Vfunc_leading_zero32__11658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11658__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11670__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11670__part 
                            = vlSelf->__Vfunc_leading_zero32__11670__value;
                        vlSelf->__Vfunc_leading_zero32__11670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11670__count)));
                            vlSelf->__Vfunc_leading_zero32__11670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11670__count)));
                            vlSelf->__Vfunc_leading_zero32__11670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11670__count)));
                            vlSelf->__Vfunc_leading_zero32__11670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11670__count)));
                            vlSelf->__Vfunc_leading_zero32__11670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11670__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11682__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11682__part 
                            = vlSelf->__Vfunc_leading_zero32__11682__value;
                        vlSelf->__Vfunc_leading_zero32__11682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11682__count)));
                            vlSelf->__Vfunc_leading_zero32__11682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11682__count)));
                            vlSelf->__Vfunc_leading_zero32__11682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11682__count)));
                            vlSelf->__Vfunc_leading_zero32__11682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11682__count)));
                            vlSelf->__Vfunc_leading_zero32__11682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11682__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11694__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11694__part 
                            = vlSelf->__Vfunc_leading_zero32__11694__value;
                        vlSelf->__Vfunc_leading_zero32__11694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11694__count)));
                            vlSelf->__Vfunc_leading_zero32__11694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11694__count)));
                            vlSelf->__Vfunc_leading_zero32__11694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11694__count)));
                            vlSelf->__Vfunc_leading_zero32__11694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11694__count)));
                            vlSelf->__Vfunc_leading_zero32__11694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11694__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11706__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11706__part 
                            = vlSelf->__Vfunc_leading_zero32__11706__value;
                        vlSelf->__Vfunc_leading_zero32__11706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11706__count)));
                            vlSelf->__Vfunc_leading_zero32__11706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11706__count)));
                            vlSelf->__Vfunc_leading_zero32__11706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11706__count)));
                            vlSelf->__Vfunc_leading_zero32__11706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11706__count)));
                            vlSelf->__Vfunc_leading_zero32__11706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11706__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11718__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11718__part 
                            = vlSelf->__Vfunc_leading_zero32__11718__value;
                        vlSelf->__Vfunc_leading_zero32__11718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11718__count)));
                            vlSelf->__Vfunc_leading_zero32__11718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11718__count)));
                            vlSelf->__Vfunc_leading_zero32__11718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11718__count)));
                            vlSelf->__Vfunc_leading_zero32__11718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11718__count)));
                            vlSelf->__Vfunc_leading_zero32__11718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11718__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11730__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11730__part 
                            = vlSelf->__Vfunc_leading_zero32__11730__value;
                        vlSelf->__Vfunc_leading_zero32__11730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11730__count)));
                            vlSelf->__Vfunc_leading_zero32__11730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11730__count)));
                            vlSelf->__Vfunc_leading_zero32__11730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11730__count)));
                            vlSelf->__Vfunc_leading_zero32__11730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11730__count)));
                            vlSelf->__Vfunc_leading_zero32__11730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11730__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11742__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11742__part 
                            = vlSelf->__Vfunc_leading_zero32__11742__value;
                        vlSelf->__Vfunc_leading_zero32__11742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11742__count)));
                            vlSelf->__Vfunc_leading_zero32__11742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11742__count)));
                            vlSelf->__Vfunc_leading_zero32__11742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11742__count)));
                            vlSelf->__Vfunc_leading_zero32__11742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11742__count)));
                            vlSelf->__Vfunc_leading_zero32__11742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11742__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11754__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11754__part 
                            = vlSelf->__Vfunc_leading_zero32__11754__value;
                        vlSelf->__Vfunc_leading_zero32__11754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11754__count)));
                            vlSelf->__Vfunc_leading_zero32__11754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11754__count)));
                            vlSelf->__Vfunc_leading_zero32__11754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11754__count)));
                            vlSelf->__Vfunc_leading_zero32__11754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11754__count)));
                            vlSelf->__Vfunc_leading_zero32__11754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11754__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11766__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11766__part 
                            = vlSelf->__Vfunc_leading_zero32__11766__value;
                        vlSelf->__Vfunc_leading_zero32__11766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11766__count)));
                            vlSelf->__Vfunc_leading_zero32__11766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11766__count)));
                            vlSelf->__Vfunc_leading_zero32__11766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11766__count)));
                            vlSelf->__Vfunc_leading_zero32__11766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11766__count)));
                            vlSelf->__Vfunc_leading_zero32__11766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11766__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11778__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11778__part 
                            = vlSelf->__Vfunc_leading_zero32__11778__value;
                        vlSelf->__Vfunc_leading_zero32__11778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11778__count)));
                            vlSelf->__Vfunc_leading_zero32__11778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11778__count)));
                            vlSelf->__Vfunc_leading_zero32__11778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11778__count)));
                            vlSelf->__Vfunc_leading_zero32__11778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11778__count)));
                            vlSelf->__Vfunc_leading_zero32__11778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11778__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11790__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11790__part 
                            = vlSelf->__Vfunc_leading_zero32__11790__value;
                        vlSelf->__Vfunc_leading_zero32__11790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11790__count)));
                            vlSelf->__Vfunc_leading_zero32__11790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11790__count)));
                            vlSelf->__Vfunc_leading_zero32__11790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11790__count)));
                            vlSelf->__Vfunc_leading_zero32__11790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11790__count)));
                            vlSelf->__Vfunc_leading_zero32__11790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11790__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11802__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11802__part 
                            = vlSelf->__Vfunc_leading_zero32__11802__value;
                        vlSelf->__Vfunc_leading_zero32__11802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11802__count)));
                            vlSelf->__Vfunc_leading_zero32__11802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11802__count)));
                            vlSelf->__Vfunc_leading_zero32__11802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11802__count)));
                            vlSelf->__Vfunc_leading_zero32__11802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11802__count)));
                            vlSelf->__Vfunc_leading_zero32__11802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11802__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11814__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11814__part 
                            = vlSelf->__Vfunc_leading_zero32__11814__value;
                        vlSelf->__Vfunc_leading_zero32__11814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11814__count)));
                            vlSelf->__Vfunc_leading_zero32__11814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11814__count)));
                            vlSelf->__Vfunc_leading_zero32__11814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11814__count)));
                            vlSelf->__Vfunc_leading_zero32__11814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11814__count)));
                            vlSelf->__Vfunc_leading_zero32__11814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11814__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11826__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11826__part 
                            = vlSelf->__Vfunc_leading_zero32__11826__value;
                        vlSelf->__Vfunc_leading_zero32__11826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11826__count)));
                            vlSelf->__Vfunc_leading_zero32__11826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11826__count)));
                            vlSelf->__Vfunc_leading_zero32__11826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11826__count)));
                            vlSelf->__Vfunc_leading_zero32__11826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11826__count)));
                            vlSelf->__Vfunc_leading_zero32__11826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11826__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11838__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11838__part 
                            = vlSelf->__Vfunc_leading_zero32__11838__value;
                        vlSelf->__Vfunc_leading_zero32__11838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11838__count)));
                            vlSelf->__Vfunc_leading_zero32__11838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11838__count)));
                            vlSelf->__Vfunc_leading_zero32__11838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11838__count)));
                            vlSelf->__Vfunc_leading_zero32__11838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11838__count)));
                            vlSelf->__Vfunc_leading_zero32__11838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11838__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11850__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11850__part 
                            = vlSelf->__Vfunc_leading_zero32__11850__value;
                        vlSelf->__Vfunc_leading_zero32__11850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11850__count)));
                            vlSelf->__Vfunc_leading_zero32__11850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11850__count)));
                            vlSelf->__Vfunc_leading_zero32__11850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11850__count)));
                            vlSelf->__Vfunc_leading_zero32__11850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11850__count)));
                            vlSelf->__Vfunc_leading_zero32__11850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11850__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11862__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11862__part 
                            = vlSelf->__Vfunc_leading_zero32__11862__value;
                        vlSelf->__Vfunc_leading_zero32__11862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11862__count)));
                            vlSelf->__Vfunc_leading_zero32__11862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11862__count)));
                            vlSelf->__Vfunc_leading_zero32__11862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11862__count)));
                            vlSelf->__Vfunc_leading_zero32__11862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11862__count)));
                            vlSelf->__Vfunc_leading_zero32__11862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11862__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11874__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11874__part 
                            = vlSelf->__Vfunc_leading_zero32__11874__value;
                        vlSelf->__Vfunc_leading_zero32__11874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11874__count)));
                            vlSelf->__Vfunc_leading_zero32__11874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11874__count)));
                            vlSelf->__Vfunc_leading_zero32__11874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11874__count)));
                            vlSelf->__Vfunc_leading_zero32__11874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11874__count)));
                            vlSelf->__Vfunc_leading_zero32__11874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11874__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11886__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11886__part 
                            = vlSelf->__Vfunc_leading_zero32__11886__value;
                        vlSelf->__Vfunc_leading_zero32__11886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11886__count)));
                            vlSelf->__Vfunc_leading_zero32__11886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11886__count)));
                            vlSelf->__Vfunc_leading_zero32__11886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11886__count)));
                            vlSelf->__Vfunc_leading_zero32__11886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11886__count)));
                            vlSelf->__Vfunc_leading_zero32__11886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11886__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11898__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11898__part 
                            = vlSelf->__Vfunc_leading_zero32__11898__value;
                        vlSelf->__Vfunc_leading_zero32__11898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11898__count)));
                            vlSelf->__Vfunc_leading_zero32__11898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11898__count)));
                            vlSelf->__Vfunc_leading_zero32__11898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11898__count)));
                            vlSelf->__Vfunc_leading_zero32__11898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11898__count)));
                            vlSelf->__Vfunc_leading_zero32__11898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11898__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11910__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11910__part 
                            = vlSelf->__Vfunc_leading_zero32__11910__value;
                        vlSelf->__Vfunc_leading_zero32__11910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11910__count)));
                            vlSelf->__Vfunc_leading_zero32__11910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11910__count)));
                            vlSelf->__Vfunc_leading_zero32__11910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11910__count)));
                            vlSelf->__Vfunc_leading_zero32__11910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11910__count)));
                            vlSelf->__Vfunc_leading_zero32__11910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11910__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11922__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11922__part 
                            = vlSelf->__Vfunc_leading_zero32__11922__value;
                        vlSelf->__Vfunc_leading_zero32__11922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11922__count)));
                            vlSelf->__Vfunc_leading_zero32__11922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11922__count)));
                            vlSelf->__Vfunc_leading_zero32__11922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11922__count)));
                            vlSelf->__Vfunc_leading_zero32__11922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11922__count)));
                            vlSelf->__Vfunc_leading_zero32__11922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11922__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11934__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11934__part 
                            = vlSelf->__Vfunc_leading_zero32__11934__value;
                        vlSelf->__Vfunc_leading_zero32__11934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11934__count)));
                            vlSelf->__Vfunc_leading_zero32__11934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11934__count)));
                            vlSelf->__Vfunc_leading_zero32__11934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11934__count)));
                            vlSelf->__Vfunc_leading_zero32__11934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11934__count)));
                            vlSelf->__Vfunc_leading_zero32__11934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11934__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11946__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11946__part 
                            = vlSelf->__Vfunc_leading_zero32__11946__value;
                        vlSelf->__Vfunc_leading_zero32__11946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11946__count)));
                            vlSelf->__Vfunc_leading_zero32__11946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11946__count)));
                            vlSelf->__Vfunc_leading_zero32__11946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11946__count)));
                            vlSelf->__Vfunc_leading_zero32__11946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11946__count)));
                            vlSelf->__Vfunc_leading_zero32__11946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11946__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11958__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11958__part 
                            = vlSelf->__Vfunc_leading_zero32__11958__value;
                        vlSelf->__Vfunc_leading_zero32__11958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11958__count)));
                            vlSelf->__Vfunc_leading_zero32__11958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11958__count)));
                            vlSelf->__Vfunc_leading_zero32__11958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11958__count)));
                            vlSelf->__Vfunc_leading_zero32__11958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11958__count)));
                            vlSelf->__Vfunc_leading_zero32__11958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11958__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10433__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10433__part 
                            = vlSelf->__Vfunc_leading_zero32__10433__value;
                        vlSelf->__Vfunc_leading_zero32__10433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10433__count)));
                            vlSelf->__Vfunc_leading_zero32__10433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10433__count)));
                            vlSelf->__Vfunc_leading_zero32__10433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10433__count)));
                            vlSelf->__Vfunc_leading_zero32__10433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10433__count)));
                            vlSelf->__Vfunc_leading_zero32__10433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10433__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10445__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10445__part 
                            = vlSelf->__Vfunc_leading_zero32__10445__value;
                        vlSelf->__Vfunc_leading_zero32__10445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10445__count)));
                            vlSelf->__Vfunc_leading_zero32__10445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10445__count)));
                            vlSelf->__Vfunc_leading_zero32__10445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10445__count)));
                            vlSelf->__Vfunc_leading_zero32__10445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10445__count)));
                            vlSelf->__Vfunc_leading_zero32__10445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10445__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10457__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10457__part 
                            = vlSelf->__Vfunc_leading_zero32__10457__value;
                        vlSelf->__Vfunc_leading_zero32__10457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10457__count)));
                            vlSelf->__Vfunc_leading_zero32__10457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10457__count)));
                            vlSelf->__Vfunc_leading_zero32__10457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10457__count)));
                            vlSelf->__Vfunc_leading_zero32__10457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10457__count)));
                            vlSelf->__Vfunc_leading_zero32__10457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10457__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10469__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10469__part 
                            = vlSelf->__Vfunc_leading_zero32__10469__value;
                        vlSelf->__Vfunc_leading_zero32__10469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10469__count)));
                            vlSelf->__Vfunc_leading_zero32__10469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10469__count)));
                            vlSelf->__Vfunc_leading_zero32__10469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10469__count)));
                            vlSelf->__Vfunc_leading_zero32__10469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10469__count)));
                            vlSelf->__Vfunc_leading_zero32__10469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10469__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10481__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10481__part 
                            = vlSelf->__Vfunc_leading_zero32__10481__value;
                        vlSelf->__Vfunc_leading_zero32__10481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10481__count)));
                            vlSelf->__Vfunc_leading_zero32__10481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10481__count)));
                            vlSelf->__Vfunc_leading_zero32__10481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10481__count)));
                            vlSelf->__Vfunc_leading_zero32__10481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10481__count)));
                            vlSelf->__Vfunc_leading_zero32__10481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10481__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10493__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10493__part 
                            = vlSelf->__Vfunc_leading_zero32__10493__value;
                        vlSelf->__Vfunc_leading_zero32__10493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10493__count)));
                            vlSelf->__Vfunc_leading_zero32__10493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10493__count)));
                            vlSelf->__Vfunc_leading_zero32__10493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10493__count)));
                            vlSelf->__Vfunc_leading_zero32__10493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10493__count)));
                            vlSelf->__Vfunc_leading_zero32__10493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10493__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10505__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10505__part 
                            = vlSelf->__Vfunc_leading_zero32__10505__value;
                        vlSelf->__Vfunc_leading_zero32__10505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10505__count)));
                            vlSelf->__Vfunc_leading_zero32__10505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10505__count)));
                            vlSelf->__Vfunc_leading_zero32__10505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10505__count)));
                            vlSelf->__Vfunc_leading_zero32__10505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10505__count)));
                            vlSelf->__Vfunc_leading_zero32__10505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10505__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10517__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10517__part 
                            = vlSelf->__Vfunc_leading_zero32__10517__value;
                        vlSelf->__Vfunc_leading_zero32__10517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10517__count)));
                            vlSelf->__Vfunc_leading_zero32__10517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10517__count)));
                            vlSelf->__Vfunc_leading_zero32__10517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10517__count)));
                            vlSelf->__Vfunc_leading_zero32__10517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10517__count)));
                            vlSelf->__Vfunc_leading_zero32__10517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10517__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10529__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10529__part 
                            = vlSelf->__Vfunc_leading_zero32__10529__value;
                        vlSelf->__Vfunc_leading_zero32__10529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10529__count)));
                            vlSelf->__Vfunc_leading_zero32__10529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10529__count)));
                            vlSelf->__Vfunc_leading_zero32__10529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10529__count)));
                            vlSelf->__Vfunc_leading_zero32__10529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10529__count)));
                            vlSelf->__Vfunc_leading_zero32__10529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10529__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10541__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10541__part 
                            = vlSelf->__Vfunc_leading_zero32__10541__value;
                        vlSelf->__Vfunc_leading_zero32__10541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10541__count)));
                            vlSelf->__Vfunc_leading_zero32__10541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10541__count)));
                            vlSelf->__Vfunc_leading_zero32__10541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10541__count)));
                            vlSelf->__Vfunc_leading_zero32__10541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10541__count)));
                            vlSelf->__Vfunc_leading_zero32__10541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10541__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10553__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10553__part 
                            = vlSelf->__Vfunc_leading_zero32__10553__value;
                        vlSelf->__Vfunc_leading_zero32__10553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10553__count)));
                            vlSelf->__Vfunc_leading_zero32__10553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10553__count)));
                            vlSelf->__Vfunc_leading_zero32__10553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10553__count)));
                            vlSelf->__Vfunc_leading_zero32__10553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10553__count)));
                            vlSelf->__Vfunc_leading_zero32__10553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10553__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10565__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10565__part 
                            = vlSelf->__Vfunc_leading_zero32__10565__value;
                        vlSelf->__Vfunc_leading_zero32__10565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10565__count)));
                            vlSelf->__Vfunc_leading_zero32__10565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10565__count)));
                            vlSelf->__Vfunc_leading_zero32__10565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10565__count)));
                            vlSelf->__Vfunc_leading_zero32__10565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10565__count)));
                            vlSelf->__Vfunc_leading_zero32__10565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10565__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10577__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10577__part 
                            = vlSelf->__Vfunc_leading_zero32__10577__value;
                        vlSelf->__Vfunc_leading_zero32__10577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10577__count)));
                            vlSelf->__Vfunc_leading_zero32__10577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10577__count)));
                            vlSelf->__Vfunc_leading_zero32__10577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10577__count)));
                            vlSelf->__Vfunc_leading_zero32__10577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10577__count)));
                            vlSelf->__Vfunc_leading_zero32__10577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10577__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10589__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10589__part 
                            = vlSelf->__Vfunc_leading_zero32__10589__value;
                        vlSelf->__Vfunc_leading_zero32__10589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10589__count)));
                            vlSelf->__Vfunc_leading_zero32__10589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10589__count)));
                            vlSelf->__Vfunc_leading_zero32__10589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10589__count)));
                            vlSelf->__Vfunc_leading_zero32__10589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10589__count)));
                            vlSelf->__Vfunc_leading_zero32__10589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10589__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10601__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10601__part 
                            = vlSelf->__Vfunc_leading_zero32__10601__value;
                        vlSelf->__Vfunc_leading_zero32__10601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10601__count)));
                            vlSelf->__Vfunc_leading_zero32__10601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10601__count)));
                            vlSelf->__Vfunc_leading_zero32__10601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10601__count)));
                            vlSelf->__Vfunc_leading_zero32__10601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10601__count)));
                            vlSelf->__Vfunc_leading_zero32__10601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10613__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10613__part 
                            = vlSelf->__Vfunc_leading_zero32__10613__value;
                        vlSelf->__Vfunc_leading_zero32__10613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10613__count)));
                            vlSelf->__Vfunc_leading_zero32__10613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10613__count)));
                            vlSelf->__Vfunc_leading_zero32__10613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10613__count)));
                            vlSelf->__Vfunc_leading_zero32__10613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10613__count)));
                            vlSelf->__Vfunc_leading_zero32__10613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10613__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10625__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10625__part 
                            = vlSelf->__Vfunc_leading_zero32__10625__value;
                        vlSelf->__Vfunc_leading_zero32__10625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10625__count)));
                            vlSelf->__Vfunc_leading_zero32__10625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10625__count)));
                            vlSelf->__Vfunc_leading_zero32__10625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10625__count)));
                            vlSelf->__Vfunc_leading_zero32__10625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10625__count)));
                            vlSelf->__Vfunc_leading_zero32__10625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10625__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10637__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10637__part 
                            = vlSelf->__Vfunc_leading_zero32__10637__value;
                        vlSelf->__Vfunc_leading_zero32__10637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10637__count)));
                            vlSelf->__Vfunc_leading_zero32__10637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10637__count)));
                            vlSelf->__Vfunc_leading_zero32__10637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10637__count)));
                            vlSelf->__Vfunc_leading_zero32__10637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10637__count)));
                            vlSelf->__Vfunc_leading_zero32__10637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10649__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10649__part 
                            = vlSelf->__Vfunc_leading_zero32__10649__value;
                        vlSelf->__Vfunc_leading_zero32__10649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10649__count)));
                            vlSelf->__Vfunc_leading_zero32__10649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10649__count)));
                            vlSelf->__Vfunc_leading_zero32__10649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10649__count)));
                            vlSelf->__Vfunc_leading_zero32__10649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10649__count)));
                            vlSelf->__Vfunc_leading_zero32__10649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10649__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10661__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10661__part 
                            = vlSelf->__Vfunc_leading_zero32__10661__value;
                        vlSelf->__Vfunc_leading_zero32__10661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10661__count)));
                            vlSelf->__Vfunc_leading_zero32__10661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10661__count)));
                            vlSelf->__Vfunc_leading_zero32__10661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10661__count)));
                            vlSelf->__Vfunc_leading_zero32__10661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10661__count)));
                            vlSelf->__Vfunc_leading_zero32__10661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10661__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10673__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10673__part 
                            = vlSelf->__Vfunc_leading_zero32__10673__value;
                        vlSelf->__Vfunc_leading_zero32__10673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10673__count)));
                            vlSelf->__Vfunc_leading_zero32__10673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10673__count)));
                            vlSelf->__Vfunc_leading_zero32__10673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10673__count)));
                            vlSelf->__Vfunc_leading_zero32__10673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10673__count)));
                            vlSelf->__Vfunc_leading_zero32__10673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10685__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10685__part 
                            = vlSelf->__Vfunc_leading_zero32__10685__value;
                        vlSelf->__Vfunc_leading_zero32__10685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10685__count)));
                            vlSelf->__Vfunc_leading_zero32__10685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10685__count)));
                            vlSelf->__Vfunc_leading_zero32__10685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10685__count)));
                            vlSelf->__Vfunc_leading_zero32__10685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10685__count)));
                            vlSelf->__Vfunc_leading_zero32__10685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10685__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10697__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10697__part 
                            = vlSelf->__Vfunc_leading_zero32__10697__value;
                        vlSelf->__Vfunc_leading_zero32__10697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10697__count)));
                            vlSelf->__Vfunc_leading_zero32__10697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10697__count)));
                            vlSelf->__Vfunc_leading_zero32__10697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10697__count)));
                            vlSelf->__Vfunc_leading_zero32__10697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10697__count)));
                            vlSelf->__Vfunc_leading_zero32__10697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10697__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10709__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10709__part 
                            = vlSelf->__Vfunc_leading_zero32__10709__value;
                        vlSelf->__Vfunc_leading_zero32__10709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10709__count)));
                            vlSelf->__Vfunc_leading_zero32__10709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10709__count)));
                            vlSelf->__Vfunc_leading_zero32__10709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10709__count)));
                            vlSelf->__Vfunc_leading_zero32__10709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10709__count)));
                            vlSelf->__Vfunc_leading_zero32__10709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10721__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10721__part 
                            = vlSelf->__Vfunc_leading_zero32__10721__value;
                        vlSelf->__Vfunc_leading_zero32__10721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10721__count)));
                            vlSelf->__Vfunc_leading_zero32__10721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10721__count)));
                            vlSelf->__Vfunc_leading_zero32__10721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10721__count)));
                            vlSelf->__Vfunc_leading_zero32__10721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10721__count)));
                            vlSelf->__Vfunc_leading_zero32__10721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10721__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10733__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10733__part 
                            = vlSelf->__Vfunc_leading_zero32__10733__value;
                        vlSelf->__Vfunc_leading_zero32__10733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10733__count)));
                            vlSelf->__Vfunc_leading_zero32__10733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10733__count)));
                            vlSelf->__Vfunc_leading_zero32__10733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10733__count)));
                            vlSelf->__Vfunc_leading_zero32__10733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10733__count)));
                            vlSelf->__Vfunc_leading_zero32__10733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10733__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10745__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10745__part 
                            = vlSelf->__Vfunc_leading_zero32__10745__value;
                        vlSelf->__Vfunc_leading_zero32__10745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10745__count)));
                            vlSelf->__Vfunc_leading_zero32__10745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10745__count)));
                            vlSelf->__Vfunc_leading_zero32__10745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10745__count)));
                            vlSelf->__Vfunc_leading_zero32__10745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10745__count)));
                            vlSelf->__Vfunc_leading_zero32__10745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10757__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10757__part 
                            = vlSelf->__Vfunc_leading_zero32__10757__value;
                        vlSelf->__Vfunc_leading_zero32__10757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10757__count)));
                            vlSelf->__Vfunc_leading_zero32__10757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10757__count)));
                            vlSelf->__Vfunc_leading_zero32__10757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10757__count)));
                            vlSelf->__Vfunc_leading_zero32__10757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10757__count)));
                            vlSelf->__Vfunc_leading_zero32__10757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10757__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10769__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10769__part 
                            = vlSelf->__Vfunc_leading_zero32__10769__value;
                        vlSelf->__Vfunc_leading_zero32__10769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10769__count)));
                            vlSelf->__Vfunc_leading_zero32__10769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10769__count)));
                            vlSelf->__Vfunc_leading_zero32__10769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10769__count)));
                            vlSelf->__Vfunc_leading_zero32__10769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10769__count)));
                            vlSelf->__Vfunc_leading_zero32__10769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10769__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10781__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10781__part 
                            = vlSelf->__Vfunc_leading_zero32__10781__value;
                        vlSelf->__Vfunc_leading_zero32__10781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10781__count)));
                            vlSelf->__Vfunc_leading_zero32__10781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10781__count)));
                            vlSelf->__Vfunc_leading_zero32__10781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10781__count)));
                            vlSelf->__Vfunc_leading_zero32__10781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10781__count)));
                            vlSelf->__Vfunc_leading_zero32__10781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10793__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10793__part 
                            = vlSelf->__Vfunc_leading_zero32__10793__value;
                        vlSelf->__Vfunc_leading_zero32__10793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10793__count)));
                            vlSelf->__Vfunc_leading_zero32__10793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10793__count)));
                            vlSelf->__Vfunc_leading_zero32__10793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10793__count)));
                            vlSelf->__Vfunc_leading_zero32__10793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10793__count)));
                            vlSelf->__Vfunc_leading_zero32__10793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10793__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10805__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10805__part 
                            = vlSelf->__Vfunc_leading_zero32__10805__value;
                        vlSelf->__Vfunc_leading_zero32__10805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10805__count)));
                            vlSelf->__Vfunc_leading_zero32__10805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10805__count)));
                            vlSelf->__Vfunc_leading_zero32__10805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10805__count)));
                            vlSelf->__Vfunc_leading_zero32__10805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10805__count)));
                            vlSelf->__Vfunc_leading_zero32__10805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10805__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10817__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10817__part 
                            = vlSelf->__Vfunc_leading_zero32__10817__value;
                        vlSelf->__Vfunc_leading_zero32__10817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10817__count)));
                            vlSelf->__Vfunc_leading_zero32__10817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10817__count)));
                            vlSelf->__Vfunc_leading_zero32__10817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10817__count)));
                            vlSelf->__Vfunc_leading_zero32__10817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10817__count)));
                            vlSelf->__Vfunc_leading_zero32__10817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10817__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10829__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10829__part 
                            = vlSelf->__Vfunc_leading_zero32__10829__value;
                        vlSelf->__Vfunc_leading_zero32__10829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10829__count)));
                            vlSelf->__Vfunc_leading_zero32__10829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10829__count)));
                            vlSelf->__Vfunc_leading_zero32__10829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10829__count)));
                            vlSelf->__Vfunc_leading_zero32__10829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10829__count)));
                            vlSelf->__Vfunc_leading_zero32__10829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10829__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10841__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10841__part 
                            = vlSelf->__Vfunc_leading_zero32__10841__value;
                        vlSelf->__Vfunc_leading_zero32__10841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10841__count)));
                            vlSelf->__Vfunc_leading_zero32__10841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10841__count)));
                            vlSelf->__Vfunc_leading_zero32__10841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10841__count)));
                            vlSelf->__Vfunc_leading_zero32__10841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10841__count)));
                            vlSelf->__Vfunc_leading_zero32__10841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10841__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10853__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10853__part 
                            = vlSelf->__Vfunc_leading_zero32__10853__value;
                        vlSelf->__Vfunc_leading_zero32__10853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10853__count)));
                            vlSelf->__Vfunc_leading_zero32__10853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10853__count)));
                            vlSelf->__Vfunc_leading_zero32__10853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10853__count)));
                            vlSelf->__Vfunc_leading_zero32__10853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10853__count)));
                            vlSelf->__Vfunc_leading_zero32__10853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10865__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10865__part 
                            = vlSelf->__Vfunc_leading_zero32__10865__value;
                        vlSelf->__Vfunc_leading_zero32__10865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10865__count)));
                            vlSelf->__Vfunc_leading_zero32__10865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10865__count)));
                            vlSelf->__Vfunc_leading_zero32__10865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10865__count)));
                            vlSelf->__Vfunc_leading_zero32__10865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10865__count)));
                            vlSelf->__Vfunc_leading_zero32__10865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10865__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10877__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10877__part 
                            = vlSelf->__Vfunc_leading_zero32__10877__value;
                        vlSelf->__Vfunc_leading_zero32__10877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10877__count)));
                            vlSelf->__Vfunc_leading_zero32__10877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10877__count)));
                            vlSelf->__Vfunc_leading_zero32__10877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10877__count)));
                            vlSelf->__Vfunc_leading_zero32__10877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10877__count)));
                            vlSelf->__Vfunc_leading_zero32__10877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10877__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10889__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10889__part 
                            = vlSelf->__Vfunc_leading_zero32__10889__value;
                        vlSelf->__Vfunc_leading_zero32__10889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10889__count)));
                            vlSelf->__Vfunc_leading_zero32__10889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10889__count)));
                            vlSelf->__Vfunc_leading_zero32__10889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10889__count)));
                            vlSelf->__Vfunc_leading_zero32__10889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10889__count)));
                            vlSelf->__Vfunc_leading_zero32__10889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10901__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10901__part 
                            = vlSelf->__Vfunc_leading_zero32__10901__value;
                        vlSelf->__Vfunc_leading_zero32__10901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10901__count)));
                            vlSelf->__Vfunc_leading_zero32__10901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10901__count)));
                            vlSelf->__Vfunc_leading_zero32__10901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10901__count)));
                            vlSelf->__Vfunc_leading_zero32__10901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10901__count)));
                            vlSelf->__Vfunc_leading_zero32__10901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10901__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10913__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10913__part 
                            = vlSelf->__Vfunc_leading_zero32__10913__value;
                        vlSelf->__Vfunc_leading_zero32__10913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10913__count)));
                            vlSelf->__Vfunc_leading_zero32__10913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10913__count)));
                            vlSelf->__Vfunc_leading_zero32__10913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10913__count)));
                            vlSelf->__Vfunc_leading_zero32__10913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10913__count)));
                            vlSelf->__Vfunc_leading_zero32__10913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10913__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10925__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10925__part 
                            = vlSelf->__Vfunc_leading_zero32__10925__value;
                        vlSelf->__Vfunc_leading_zero32__10925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10925__count)));
                            vlSelf->__Vfunc_leading_zero32__10925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10925__count)));
                            vlSelf->__Vfunc_leading_zero32__10925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10925__count)));
                            vlSelf->__Vfunc_leading_zero32__10925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10925__count)));
                            vlSelf->__Vfunc_leading_zero32__10925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10937__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10937__part 
                            = vlSelf->__Vfunc_leading_zero32__10937__value;
                        vlSelf->__Vfunc_leading_zero32__10937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10937__count)));
                            vlSelf->__Vfunc_leading_zero32__10937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10937__count)));
                            vlSelf->__Vfunc_leading_zero32__10937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10937__count)));
                            vlSelf->__Vfunc_leading_zero32__10937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10937__count)));
                            vlSelf->__Vfunc_leading_zero32__10937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10937__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10949__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10949__part 
                            = vlSelf->__Vfunc_leading_zero32__10949__value;
                        vlSelf->__Vfunc_leading_zero32__10949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10949__count)));
                            vlSelf->__Vfunc_leading_zero32__10949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10949__count)));
                            vlSelf->__Vfunc_leading_zero32__10949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10949__count)));
                            vlSelf->__Vfunc_leading_zero32__10949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10949__count)));
                            vlSelf->__Vfunc_leading_zero32__10949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10949__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10961__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10961__part 
                            = vlSelf->__Vfunc_leading_zero32__10961__value;
                        vlSelf->__Vfunc_leading_zero32__10961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10961__count)));
                            vlSelf->__Vfunc_leading_zero32__10961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10961__count)));
                            vlSelf->__Vfunc_leading_zero32__10961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10961__count)));
                            vlSelf->__Vfunc_leading_zero32__10961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10961__count)));
                            vlSelf->__Vfunc_leading_zero32__10961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10973__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10973__part 
                            = vlSelf->__Vfunc_leading_zero32__10973__value;
                        vlSelf->__Vfunc_leading_zero32__10973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10973__count)));
                            vlSelf->__Vfunc_leading_zero32__10973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10973__count)));
                            vlSelf->__Vfunc_leading_zero32__10973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10973__count)));
                            vlSelf->__Vfunc_leading_zero32__10973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10973__count)));
                            vlSelf->__Vfunc_leading_zero32__10973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10973__Vfuncout)) 
                             - (IData)(8U))));
}
