// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___ico_sequent__TOP__4(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___ico_sequent__TOP__4\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3298__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3298__part 
                            = vlSelf->__Vfunc_leading_zero32__3298__value;
                        vlSelf->__Vfunc_leading_zero32__3298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                            vlSelf->__Vfunc_leading_zero32__3298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3310__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3310__part 
                            = vlSelf->__Vfunc_leading_zero32__3310__value;
                        vlSelf->__Vfunc_leading_zero32__3310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                            vlSelf->__Vfunc_leading_zero32__3310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3322__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3322__part 
                            = vlSelf->__Vfunc_leading_zero32__3322__value;
                        vlSelf->__Vfunc_leading_zero32__3322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                            vlSelf->__Vfunc_leading_zero32__3322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3334__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3334__part 
                            = vlSelf->__Vfunc_leading_zero32__3334__value;
                        vlSelf->__Vfunc_leading_zero32__3334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                            vlSelf->__Vfunc_leading_zero32__3334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3346__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3346__part 
                            = vlSelf->__Vfunc_leading_zero32__3346__value;
                        vlSelf->__Vfunc_leading_zero32__3346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                            vlSelf->__Vfunc_leading_zero32__3346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3346__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3358__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3358__part 
                            = vlSelf->__Vfunc_leading_zero32__3358__value;
                        vlSelf->__Vfunc_leading_zero32__3358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                            vlSelf->__Vfunc_leading_zero32__3358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3358__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3370__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3370__part 
                            = vlSelf->__Vfunc_leading_zero32__3370__value;
                        vlSelf->__Vfunc_leading_zero32__3370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                            vlSelf->__Vfunc_leading_zero32__3370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3370__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3382__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3382__part 
                            = vlSelf->__Vfunc_leading_zero32__3382__value;
                        vlSelf->__Vfunc_leading_zero32__3382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                            vlSelf->__Vfunc_leading_zero32__3382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3382__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3394__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3394__part 
                            = vlSelf->__Vfunc_leading_zero32__3394__value;
                        vlSelf->__Vfunc_leading_zero32__3394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                            vlSelf->__Vfunc_leading_zero32__3394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3394__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3406__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3406__part 
                            = vlSelf->__Vfunc_leading_zero32__3406__value;
                        vlSelf->__Vfunc_leading_zero32__3406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                            vlSelf->__Vfunc_leading_zero32__3406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3406__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3418__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3418__part 
                            = vlSelf->__Vfunc_leading_zero32__3418__value;
                        vlSelf->__Vfunc_leading_zero32__3418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                            vlSelf->__Vfunc_leading_zero32__3418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3418__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3430__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3430__part 
                            = vlSelf->__Vfunc_leading_zero32__3430__value;
                        vlSelf->__Vfunc_leading_zero32__3430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                            vlSelf->__Vfunc_leading_zero32__3430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3430__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3442__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3442__part 
                            = vlSelf->__Vfunc_leading_zero32__3442__value;
                        vlSelf->__Vfunc_leading_zero32__3442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                            vlSelf->__Vfunc_leading_zero32__3442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3442__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3454__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3454__part 
                            = vlSelf->__Vfunc_leading_zero32__3454__value;
                        vlSelf->__Vfunc_leading_zero32__3454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                            vlSelf->__Vfunc_leading_zero32__3454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3454__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3466__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3466__part 
                            = vlSelf->__Vfunc_leading_zero32__3466__value;
                        vlSelf->__Vfunc_leading_zero32__3466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                            vlSelf->__Vfunc_leading_zero32__3466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3466__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3478__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3478__part 
                            = vlSelf->__Vfunc_leading_zero32__3478__value;
                        vlSelf->__Vfunc_leading_zero32__3478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                            vlSelf->__Vfunc_leading_zero32__3478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3478__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3490__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3490__part 
                            = vlSelf->__Vfunc_leading_zero32__3490__value;
                        vlSelf->__Vfunc_leading_zero32__3490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                            vlSelf->__Vfunc_leading_zero32__3490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3490__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3502__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3502__part 
                            = vlSelf->__Vfunc_leading_zero32__3502__value;
                        vlSelf->__Vfunc_leading_zero32__3502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                            vlSelf->__Vfunc_leading_zero32__3502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3502__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3514__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3514__part 
                            = vlSelf->__Vfunc_leading_zero32__3514__value;
                        vlSelf->__Vfunc_leading_zero32__3514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                            vlSelf->__Vfunc_leading_zero32__3514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3514__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3526__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3526__part 
                            = vlSelf->__Vfunc_leading_zero32__3526__value;
                        vlSelf->__Vfunc_leading_zero32__3526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                            vlSelf->__Vfunc_leading_zero32__3526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3526__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3538__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3538__part 
                            = vlSelf->__Vfunc_leading_zero32__3538__value;
                        vlSelf->__Vfunc_leading_zero32__3538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                            vlSelf->__Vfunc_leading_zero32__3538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3538__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3550__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3550__part 
                            = vlSelf->__Vfunc_leading_zero32__3550__value;
                        vlSelf->__Vfunc_leading_zero32__3550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                            vlSelf->__Vfunc_leading_zero32__3550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3550__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3562__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3562__part 
                            = vlSelf->__Vfunc_leading_zero32__3562__value;
                        vlSelf->__Vfunc_leading_zero32__3562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                            vlSelf->__Vfunc_leading_zero32__3562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3562__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3574__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3574__part 
                            = vlSelf->__Vfunc_leading_zero32__3574__value;
                        vlSelf->__Vfunc_leading_zero32__3574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                            vlSelf->__Vfunc_leading_zero32__3574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3574__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3586__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3586__part 
                            = vlSelf->__Vfunc_leading_zero32__3586__value;
                        vlSelf->__Vfunc_leading_zero32__3586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                            vlSelf->__Vfunc_leading_zero32__3586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3586__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3598__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3598__part 
                            = vlSelf->__Vfunc_leading_zero32__3598__value;
                        vlSelf->__Vfunc_leading_zero32__3598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                            vlSelf->__Vfunc_leading_zero32__3598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3598__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3610__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3610__part 
                            = vlSelf->__Vfunc_leading_zero32__3610__value;
                        vlSelf->__Vfunc_leading_zero32__3610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                            vlSelf->__Vfunc_leading_zero32__3610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3610__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3622__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3622__part 
                            = vlSelf->__Vfunc_leading_zero32__3622__value;
                        vlSelf->__Vfunc_leading_zero32__3622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                            vlSelf->__Vfunc_leading_zero32__3622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3622__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3634__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3634__part 
                            = vlSelf->__Vfunc_leading_zero32__3634__value;
                        vlSelf->__Vfunc_leading_zero32__3634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                            vlSelf->__Vfunc_leading_zero32__3634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3634__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3646__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3646__part 
                            = vlSelf->__Vfunc_leading_zero32__3646__value;
                        vlSelf->__Vfunc_leading_zero32__3646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                            vlSelf->__Vfunc_leading_zero32__3646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3646__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3658__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3658__part 
                            = vlSelf->__Vfunc_leading_zero32__3658__value;
                        vlSelf->__Vfunc_leading_zero32__3658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                            vlSelf->__Vfunc_leading_zero32__3658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3658__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3670__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3670__part 
                            = vlSelf->__Vfunc_leading_zero32__3670__value;
                        vlSelf->__Vfunc_leading_zero32__3670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                            vlSelf->__Vfunc_leading_zero32__3670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3670__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3682__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3682__part 
                            = vlSelf->__Vfunc_leading_zero32__3682__value;
                        vlSelf->__Vfunc_leading_zero32__3682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                            vlSelf->__Vfunc_leading_zero32__3682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3682__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3694__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3694__part 
                            = vlSelf->__Vfunc_leading_zero32__3694__value;
                        vlSelf->__Vfunc_leading_zero32__3694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                            vlSelf->__Vfunc_leading_zero32__3694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3694__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3706__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3706__part 
                            = vlSelf->__Vfunc_leading_zero32__3706__value;
                        vlSelf->__Vfunc_leading_zero32__3706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                            vlSelf->__Vfunc_leading_zero32__3706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3706__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3718__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3718__part 
                            = vlSelf->__Vfunc_leading_zero32__3718__value;
                        vlSelf->__Vfunc_leading_zero32__3718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                            vlSelf->__Vfunc_leading_zero32__3718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3718__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3730__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3730__part 
                            = vlSelf->__Vfunc_leading_zero32__3730__value;
                        vlSelf->__Vfunc_leading_zero32__3730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                            vlSelf->__Vfunc_leading_zero32__3730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3730__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3742__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3742__part 
                            = vlSelf->__Vfunc_leading_zero32__3742__value;
                        vlSelf->__Vfunc_leading_zero32__3742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                            vlSelf->__Vfunc_leading_zero32__3742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3742__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3754__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3754__part 
                            = vlSelf->__Vfunc_leading_zero32__3754__value;
                        vlSelf->__Vfunc_leading_zero32__3754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                            vlSelf->__Vfunc_leading_zero32__3754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3754__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3766__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3766__part 
                            = vlSelf->__Vfunc_leading_zero32__3766__value;
                        vlSelf->__Vfunc_leading_zero32__3766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                            vlSelf->__Vfunc_leading_zero32__3766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3766__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3778__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3778__part 
                            = vlSelf->__Vfunc_leading_zero32__3778__value;
                        vlSelf->__Vfunc_leading_zero32__3778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                            vlSelf->__Vfunc_leading_zero32__3778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3778__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3790__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3790__part 
                            = vlSelf->__Vfunc_leading_zero32__3790__value;
                        vlSelf->__Vfunc_leading_zero32__3790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                            vlSelf->__Vfunc_leading_zero32__3790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3790__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3802__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3802__part 
                            = vlSelf->__Vfunc_leading_zero32__3802__value;
                        vlSelf->__Vfunc_leading_zero32__3802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                            vlSelf->__Vfunc_leading_zero32__3802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3802__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3814__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3814__part 
                            = vlSelf->__Vfunc_leading_zero32__3814__value;
                        vlSelf->__Vfunc_leading_zero32__3814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                            vlSelf->__Vfunc_leading_zero32__3814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3814__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3826__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3826__part 
                            = vlSelf->__Vfunc_leading_zero32__3826__value;
                        vlSelf->__Vfunc_leading_zero32__3826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                            vlSelf->__Vfunc_leading_zero32__3826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3826__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3838__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3838__part 
                            = vlSelf->__Vfunc_leading_zero32__3838__value;
                        vlSelf->__Vfunc_leading_zero32__3838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                            vlSelf->__Vfunc_leading_zero32__3838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3838__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3850__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3850__part 
                            = vlSelf->__Vfunc_leading_zero32__3850__value;
                        vlSelf->__Vfunc_leading_zero32__3850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                            vlSelf->__Vfunc_leading_zero32__3850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3850__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3862__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3862__part 
                            = vlSelf->__Vfunc_leading_zero32__3862__value;
                        vlSelf->__Vfunc_leading_zero32__3862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                            vlSelf->__Vfunc_leading_zero32__3862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3862__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3874__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3874__part 
                            = vlSelf->__Vfunc_leading_zero32__3874__value;
                        vlSelf->__Vfunc_leading_zero32__3874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                            vlSelf->__Vfunc_leading_zero32__3874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3874__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3886__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3886__part 
                            = vlSelf->__Vfunc_leading_zero32__3886__value;
                        vlSelf->__Vfunc_leading_zero32__3886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                            vlSelf->__Vfunc_leading_zero32__3886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3886__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3898__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3898__part 
                            = vlSelf->__Vfunc_leading_zero32__3898__value;
                        vlSelf->__Vfunc_leading_zero32__3898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                            vlSelf->__Vfunc_leading_zero32__3898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3898__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3910__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3910__part 
                            = vlSelf->__Vfunc_leading_zero32__3910__value;
                        vlSelf->__Vfunc_leading_zero32__3910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                            vlSelf->__Vfunc_leading_zero32__3910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3910__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3922__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3922__part 
                            = vlSelf->__Vfunc_leading_zero32__3922__value;
                        vlSelf->__Vfunc_leading_zero32__3922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                            vlSelf->__Vfunc_leading_zero32__3922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3922__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3934__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3934__part 
                            = vlSelf->__Vfunc_leading_zero32__3934__value;
                        vlSelf->__Vfunc_leading_zero32__3934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                            vlSelf->__Vfunc_leading_zero32__3934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3934__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3946__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3946__part 
                            = vlSelf->__Vfunc_leading_zero32__3946__value;
                        vlSelf->__Vfunc_leading_zero32__3946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                            vlSelf->__Vfunc_leading_zero32__3946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3946__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3958__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3958__part 
                            = vlSelf->__Vfunc_leading_zero32__3958__value;
                        vlSelf->__Vfunc_leading_zero32__3958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                            vlSelf->__Vfunc_leading_zero32__3958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3958__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3970__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3970__part 
                            = vlSelf->__Vfunc_leading_zero32__3970__value;
                        vlSelf->__Vfunc_leading_zero32__3970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                            vlSelf->__Vfunc_leading_zero32__3970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3970__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3982__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3982__part 
                            = vlSelf->__Vfunc_leading_zero32__3982__value;
                        vlSelf->__Vfunc_leading_zero32__3982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                            vlSelf->__Vfunc_leading_zero32__3982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3982__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3994__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3994__part 
                            = vlSelf->__Vfunc_leading_zero32__3994__value;
                        vlSelf->__Vfunc_leading_zero32__3994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                            vlSelf->__Vfunc_leading_zero32__3994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3994__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4006__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4006__part 
                            = vlSelf->__Vfunc_leading_zero32__4006__value;
                        vlSelf->__Vfunc_leading_zero32__4006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                            vlSelf->__Vfunc_leading_zero32__4006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4006__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4018__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4018__part 
                            = vlSelf->__Vfunc_leading_zero32__4018__value;
                        vlSelf->__Vfunc_leading_zero32__4018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                            vlSelf->__Vfunc_leading_zero32__4018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4018__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4030__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4030__part 
                            = vlSelf->__Vfunc_leading_zero32__4030__value;
                        vlSelf->__Vfunc_leading_zero32__4030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                            vlSelf->__Vfunc_leading_zero32__4030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4030__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4042__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4042__part 
                            = vlSelf->__Vfunc_leading_zero32__4042__value;
                        vlSelf->__Vfunc_leading_zero32__4042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                            vlSelf->__Vfunc_leading_zero32__4042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4042__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4054__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4054__part 
                            = vlSelf->__Vfunc_leading_zero32__4054__value;
                        vlSelf->__Vfunc_leading_zero32__4054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                            vlSelf->__Vfunc_leading_zero32__4054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4054__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4066__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4066__part 
                            = vlSelf->__Vfunc_leading_zero32__4066__value;
                        vlSelf->__Vfunc_leading_zero32__4066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                            vlSelf->__Vfunc_leading_zero32__4066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4066__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4078__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4078__part 
                            = vlSelf->__Vfunc_leading_zero32__4078__value;
                        vlSelf->__Vfunc_leading_zero32__4078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                            vlSelf->__Vfunc_leading_zero32__4078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4078__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4090__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4090__part 
                            = vlSelf->__Vfunc_leading_zero32__4090__value;
                        vlSelf->__Vfunc_leading_zero32__4090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                            vlSelf->__Vfunc_leading_zero32__4090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4090__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4102__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4102__part 
                            = vlSelf->__Vfunc_leading_zero32__4102__value;
                        vlSelf->__Vfunc_leading_zero32__4102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                            vlSelf->__Vfunc_leading_zero32__4102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4114__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4114__part 
                            = vlSelf->__Vfunc_leading_zero32__4114__value;
                        vlSelf->__Vfunc_leading_zero32__4114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                            vlSelf->__Vfunc_leading_zero32__4114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4126__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4126__part 
                            = vlSelf->__Vfunc_leading_zero32__4126__value;
                        vlSelf->__Vfunc_leading_zero32__4126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                            vlSelf->__Vfunc_leading_zero32__4126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4138__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4138__part 
                            = vlSelf->__Vfunc_leading_zero32__4138__value;
                        vlSelf->__Vfunc_leading_zero32__4138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                            vlSelf->__Vfunc_leading_zero32__4138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4150__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4150__part 
                            = vlSelf->__Vfunc_leading_zero32__4150__value;
                        vlSelf->__Vfunc_leading_zero32__4150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                            vlSelf->__Vfunc_leading_zero32__4150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4162__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4162__part 
                            = vlSelf->__Vfunc_leading_zero32__4162__value;
                        vlSelf->__Vfunc_leading_zero32__4162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                            vlSelf->__Vfunc_leading_zero32__4162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4174__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4174__part 
                            = vlSelf->__Vfunc_leading_zero32__4174__value;
                        vlSelf->__Vfunc_leading_zero32__4174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                            vlSelf->__Vfunc_leading_zero32__4174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4174__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4186__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4186__part 
                            = vlSelf->__Vfunc_leading_zero32__4186__value;
                        vlSelf->__Vfunc_leading_zero32__4186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                            vlSelf->__Vfunc_leading_zero32__4186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4198__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4198__part 
                            = vlSelf->__Vfunc_leading_zero32__4198__value;
                        vlSelf->__Vfunc_leading_zero32__4198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                            vlSelf->__Vfunc_leading_zero32__4198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4210__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4210__part 
                            = vlSelf->__Vfunc_leading_zero32__4210__value;
                        vlSelf->__Vfunc_leading_zero32__4210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                            vlSelf->__Vfunc_leading_zero32__4210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4222__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4222__part 
                            = vlSelf->__Vfunc_leading_zero32__4222__value;
                        vlSelf->__Vfunc_leading_zero32__4222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                            vlSelf->__Vfunc_leading_zero32__4222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4234__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4234__part 
                            = vlSelf->__Vfunc_leading_zero32__4234__value;
                        vlSelf->__Vfunc_leading_zero32__4234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                            vlSelf->__Vfunc_leading_zero32__4234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4246__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4246__part 
                            = vlSelf->__Vfunc_leading_zero32__4246__value;
                        vlSelf->__Vfunc_leading_zero32__4246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                            vlSelf->__Vfunc_leading_zero32__4246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4258__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4258__part 
                            = vlSelf->__Vfunc_leading_zero32__4258__value;
                        vlSelf->__Vfunc_leading_zero32__4258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                            vlSelf->__Vfunc_leading_zero32__4258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4270__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4270__part 
                            = vlSelf->__Vfunc_leading_zero32__4270__value;
                        vlSelf->__Vfunc_leading_zero32__4270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                            vlSelf->__Vfunc_leading_zero32__4270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4282__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4282__part 
                            = vlSelf->__Vfunc_leading_zero32__4282__value;
                        vlSelf->__Vfunc_leading_zero32__4282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                            vlSelf->__Vfunc_leading_zero32__4282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4294__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4294__part 
                            = vlSelf->__Vfunc_leading_zero32__4294__value;
                        vlSelf->__Vfunc_leading_zero32__4294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                            vlSelf->__Vfunc_leading_zero32__4294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4306__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4306__part 
                            = vlSelf->__Vfunc_leading_zero32__4306__value;
                        vlSelf->__Vfunc_leading_zero32__4306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                            vlSelf->__Vfunc_leading_zero32__4306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4318__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4318__part 
                            = vlSelf->__Vfunc_leading_zero32__4318__value;
                        vlSelf->__Vfunc_leading_zero32__4318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                            vlSelf->__Vfunc_leading_zero32__4318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4330__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4330__part 
                            = vlSelf->__Vfunc_leading_zero32__4330__value;
                        vlSelf->__Vfunc_leading_zero32__4330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                            vlSelf->__Vfunc_leading_zero32__4330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4342__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4342__part 
                            = vlSelf->__Vfunc_leading_zero32__4342__value;
                        vlSelf->__Vfunc_leading_zero32__4342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                            vlSelf->__Vfunc_leading_zero32__4342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4354__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4354__part 
                            = vlSelf->__Vfunc_leading_zero32__4354__value;
                        vlSelf->__Vfunc_leading_zero32__4354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                            vlSelf->__Vfunc_leading_zero32__4354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4366__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4366__part 
                            = vlSelf->__Vfunc_leading_zero32__4366__value;
                        vlSelf->__Vfunc_leading_zero32__4366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                            vlSelf->__Vfunc_leading_zero32__4366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4378__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4378__part 
                            = vlSelf->__Vfunc_leading_zero32__4378__value;
                        vlSelf->__Vfunc_leading_zero32__4378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                            vlSelf->__Vfunc_leading_zero32__4378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4390__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4390__part 
                            = vlSelf->__Vfunc_leading_zero32__4390__value;
                        vlSelf->__Vfunc_leading_zero32__4390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                            vlSelf->__Vfunc_leading_zero32__4390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4402__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4402__part 
                            = vlSelf->__Vfunc_leading_zero32__4402__value;
                        vlSelf->__Vfunc_leading_zero32__4402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                            vlSelf->__Vfunc_leading_zero32__4402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4414__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4414__part 
                            = vlSelf->__Vfunc_leading_zero32__4414__value;
                        vlSelf->__Vfunc_leading_zero32__4414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                            vlSelf->__Vfunc_leading_zero32__4414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4426__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4426__part 
                            = vlSelf->__Vfunc_leading_zero32__4426__value;
                        vlSelf->__Vfunc_leading_zero32__4426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                            vlSelf->__Vfunc_leading_zero32__4426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4438__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4438__part 
                            = vlSelf->__Vfunc_leading_zero32__4438__value;
                        vlSelf->__Vfunc_leading_zero32__4438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                            vlSelf->__Vfunc_leading_zero32__4438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4450__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4450__part 
                            = vlSelf->__Vfunc_leading_zero32__4450__value;
                        vlSelf->__Vfunc_leading_zero32__4450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                            vlSelf->__Vfunc_leading_zero32__4450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4462__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4462__part 
                            = vlSelf->__Vfunc_leading_zero32__4462__value;
                        vlSelf->__Vfunc_leading_zero32__4462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                            vlSelf->__Vfunc_leading_zero32__4462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4474__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4474__part 
                            = vlSelf->__Vfunc_leading_zero32__4474__value;
                        vlSelf->__Vfunc_leading_zero32__4474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                            vlSelf->__Vfunc_leading_zero32__4474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4486__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4486__part 
                            = vlSelf->__Vfunc_leading_zero32__4486__value;
                        vlSelf->__Vfunc_leading_zero32__4486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                            vlSelf->__Vfunc_leading_zero32__4486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4498__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4498__part 
                            = vlSelf->__Vfunc_leading_zero32__4498__value;
                        vlSelf->__Vfunc_leading_zero32__4498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                            vlSelf->__Vfunc_leading_zero32__4498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4510__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4510__part 
                            = vlSelf->__Vfunc_leading_zero32__4510__value;
                        vlSelf->__Vfunc_leading_zero32__4510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                            vlSelf->__Vfunc_leading_zero32__4510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4522__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4522__part 
                            = vlSelf->__Vfunc_leading_zero32__4522__value;
                        vlSelf->__Vfunc_leading_zero32__4522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                            vlSelf->__Vfunc_leading_zero32__4522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4534__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4534__part 
                            = vlSelf->__Vfunc_leading_zero32__4534__value;
                        vlSelf->__Vfunc_leading_zero32__4534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                            vlSelf->__Vfunc_leading_zero32__4534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4546__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4546__part 
                            = vlSelf->__Vfunc_leading_zero32__4546__value;
                        vlSelf->__Vfunc_leading_zero32__4546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                            vlSelf->__Vfunc_leading_zero32__4546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4558__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4558__part 
                            = vlSelf->__Vfunc_leading_zero32__4558__value;
                        vlSelf->__Vfunc_leading_zero32__4558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                            vlSelf->__Vfunc_leading_zero32__4558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4570__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4570__part 
                            = vlSelf->__Vfunc_leading_zero32__4570__value;
                        vlSelf->__Vfunc_leading_zero32__4570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                            vlSelf->__Vfunc_leading_zero32__4570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4582__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4582__part 
                            = vlSelf->__Vfunc_leading_zero32__4582__value;
                        vlSelf->__Vfunc_leading_zero32__4582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                            vlSelf->__Vfunc_leading_zero32__4582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4594__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4594__part 
                            = vlSelf->__Vfunc_leading_zero32__4594__value;
                        vlSelf->__Vfunc_leading_zero32__4594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                            vlSelf->__Vfunc_leading_zero32__4594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4606__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4606__part 
                            = vlSelf->__Vfunc_leading_zero32__4606__value;
                        vlSelf->__Vfunc_leading_zero32__4606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                            vlSelf->__Vfunc_leading_zero32__4606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4618__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4618__part 
                            = vlSelf->__Vfunc_leading_zero32__4618__value;
                        vlSelf->__Vfunc_leading_zero32__4618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                            vlSelf->__Vfunc_leading_zero32__4618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4630__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4630__part 
                            = vlSelf->__Vfunc_leading_zero32__4630__value;
                        vlSelf->__Vfunc_leading_zero32__4630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                            vlSelf->__Vfunc_leading_zero32__4630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4642__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4642__part 
                            = vlSelf->__Vfunc_leading_zero32__4642__value;
                        vlSelf->__Vfunc_leading_zero32__4642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                            vlSelf->__Vfunc_leading_zero32__4642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4654__part 
                            = vlSelf->__Vfunc_leading_zero32__4654__value;
                        vlSelf->__Vfunc_leading_zero32__4654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                            vlSelf->__Vfunc_leading_zero32__4654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4666__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4666__part 
                            = vlSelf->__Vfunc_leading_zero32__4666__value;
                        vlSelf->__Vfunc_leading_zero32__4666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                            vlSelf->__Vfunc_leading_zero32__4666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4678__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4678__part 
                            = vlSelf->__Vfunc_leading_zero32__4678__value;
                        vlSelf->__Vfunc_leading_zero32__4678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                            vlSelf->__Vfunc_leading_zero32__4678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4690__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4690__part 
                            = vlSelf->__Vfunc_leading_zero32__4690__value;
                        vlSelf->__Vfunc_leading_zero32__4690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                            vlSelf->__Vfunc_leading_zero32__4690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4702__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4702__part 
                            = vlSelf->__Vfunc_leading_zero32__4702__value;
                        vlSelf->__Vfunc_leading_zero32__4702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                            vlSelf->__Vfunc_leading_zero32__4702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4714__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4714__part 
                            = vlSelf->__Vfunc_leading_zero32__4714__value;
                        vlSelf->__Vfunc_leading_zero32__4714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                            vlSelf->__Vfunc_leading_zero32__4714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4726__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4726__part 
                            = vlSelf->__Vfunc_leading_zero32__4726__value;
                        vlSelf->__Vfunc_leading_zero32__4726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                            vlSelf->__Vfunc_leading_zero32__4726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4738__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4738__part 
                            = vlSelf->__Vfunc_leading_zero32__4738__value;
                        vlSelf->__Vfunc_leading_zero32__4738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                            vlSelf->__Vfunc_leading_zero32__4738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4750__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4750__part 
                            = vlSelf->__Vfunc_leading_zero32__4750__value;
                        vlSelf->__Vfunc_leading_zero32__4750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                            vlSelf->__Vfunc_leading_zero32__4750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4762__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4762__part 
                            = vlSelf->__Vfunc_leading_zero32__4762__value;
                        vlSelf->__Vfunc_leading_zero32__4762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                            vlSelf->__Vfunc_leading_zero32__4762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4774__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4774__part 
                            = vlSelf->__Vfunc_leading_zero32__4774__value;
                        vlSelf->__Vfunc_leading_zero32__4774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                            vlSelf->__Vfunc_leading_zero32__4774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4786__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4786__part 
                            = vlSelf->__Vfunc_leading_zero32__4786__value;
                        vlSelf->__Vfunc_leading_zero32__4786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                            vlSelf->__Vfunc_leading_zero32__4786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4798__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4798__part 
                            = vlSelf->__Vfunc_leading_zero32__4798__value;
                        vlSelf->__Vfunc_leading_zero32__4798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                            vlSelf->__Vfunc_leading_zero32__4798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4810__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4810__part 
                            = vlSelf->__Vfunc_leading_zero32__4810__value;
                        vlSelf->__Vfunc_leading_zero32__4810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4810__count)));
                            vlSelf->__Vfunc_leading_zero32__4810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4810__count)));
                            vlSelf->__Vfunc_leading_zero32__4810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4810__count)));
                            vlSelf->__Vfunc_leading_zero32__4810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4810__count)));
                            vlSelf->__Vfunc_leading_zero32__4810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4810__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4822__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4822__part 
                            = vlSelf->__Vfunc_leading_zero32__4822__value;
                        vlSelf->__Vfunc_leading_zero32__4822__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4822__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4822__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4822__count)));
                            vlSelf->__Vfunc_leading_zero32__4822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4822__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4822__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4822__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4822__count)));
                            vlSelf->__Vfunc_leading_zero32__4822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4822__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4822__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4822__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4822__count)));
                            vlSelf->__Vfunc_leading_zero32__4822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4822__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4822__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4822__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4822__count)));
                            vlSelf->__Vfunc_leading_zero32__4822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4822__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4822__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4822__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4822__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4822__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4822__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4822__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4822__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4834__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4834__part 
                            = vlSelf->__Vfunc_leading_zero32__4834__value;
                        vlSelf->__Vfunc_leading_zero32__4834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4834__count)));
                            vlSelf->__Vfunc_leading_zero32__4834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4834__count)));
                            vlSelf->__Vfunc_leading_zero32__4834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4834__count)));
                            vlSelf->__Vfunc_leading_zero32__4834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4834__count)));
                            vlSelf->__Vfunc_leading_zero32__4834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4834__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4846__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4846__part 
                            = vlSelf->__Vfunc_leading_zero32__4846__value;
                        vlSelf->__Vfunc_leading_zero32__4846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4846__count)));
                            vlSelf->__Vfunc_leading_zero32__4846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4846__count)));
                            vlSelf->__Vfunc_leading_zero32__4846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4846__count)));
                            vlSelf->__Vfunc_leading_zero32__4846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4846__count)));
                            vlSelf->__Vfunc_leading_zero32__4846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4846__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4858__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4858__part 
                            = vlSelf->__Vfunc_leading_zero32__4858__value;
                        vlSelf->__Vfunc_leading_zero32__4858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4858__count)));
                            vlSelf->__Vfunc_leading_zero32__4858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4858__count)));
                            vlSelf->__Vfunc_leading_zero32__4858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4858__count)));
                            vlSelf->__Vfunc_leading_zero32__4858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4858__count)));
                            vlSelf->__Vfunc_leading_zero32__4858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4858__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4870__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4870__part 
                            = vlSelf->__Vfunc_leading_zero32__4870__value;
                        vlSelf->__Vfunc_leading_zero32__4870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4870__count)));
                            vlSelf->__Vfunc_leading_zero32__4870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4870__count)));
                            vlSelf->__Vfunc_leading_zero32__4870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4870__count)));
                            vlSelf->__Vfunc_leading_zero32__4870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4870__count)));
                            vlSelf->__Vfunc_leading_zero32__4870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4870__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4882__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4882__part 
                            = vlSelf->__Vfunc_leading_zero32__4882__value;
                        vlSelf->__Vfunc_leading_zero32__4882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4882__count)));
                            vlSelf->__Vfunc_leading_zero32__4882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4882__count)));
                            vlSelf->__Vfunc_leading_zero32__4882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4882__count)));
                            vlSelf->__Vfunc_leading_zero32__4882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4882__count)));
                            vlSelf->__Vfunc_leading_zero32__4882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4882__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4894__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4894__part 
                            = vlSelf->__Vfunc_leading_zero32__4894__value;
                        vlSelf->__Vfunc_leading_zero32__4894__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4894__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4894__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4894__count)));
                            vlSelf->__Vfunc_leading_zero32__4894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4894__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4894__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4894__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4894__count)));
                            vlSelf->__Vfunc_leading_zero32__4894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4894__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4894__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4894__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4894__count)));
                            vlSelf->__Vfunc_leading_zero32__4894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4894__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4894__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4894__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4894__count)));
                            vlSelf->__Vfunc_leading_zero32__4894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4894__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4894__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4894__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4894__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4894__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4894__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4894__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4894__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4906__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4906__part 
                            = vlSelf->__Vfunc_leading_zero32__4906__value;
                        vlSelf->__Vfunc_leading_zero32__4906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4906__count)));
                            vlSelf->__Vfunc_leading_zero32__4906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4906__count)));
                            vlSelf->__Vfunc_leading_zero32__4906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4906__count)));
                            vlSelf->__Vfunc_leading_zero32__4906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4906__count)));
                            vlSelf->__Vfunc_leading_zero32__4906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4918__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4918__part 
                            = vlSelf->__Vfunc_leading_zero32__4918__value;
                        vlSelf->__Vfunc_leading_zero32__4918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4918__count)));
                            vlSelf->__Vfunc_leading_zero32__4918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4918__count)));
                            vlSelf->__Vfunc_leading_zero32__4918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4918__count)));
                            vlSelf->__Vfunc_leading_zero32__4918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4918__count)));
                            vlSelf->__Vfunc_leading_zero32__4918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4930__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4930__part 
                            = vlSelf->__Vfunc_leading_zero32__4930__value;
                        vlSelf->__Vfunc_leading_zero32__4930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4930__count)));
                            vlSelf->__Vfunc_leading_zero32__4930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4930__count)));
                            vlSelf->__Vfunc_leading_zero32__4930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4930__count)));
                            vlSelf->__Vfunc_leading_zero32__4930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4930__count)));
                            vlSelf->__Vfunc_leading_zero32__4930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4930__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4942__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4942__part 
                            = vlSelf->__Vfunc_leading_zero32__4942__value;
                        vlSelf->__Vfunc_leading_zero32__4942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4942__count)));
                            vlSelf->__Vfunc_leading_zero32__4942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4942__count)));
                            vlSelf->__Vfunc_leading_zero32__4942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4942__count)));
                            vlSelf->__Vfunc_leading_zero32__4942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4942__count)));
                            vlSelf->__Vfunc_leading_zero32__4942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4954__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4954__part 
                            = vlSelf->__Vfunc_leading_zero32__4954__value;
                        vlSelf->__Vfunc_leading_zero32__4954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4954__count)));
                            vlSelf->__Vfunc_leading_zero32__4954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4954__count)));
                            vlSelf->__Vfunc_leading_zero32__4954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4954__count)));
                            vlSelf->__Vfunc_leading_zero32__4954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4954__count)));
                            vlSelf->__Vfunc_leading_zero32__4954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4966__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4966__part 
                            = vlSelf->__Vfunc_leading_zero32__4966__value;
                        vlSelf->__Vfunc_leading_zero32__4966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4966__count)));
                            vlSelf->__Vfunc_leading_zero32__4966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4966__count)));
                            vlSelf->__Vfunc_leading_zero32__4966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4966__count)));
                            vlSelf->__Vfunc_leading_zero32__4966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4966__count)));
                            vlSelf->__Vfunc_leading_zero32__4966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4966__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4978__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4978__part 
                            = vlSelf->__Vfunc_leading_zero32__4978__value;
                        vlSelf->__Vfunc_leading_zero32__4978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4978__count)));
                            vlSelf->__Vfunc_leading_zero32__4978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4978__count)));
                            vlSelf->__Vfunc_leading_zero32__4978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4978__count)));
                            vlSelf->__Vfunc_leading_zero32__4978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4978__count)));
                            vlSelf->__Vfunc_leading_zero32__4978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4990__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4990__part 
                            = vlSelf->__Vfunc_leading_zero32__4990__value;
                        vlSelf->__Vfunc_leading_zero32__4990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4990__count)));
                            vlSelf->__Vfunc_leading_zero32__4990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4990__count)));
                            vlSelf->__Vfunc_leading_zero32__4990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4990__count)));
                            vlSelf->__Vfunc_leading_zero32__4990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4990__count)));
                            vlSelf->__Vfunc_leading_zero32__4990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4990__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5002__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5002__part 
                            = vlSelf->__Vfunc_leading_zero32__5002__value;
                        vlSelf->__Vfunc_leading_zero32__5002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5002__count)));
                            vlSelf->__Vfunc_leading_zero32__5002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5002__count)));
                            vlSelf->__Vfunc_leading_zero32__5002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5002__count)));
                            vlSelf->__Vfunc_leading_zero32__5002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5002__count)));
                            vlSelf->__Vfunc_leading_zero32__5002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5002__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5014__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5014__part 
                            = vlSelf->__Vfunc_leading_zero32__5014__value;
                        vlSelf->__Vfunc_leading_zero32__5014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5014__count)));
                            vlSelf->__Vfunc_leading_zero32__5014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5014__count)));
                            vlSelf->__Vfunc_leading_zero32__5014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5014__count)));
                            vlSelf->__Vfunc_leading_zero32__5014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5014__count)));
                            vlSelf->__Vfunc_leading_zero32__5014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5026__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5026__part 
                            = vlSelf->__Vfunc_leading_zero32__5026__value;
                        vlSelf->__Vfunc_leading_zero32__5026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5026__count)));
                            vlSelf->__Vfunc_leading_zero32__5026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5026__count)));
                            vlSelf->__Vfunc_leading_zero32__5026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5026__count)));
                            vlSelf->__Vfunc_leading_zero32__5026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5026__count)));
                            vlSelf->__Vfunc_leading_zero32__5026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5026__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5038__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5038__part 
                            = vlSelf->__Vfunc_leading_zero32__5038__value;
                        vlSelf->__Vfunc_leading_zero32__5038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5038__count)));
                            vlSelf->__Vfunc_leading_zero32__5038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5038__count)));
                            vlSelf->__Vfunc_leading_zero32__5038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5038__count)));
                            vlSelf->__Vfunc_leading_zero32__5038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5038__count)));
                            vlSelf->__Vfunc_leading_zero32__5038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5038__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5050__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5050__part 
                            = vlSelf->__Vfunc_leading_zero32__5050__value;
                        vlSelf->__Vfunc_leading_zero32__5050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5050__count)));
                            vlSelf->__Vfunc_leading_zero32__5050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5050__count)));
                            vlSelf->__Vfunc_leading_zero32__5050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5050__count)));
                            vlSelf->__Vfunc_leading_zero32__5050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5050__count)));
                            vlSelf->__Vfunc_leading_zero32__5050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5062__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5062__part 
                            = vlSelf->__Vfunc_leading_zero32__5062__value;
                        vlSelf->__Vfunc_leading_zero32__5062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5062__count)));
                            vlSelf->__Vfunc_leading_zero32__5062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5062__count)));
                            vlSelf->__Vfunc_leading_zero32__5062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5062__count)));
                            vlSelf->__Vfunc_leading_zero32__5062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5062__count)));
                            vlSelf->__Vfunc_leading_zero32__5062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5062__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5074__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5074__part 
                            = vlSelf->__Vfunc_leading_zero32__5074__value;
                        vlSelf->__Vfunc_leading_zero32__5074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5074__count)));
                            vlSelf->__Vfunc_leading_zero32__5074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5074__count)));
                            vlSelf->__Vfunc_leading_zero32__5074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5074__count)));
                            vlSelf->__Vfunc_leading_zero32__5074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5074__count)));
                            vlSelf->__Vfunc_leading_zero32__5074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5074__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5086__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5086__part 
                            = vlSelf->__Vfunc_leading_zero32__5086__value;
                        vlSelf->__Vfunc_leading_zero32__5086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5086__count)));
                            vlSelf->__Vfunc_leading_zero32__5086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5086__count)));
                            vlSelf->__Vfunc_leading_zero32__5086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5086__count)));
                            vlSelf->__Vfunc_leading_zero32__5086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5086__count)));
                            vlSelf->__Vfunc_leading_zero32__5086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5098__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5098__part 
                            = vlSelf->__Vfunc_leading_zero32__5098__value;
                        vlSelf->__Vfunc_leading_zero32__5098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5098__count)));
                            vlSelf->__Vfunc_leading_zero32__5098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5098__count)));
                            vlSelf->__Vfunc_leading_zero32__5098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5098__count)));
                            vlSelf->__Vfunc_leading_zero32__5098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5098__count)));
                            vlSelf->__Vfunc_leading_zero32__5098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5098__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5110__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5110__part 
                            = vlSelf->__Vfunc_leading_zero32__5110__value;
                        vlSelf->__Vfunc_leading_zero32__5110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5110__count)));
                            vlSelf->__Vfunc_leading_zero32__5110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5110__count)));
                            vlSelf->__Vfunc_leading_zero32__5110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5110__count)));
                            vlSelf->__Vfunc_leading_zero32__5110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5110__count)));
                            vlSelf->__Vfunc_leading_zero32__5110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5110__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5122__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5122__part 
                            = vlSelf->__Vfunc_leading_zero32__5122__value;
                        vlSelf->__Vfunc_leading_zero32__5122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5122__count)));
                            vlSelf->__Vfunc_leading_zero32__5122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5122__count)));
                            vlSelf->__Vfunc_leading_zero32__5122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5122__count)));
                            vlSelf->__Vfunc_leading_zero32__5122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5122__count)));
                            vlSelf->__Vfunc_leading_zero32__5122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5134__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5134__part 
                            = vlSelf->__Vfunc_leading_zero32__5134__value;
                        vlSelf->__Vfunc_leading_zero32__5134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5134__count)));
                            vlSelf->__Vfunc_leading_zero32__5134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5134__count)));
                            vlSelf->__Vfunc_leading_zero32__5134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5134__count)));
                            vlSelf->__Vfunc_leading_zero32__5134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5134__count)));
                            vlSelf->__Vfunc_leading_zero32__5134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5134__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5146__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5146__part 
                            = vlSelf->__Vfunc_leading_zero32__5146__value;
                        vlSelf->__Vfunc_leading_zero32__5146__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5146__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5146__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5146__count)));
                            vlSelf->__Vfunc_leading_zero32__5146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5146__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5146__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5146__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5146__count)));
                            vlSelf->__Vfunc_leading_zero32__5146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5146__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5146__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5146__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5146__count)));
                            vlSelf->__Vfunc_leading_zero32__5146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5146__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5146__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5146__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5146__count)));
                            vlSelf->__Vfunc_leading_zero32__5146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5146__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5146__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5146__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5146__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5146__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5146__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5146__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5146__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5158__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5158__part 
                            = vlSelf->__Vfunc_leading_zero32__5158__value;
                        vlSelf->__Vfunc_leading_zero32__5158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5158__count)));
                            vlSelf->__Vfunc_leading_zero32__5158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5158__count)));
                            vlSelf->__Vfunc_leading_zero32__5158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5158__count)));
                            vlSelf->__Vfunc_leading_zero32__5158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5158__count)));
                            vlSelf->__Vfunc_leading_zero32__5158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5158__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5170__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5170__part 
                            = vlSelf->__Vfunc_leading_zero32__5170__value;
                        vlSelf->__Vfunc_leading_zero32__5170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5170__count)));
                            vlSelf->__Vfunc_leading_zero32__5170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5170__count)));
                            vlSelf->__Vfunc_leading_zero32__5170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5170__count)));
                            vlSelf->__Vfunc_leading_zero32__5170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5170__count)));
                            vlSelf->__Vfunc_leading_zero32__5170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5170__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5182__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5182__part 
                            = vlSelf->__Vfunc_leading_zero32__5182__value;
                        vlSelf->__Vfunc_leading_zero32__5182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5182__count)));
                            vlSelf->__Vfunc_leading_zero32__5182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5182__count)));
                            vlSelf->__Vfunc_leading_zero32__5182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5182__count)));
                            vlSelf->__Vfunc_leading_zero32__5182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5182__count)));
                            vlSelf->__Vfunc_leading_zero32__5182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5182__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5194__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5194__part 
                            = vlSelf->__Vfunc_leading_zero32__5194__value;
                        vlSelf->__Vfunc_leading_zero32__5194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5194__count)));
                            vlSelf->__Vfunc_leading_zero32__5194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5194__count)));
                            vlSelf->__Vfunc_leading_zero32__5194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5194__count)));
                            vlSelf->__Vfunc_leading_zero32__5194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5194__count)));
                            vlSelf->__Vfunc_leading_zero32__5194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5206__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5206__part 
                            = vlSelf->__Vfunc_leading_zero32__5206__value;
                        vlSelf->__Vfunc_leading_zero32__5206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5206__count)));
                            vlSelf->__Vfunc_leading_zero32__5206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5206__count)));
                            vlSelf->__Vfunc_leading_zero32__5206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5206__count)));
                            vlSelf->__Vfunc_leading_zero32__5206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5206__count)));
                            vlSelf->__Vfunc_leading_zero32__5206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5218__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5218__part 
                            = vlSelf->__Vfunc_leading_zero32__5218__value;
                        vlSelf->__Vfunc_leading_zero32__5218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5218__count)));
                            vlSelf->__Vfunc_leading_zero32__5218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5218__count)));
                            vlSelf->__Vfunc_leading_zero32__5218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5218__count)));
                            vlSelf->__Vfunc_leading_zero32__5218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5218__count)));
                            vlSelf->__Vfunc_leading_zero32__5218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5218__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5230__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5230__part 
                            = vlSelf->__Vfunc_leading_zero32__5230__value;
                        vlSelf->__Vfunc_leading_zero32__5230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5230__count)));
                            vlSelf->__Vfunc_leading_zero32__5230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5230__count)));
                            vlSelf->__Vfunc_leading_zero32__5230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5230__count)));
                            vlSelf->__Vfunc_leading_zero32__5230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5230__count)));
                            vlSelf->__Vfunc_leading_zero32__5230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5242__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5242__part 
                            = vlSelf->__Vfunc_leading_zero32__5242__value;
                        vlSelf->__Vfunc_leading_zero32__5242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5242__count)));
                            vlSelf->__Vfunc_leading_zero32__5242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5242__count)));
                            vlSelf->__Vfunc_leading_zero32__5242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5242__count)));
                            vlSelf->__Vfunc_leading_zero32__5242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5242__count)));
                            vlSelf->__Vfunc_leading_zero32__5242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5254__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5254__part 
                            = vlSelf->__Vfunc_leading_zero32__5254__value;
                        vlSelf->__Vfunc_leading_zero32__5254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5254__count)));
                            vlSelf->__Vfunc_leading_zero32__5254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5254__count)));
                            vlSelf->__Vfunc_leading_zero32__5254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5254__count)));
                            vlSelf->__Vfunc_leading_zero32__5254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5254__count)));
                            vlSelf->__Vfunc_leading_zero32__5254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5254__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5266__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5266__part 
                            = vlSelf->__Vfunc_leading_zero32__5266__value;
                        vlSelf->__Vfunc_leading_zero32__5266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5266__count)));
                            vlSelf->__Vfunc_leading_zero32__5266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5266__count)));
                            vlSelf->__Vfunc_leading_zero32__5266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5266__count)));
                            vlSelf->__Vfunc_leading_zero32__5266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5266__count)));
                            vlSelf->__Vfunc_leading_zero32__5266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5278__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5278__part 
                            = vlSelf->__Vfunc_leading_zero32__5278__value;
                        vlSelf->__Vfunc_leading_zero32__5278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5278__count)));
                            vlSelf->__Vfunc_leading_zero32__5278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5278__count)));
                            vlSelf->__Vfunc_leading_zero32__5278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5278__count)));
                            vlSelf->__Vfunc_leading_zero32__5278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5278__count)));
                            vlSelf->__Vfunc_leading_zero32__5278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5290__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5290__part 
                            = vlSelf->__Vfunc_leading_zero32__5290__value;
                        vlSelf->__Vfunc_leading_zero32__5290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5290__count)));
                            vlSelf->__Vfunc_leading_zero32__5290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5290__count)));
                            vlSelf->__Vfunc_leading_zero32__5290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5290__count)));
                            vlSelf->__Vfunc_leading_zero32__5290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5290__count)));
                            vlSelf->__Vfunc_leading_zero32__5290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5302__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5302__part 
                            = vlSelf->__Vfunc_leading_zero32__5302__value;
                        vlSelf->__Vfunc_leading_zero32__5302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5302__count)));
                            vlSelf->__Vfunc_leading_zero32__5302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5302__count)));
                            vlSelf->__Vfunc_leading_zero32__5302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5302__count)));
                            vlSelf->__Vfunc_leading_zero32__5302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5302__count)));
                            vlSelf->__Vfunc_leading_zero32__5302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5314__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5314__part 
                            = vlSelf->__Vfunc_leading_zero32__5314__value;
                        vlSelf->__Vfunc_leading_zero32__5314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5314__count)));
                            vlSelf->__Vfunc_leading_zero32__5314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5314__count)));
                            vlSelf->__Vfunc_leading_zero32__5314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5314__count)));
                            vlSelf->__Vfunc_leading_zero32__5314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5314__count)));
                            vlSelf->__Vfunc_leading_zero32__5314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5326__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5326__part 
                            = vlSelf->__Vfunc_leading_zero32__5326__value;
                        vlSelf->__Vfunc_leading_zero32__5326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5326__count)));
                            vlSelf->__Vfunc_leading_zero32__5326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5326__count)));
                            vlSelf->__Vfunc_leading_zero32__5326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5326__count)));
                            vlSelf->__Vfunc_leading_zero32__5326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5326__count)));
                            vlSelf->__Vfunc_leading_zero32__5326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5338__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5338__part 
                            = vlSelf->__Vfunc_leading_zero32__5338__value;
                        vlSelf->__Vfunc_leading_zero32__5338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5338__count)));
                            vlSelf->__Vfunc_leading_zero32__5338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5338__count)));
                            vlSelf->__Vfunc_leading_zero32__5338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5338__count)));
                            vlSelf->__Vfunc_leading_zero32__5338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5338__count)));
                            vlSelf->__Vfunc_leading_zero32__5338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5350__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5350__part 
                            = vlSelf->__Vfunc_leading_zero32__5350__value;
                        vlSelf->__Vfunc_leading_zero32__5350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5350__count)));
                            vlSelf->__Vfunc_leading_zero32__5350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5350__count)));
                            vlSelf->__Vfunc_leading_zero32__5350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5350__count)));
                            vlSelf->__Vfunc_leading_zero32__5350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5350__count)));
                            vlSelf->__Vfunc_leading_zero32__5350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5362__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5362__part 
                            = vlSelf->__Vfunc_leading_zero32__5362__value;
                        vlSelf->__Vfunc_leading_zero32__5362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5362__count)));
                            vlSelf->__Vfunc_leading_zero32__5362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5362__count)));
                            vlSelf->__Vfunc_leading_zero32__5362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5362__count)));
                            vlSelf->__Vfunc_leading_zero32__5362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5362__count)));
                            vlSelf->__Vfunc_leading_zero32__5362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5374__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5374__part 
                            = vlSelf->__Vfunc_leading_zero32__5374__value;
                        vlSelf->__Vfunc_leading_zero32__5374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5374__count)));
                            vlSelf->__Vfunc_leading_zero32__5374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5374__count)));
                            vlSelf->__Vfunc_leading_zero32__5374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5374__count)));
                            vlSelf->__Vfunc_leading_zero32__5374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5374__count)));
                            vlSelf->__Vfunc_leading_zero32__5374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5386__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5386__part 
                            = vlSelf->__Vfunc_leading_zero32__5386__value;
                        vlSelf->__Vfunc_leading_zero32__5386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5386__count)));
                            vlSelf->__Vfunc_leading_zero32__5386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5386__count)));
                            vlSelf->__Vfunc_leading_zero32__5386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5386__count)));
                            vlSelf->__Vfunc_leading_zero32__5386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5386__count)));
                            vlSelf->__Vfunc_leading_zero32__5386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5398__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5398__part 
                            = vlSelf->__Vfunc_leading_zero32__5398__value;
                        vlSelf->__Vfunc_leading_zero32__5398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5398__count)));
                            vlSelf->__Vfunc_leading_zero32__5398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5398__count)));
                            vlSelf->__Vfunc_leading_zero32__5398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5398__count)));
                            vlSelf->__Vfunc_leading_zero32__5398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5398__count)));
                            vlSelf->__Vfunc_leading_zero32__5398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5410__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5410__part 
                            = vlSelf->__Vfunc_leading_zero32__5410__value;
                        vlSelf->__Vfunc_leading_zero32__5410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5410__count)));
                            vlSelf->__Vfunc_leading_zero32__5410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5410__count)));
                            vlSelf->__Vfunc_leading_zero32__5410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5410__count)));
                            vlSelf->__Vfunc_leading_zero32__5410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5410__count)));
                            vlSelf->__Vfunc_leading_zero32__5410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5422__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5422__part 
                            = vlSelf->__Vfunc_leading_zero32__5422__value;
                        vlSelf->__Vfunc_leading_zero32__5422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5422__count)));
                            vlSelf->__Vfunc_leading_zero32__5422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5422__count)));
                            vlSelf->__Vfunc_leading_zero32__5422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5422__count)));
                            vlSelf->__Vfunc_leading_zero32__5422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5422__count)));
                            vlSelf->__Vfunc_leading_zero32__5422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5434__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5434__part 
                            = vlSelf->__Vfunc_leading_zero32__5434__value;
                        vlSelf->__Vfunc_leading_zero32__5434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5434__count)));
                            vlSelf->__Vfunc_leading_zero32__5434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5434__count)));
                            vlSelf->__Vfunc_leading_zero32__5434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5434__count)));
                            vlSelf->__Vfunc_leading_zero32__5434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5434__count)));
                            vlSelf->__Vfunc_leading_zero32__5434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5446__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5446__part 
                            = vlSelf->__Vfunc_leading_zero32__5446__value;
                        vlSelf->__Vfunc_leading_zero32__5446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5458__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5458__part 
                            = vlSelf->__Vfunc_leading_zero32__5458__value;
                        vlSelf->__Vfunc_leading_zero32__5458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5470__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5470__part 
                            = vlSelf->__Vfunc_leading_zero32__5470__value;
                        vlSelf->__Vfunc_leading_zero32__5470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5482__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5482__part 
                            = vlSelf->__Vfunc_leading_zero32__5482__value;
                        vlSelf->__Vfunc_leading_zero32__5482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5494__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5494__part 
                            = vlSelf->__Vfunc_leading_zero32__5494__value;
                        vlSelf->__Vfunc_leading_zero32__5494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5494__Vfuncout)) 
                             - (IData)(8U))));
}
