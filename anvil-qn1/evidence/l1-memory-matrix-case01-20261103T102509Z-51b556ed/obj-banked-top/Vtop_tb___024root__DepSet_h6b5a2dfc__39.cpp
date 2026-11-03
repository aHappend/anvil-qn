// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__39(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__39\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3570__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3570__part 
                            = vlSelf->__Vfunc_leading_zero32__3570__value;
                        vlSelf->__Vfunc_leading_zero32__3570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                            vlSelf->__Vfunc_leading_zero32__3570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3582__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3582__part 
                            = vlSelf->__Vfunc_leading_zero32__3582__value;
                        vlSelf->__Vfunc_leading_zero32__3582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                            vlSelf->__Vfunc_leading_zero32__3582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3594__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3594__part 
                            = vlSelf->__Vfunc_leading_zero32__3594__value;
                        vlSelf->__Vfunc_leading_zero32__3594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                            vlSelf->__Vfunc_leading_zero32__3594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3606__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3606__part 
                            = vlSelf->__Vfunc_leading_zero32__3606__value;
                        vlSelf->__Vfunc_leading_zero32__3606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                            vlSelf->__Vfunc_leading_zero32__3606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3618__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3618__part 
                            = vlSelf->__Vfunc_leading_zero32__3618__value;
                        vlSelf->__Vfunc_leading_zero32__3618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                            vlSelf->__Vfunc_leading_zero32__3618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3630__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3630__part 
                            = vlSelf->__Vfunc_leading_zero32__3630__value;
                        vlSelf->__Vfunc_leading_zero32__3630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                            vlSelf->__Vfunc_leading_zero32__3630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3642__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3642__part 
                            = vlSelf->__Vfunc_leading_zero32__3642__value;
                        vlSelf->__Vfunc_leading_zero32__3642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                            vlSelf->__Vfunc_leading_zero32__3642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3654__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3654__part 
                            = vlSelf->__Vfunc_leading_zero32__3654__value;
                        vlSelf->__Vfunc_leading_zero32__3654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                            vlSelf->__Vfunc_leading_zero32__3654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3666__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3666__part 
                            = vlSelf->__Vfunc_leading_zero32__3666__value;
                        vlSelf->__Vfunc_leading_zero32__3666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                            vlSelf->__Vfunc_leading_zero32__3666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3678__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3678__part 
                            = vlSelf->__Vfunc_leading_zero32__3678__value;
                        vlSelf->__Vfunc_leading_zero32__3678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                            vlSelf->__Vfunc_leading_zero32__3678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3690__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3690__part 
                            = vlSelf->__Vfunc_leading_zero32__3690__value;
                        vlSelf->__Vfunc_leading_zero32__3690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                            vlSelf->__Vfunc_leading_zero32__3690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3702__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3702__part 
                            = vlSelf->__Vfunc_leading_zero32__3702__value;
                        vlSelf->__Vfunc_leading_zero32__3702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                            vlSelf->__Vfunc_leading_zero32__3702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3714__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3714__part 
                            = vlSelf->__Vfunc_leading_zero32__3714__value;
                        vlSelf->__Vfunc_leading_zero32__3714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                            vlSelf->__Vfunc_leading_zero32__3714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3726__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3726__part 
                            = vlSelf->__Vfunc_leading_zero32__3726__value;
                        vlSelf->__Vfunc_leading_zero32__3726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                            vlSelf->__Vfunc_leading_zero32__3726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3738__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3738__part 
                            = vlSelf->__Vfunc_leading_zero32__3738__value;
                        vlSelf->__Vfunc_leading_zero32__3738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                            vlSelf->__Vfunc_leading_zero32__3738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3750__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3750__part 
                            = vlSelf->__Vfunc_leading_zero32__3750__value;
                        vlSelf->__Vfunc_leading_zero32__3750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                            vlSelf->__Vfunc_leading_zero32__3750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3762__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3762__part 
                            = vlSelf->__Vfunc_leading_zero32__3762__value;
                        vlSelf->__Vfunc_leading_zero32__3762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                            vlSelf->__Vfunc_leading_zero32__3762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3774__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3774__part 
                            = vlSelf->__Vfunc_leading_zero32__3774__value;
                        vlSelf->__Vfunc_leading_zero32__3774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                            vlSelf->__Vfunc_leading_zero32__3774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3786__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3786__part 
                            = vlSelf->__Vfunc_leading_zero32__3786__value;
                        vlSelf->__Vfunc_leading_zero32__3786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                            vlSelf->__Vfunc_leading_zero32__3786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3798__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3798__part 
                            = vlSelf->__Vfunc_leading_zero32__3798__value;
                        vlSelf->__Vfunc_leading_zero32__3798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                            vlSelf->__Vfunc_leading_zero32__3798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3810__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3810__part 
                            = vlSelf->__Vfunc_leading_zero32__3810__value;
                        vlSelf->__Vfunc_leading_zero32__3810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                            vlSelf->__Vfunc_leading_zero32__3810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3810__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3822__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3822__part 
                            = vlSelf->__Vfunc_leading_zero32__3822__value;
                        vlSelf->__Vfunc_leading_zero32__3822__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3822__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                            vlSelf->__Vfunc_leading_zero32__3822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3822__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3822__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3822__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3822__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3822__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3822__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3822__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3822__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3834__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3834__part 
                            = vlSelf->__Vfunc_leading_zero32__3834__value;
                        vlSelf->__Vfunc_leading_zero32__3834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                            vlSelf->__Vfunc_leading_zero32__3834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3834__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3846__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3846__part 
                            = vlSelf->__Vfunc_leading_zero32__3846__value;
                        vlSelf->__Vfunc_leading_zero32__3846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                            vlSelf->__Vfunc_leading_zero32__3846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3846__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3858__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3858__part 
                            = vlSelf->__Vfunc_leading_zero32__3858__value;
                        vlSelf->__Vfunc_leading_zero32__3858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                            vlSelf->__Vfunc_leading_zero32__3858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3858__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3870__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3870__part 
                            = vlSelf->__Vfunc_leading_zero32__3870__value;
                        vlSelf->__Vfunc_leading_zero32__3870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                            vlSelf->__Vfunc_leading_zero32__3870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3870__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3882__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3882__part 
                            = vlSelf->__Vfunc_leading_zero32__3882__value;
                        vlSelf->__Vfunc_leading_zero32__3882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                            vlSelf->__Vfunc_leading_zero32__3882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3882__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3894__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3894__part 
                            = vlSelf->__Vfunc_leading_zero32__3894__value;
                        vlSelf->__Vfunc_leading_zero32__3894__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3894__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                            vlSelf->__Vfunc_leading_zero32__3894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3894__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3894__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3894__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3894__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3894__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3894__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3894__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3894__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3906__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3906__part 
                            = vlSelf->__Vfunc_leading_zero32__3906__value;
                        vlSelf->__Vfunc_leading_zero32__3906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                            vlSelf->__Vfunc_leading_zero32__3906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3918__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3918__part 
                            = vlSelf->__Vfunc_leading_zero32__3918__value;
                        vlSelf->__Vfunc_leading_zero32__3918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                            vlSelf->__Vfunc_leading_zero32__3918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3930__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3930__part 
                            = vlSelf->__Vfunc_leading_zero32__3930__value;
                        vlSelf->__Vfunc_leading_zero32__3930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                            vlSelf->__Vfunc_leading_zero32__3930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3930__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3942__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3942__part 
                            = vlSelf->__Vfunc_leading_zero32__3942__value;
                        vlSelf->__Vfunc_leading_zero32__3942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                            vlSelf->__Vfunc_leading_zero32__3942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3954__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3954__part 
                            = vlSelf->__Vfunc_leading_zero32__3954__value;
                        vlSelf->__Vfunc_leading_zero32__3954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                            vlSelf->__Vfunc_leading_zero32__3954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3966__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3966__part 
                            = vlSelf->__Vfunc_leading_zero32__3966__value;
                        vlSelf->__Vfunc_leading_zero32__3966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                            vlSelf->__Vfunc_leading_zero32__3966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3966__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3978__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3978__part 
                            = vlSelf->__Vfunc_leading_zero32__3978__value;
                        vlSelf->__Vfunc_leading_zero32__3978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                            vlSelf->__Vfunc_leading_zero32__3978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3990__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3990__part 
                            = vlSelf->__Vfunc_leading_zero32__3990__value;
                        vlSelf->__Vfunc_leading_zero32__3990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                            vlSelf->__Vfunc_leading_zero32__3990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3990__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4002__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4002__part 
                            = vlSelf->__Vfunc_leading_zero32__4002__value;
                        vlSelf->__Vfunc_leading_zero32__4002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                            vlSelf->__Vfunc_leading_zero32__4002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4002__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4014__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4014__part 
                            = vlSelf->__Vfunc_leading_zero32__4014__value;
                        vlSelf->__Vfunc_leading_zero32__4014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                            vlSelf->__Vfunc_leading_zero32__4014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4026__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4026__part 
                            = vlSelf->__Vfunc_leading_zero32__4026__value;
                        vlSelf->__Vfunc_leading_zero32__4026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                            vlSelf->__Vfunc_leading_zero32__4026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4026__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4038__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4038__part 
                            = vlSelf->__Vfunc_leading_zero32__4038__value;
                        vlSelf->__Vfunc_leading_zero32__4038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                            vlSelf->__Vfunc_leading_zero32__4038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4038__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4050__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4050__part 
                            = vlSelf->__Vfunc_leading_zero32__4050__value;
                        vlSelf->__Vfunc_leading_zero32__4050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                            vlSelf->__Vfunc_leading_zero32__4050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4062__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4062__part 
                            = vlSelf->__Vfunc_leading_zero32__4062__value;
                        vlSelf->__Vfunc_leading_zero32__4062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                            vlSelf->__Vfunc_leading_zero32__4062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4062__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4074__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4074__part 
                            = vlSelf->__Vfunc_leading_zero32__4074__value;
                        vlSelf->__Vfunc_leading_zero32__4074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                            vlSelf->__Vfunc_leading_zero32__4074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4074__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4086__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4086__part 
                            = vlSelf->__Vfunc_leading_zero32__4086__value;
                        vlSelf->__Vfunc_leading_zero32__4086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                            vlSelf->__Vfunc_leading_zero32__4086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4098__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4098__part 
                            = vlSelf->__Vfunc_leading_zero32__4098__value;
                        vlSelf->__Vfunc_leading_zero32__4098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                            vlSelf->__Vfunc_leading_zero32__4098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4098__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4110__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4110__part 
                            = vlSelf->__Vfunc_leading_zero32__4110__value;
                        vlSelf->__Vfunc_leading_zero32__4110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                            vlSelf->__Vfunc_leading_zero32__4110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4110__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4122__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4122__part 
                            = vlSelf->__Vfunc_leading_zero32__4122__value;
                        vlSelf->__Vfunc_leading_zero32__4122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                            vlSelf->__Vfunc_leading_zero32__4122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4134__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4134__part 
                            = vlSelf->__Vfunc_leading_zero32__4134__value;
                        vlSelf->__Vfunc_leading_zero32__4134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                            vlSelf->__Vfunc_leading_zero32__4134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4134__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4146__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4146__part 
                            = vlSelf->__Vfunc_leading_zero32__4146__value;
                        vlSelf->__Vfunc_leading_zero32__4146__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4146__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                            vlSelf->__Vfunc_leading_zero32__4146__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4146__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4146__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4146__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4146__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4146__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4146__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4146__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4146__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4158__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4158__part 
                            = vlSelf->__Vfunc_leading_zero32__4158__value;
                        vlSelf->__Vfunc_leading_zero32__4158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                            vlSelf->__Vfunc_leading_zero32__4158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4158__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4170__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4170__part 
                            = vlSelf->__Vfunc_leading_zero32__4170__value;
                        vlSelf->__Vfunc_leading_zero32__4170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                            vlSelf->__Vfunc_leading_zero32__4170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4170__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4182__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4182__part 
                            = vlSelf->__Vfunc_leading_zero32__4182__value;
                        vlSelf->__Vfunc_leading_zero32__4182__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4182__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                            vlSelf->__Vfunc_leading_zero32__4182__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4182__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4182__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4182__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4182__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4182__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4182__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4182__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4182__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4194__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4194__part 
                            = vlSelf->__Vfunc_leading_zero32__4194__value;
                        vlSelf->__Vfunc_leading_zero32__4194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                            vlSelf->__Vfunc_leading_zero32__4194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4206__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4206__part 
                            = vlSelf->__Vfunc_leading_zero32__4206__value;
                        vlSelf->__Vfunc_leading_zero32__4206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                            vlSelf->__Vfunc_leading_zero32__4206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4218__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4218__part 
                            = vlSelf->__Vfunc_leading_zero32__4218__value;
                        vlSelf->__Vfunc_leading_zero32__4218__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4218__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                            vlSelf->__Vfunc_leading_zero32__4218__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4218__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4218__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4218__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4218__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4218__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4218__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4218__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4218__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4230__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4230__part 
                            = vlSelf->__Vfunc_leading_zero32__4230__value;
                        vlSelf->__Vfunc_leading_zero32__4230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                            vlSelf->__Vfunc_leading_zero32__4230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4242__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4242__part 
                            = vlSelf->__Vfunc_leading_zero32__4242__value;
                        vlSelf->__Vfunc_leading_zero32__4242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                            vlSelf->__Vfunc_leading_zero32__4242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4254__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4254__part 
                            = vlSelf->__Vfunc_leading_zero32__4254__value;
                        vlSelf->__Vfunc_leading_zero32__4254__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4254__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                            vlSelf->__Vfunc_leading_zero32__4254__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4254__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4254__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4254__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4254__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4254__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4254__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4254__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4254__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4266__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4266__part 
                            = vlSelf->__Vfunc_leading_zero32__4266__value;
                        vlSelf->__Vfunc_leading_zero32__4266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                            vlSelf->__Vfunc_leading_zero32__4266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4278__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4278__part 
                            = vlSelf->__Vfunc_leading_zero32__4278__value;
                        vlSelf->__Vfunc_leading_zero32__4278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                            vlSelf->__Vfunc_leading_zero32__4278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4290__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4290__part 
                            = vlSelf->__Vfunc_leading_zero32__4290__value;
                        vlSelf->__Vfunc_leading_zero32__4290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                            vlSelf->__Vfunc_leading_zero32__4290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4302__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4302__part 
                            = vlSelf->__Vfunc_leading_zero32__4302__value;
                        vlSelf->__Vfunc_leading_zero32__4302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                            vlSelf->__Vfunc_leading_zero32__4302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4314__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4314__part 
                            = vlSelf->__Vfunc_leading_zero32__4314__value;
                        vlSelf->__Vfunc_leading_zero32__4314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                            vlSelf->__Vfunc_leading_zero32__4314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4326__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4326__part 
                            = vlSelf->__Vfunc_leading_zero32__4326__value;
                        vlSelf->__Vfunc_leading_zero32__4326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                            vlSelf->__Vfunc_leading_zero32__4326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4338__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4338__part 
                            = vlSelf->__Vfunc_leading_zero32__4338__value;
                        vlSelf->__Vfunc_leading_zero32__4338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                            vlSelf->__Vfunc_leading_zero32__4338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4350__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4350__part 
                            = vlSelf->__Vfunc_leading_zero32__4350__value;
                        vlSelf->__Vfunc_leading_zero32__4350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                            vlSelf->__Vfunc_leading_zero32__4350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4362__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4362__part 
                            = vlSelf->__Vfunc_leading_zero32__4362__value;
                        vlSelf->__Vfunc_leading_zero32__4362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                            vlSelf->__Vfunc_leading_zero32__4362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4374__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4374__part 
                            = vlSelf->__Vfunc_leading_zero32__4374__value;
                        vlSelf->__Vfunc_leading_zero32__4374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                            vlSelf->__Vfunc_leading_zero32__4374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4386__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4386__part 
                            = vlSelf->__Vfunc_leading_zero32__4386__value;
                        vlSelf->__Vfunc_leading_zero32__4386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                            vlSelf->__Vfunc_leading_zero32__4386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4398__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4398__part 
                            = vlSelf->__Vfunc_leading_zero32__4398__value;
                        vlSelf->__Vfunc_leading_zero32__4398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                            vlSelf->__Vfunc_leading_zero32__4398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4410__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4410__part 
                            = vlSelf->__Vfunc_leading_zero32__4410__value;
                        vlSelf->__Vfunc_leading_zero32__4410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                            vlSelf->__Vfunc_leading_zero32__4410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4422__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4422__part 
                            = vlSelf->__Vfunc_leading_zero32__4422__value;
                        vlSelf->__Vfunc_leading_zero32__4422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                            vlSelf->__Vfunc_leading_zero32__4422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4434__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4434__part 
                            = vlSelf->__Vfunc_leading_zero32__4434__value;
                        vlSelf->__Vfunc_leading_zero32__4434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                            vlSelf->__Vfunc_leading_zero32__4434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4446__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4446__part 
                            = vlSelf->__Vfunc_leading_zero32__4446__value;
                        vlSelf->__Vfunc_leading_zero32__4446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                            vlSelf->__Vfunc_leading_zero32__4446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4458__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4458__part 
                            = vlSelf->__Vfunc_leading_zero32__4458__value;
                        vlSelf->__Vfunc_leading_zero32__4458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                            vlSelf->__Vfunc_leading_zero32__4458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4470__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4470__part 
                            = vlSelf->__Vfunc_leading_zero32__4470__value;
                        vlSelf->__Vfunc_leading_zero32__4470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                            vlSelf->__Vfunc_leading_zero32__4470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4482__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4482__part 
                            = vlSelf->__Vfunc_leading_zero32__4482__value;
                        vlSelf->__Vfunc_leading_zero32__4482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                            vlSelf->__Vfunc_leading_zero32__4482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4494__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4494__part 
                            = vlSelf->__Vfunc_leading_zero32__4494__value;
                        vlSelf->__Vfunc_leading_zero32__4494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                            vlSelf->__Vfunc_leading_zero32__4494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4506__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4506__part 
                            = vlSelf->__Vfunc_leading_zero32__4506__value;
                        vlSelf->__Vfunc_leading_zero32__4506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                            vlSelf->__Vfunc_leading_zero32__4506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4518__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4518__part 
                            = vlSelf->__Vfunc_leading_zero32__4518__value;
                        vlSelf->__Vfunc_leading_zero32__4518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                            vlSelf->__Vfunc_leading_zero32__4518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4530__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4530__part 
                            = vlSelf->__Vfunc_leading_zero32__4530__value;
                        vlSelf->__Vfunc_leading_zero32__4530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                            vlSelf->__Vfunc_leading_zero32__4530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4542__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4542__part 
                            = vlSelf->__Vfunc_leading_zero32__4542__value;
                        vlSelf->__Vfunc_leading_zero32__4542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                            vlSelf->__Vfunc_leading_zero32__4542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4554__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4554__part 
                            = vlSelf->__Vfunc_leading_zero32__4554__value;
                        vlSelf->__Vfunc_leading_zero32__4554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                            vlSelf->__Vfunc_leading_zero32__4554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4566__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4566__part 
                            = vlSelf->__Vfunc_leading_zero32__4566__value;
                        vlSelf->__Vfunc_leading_zero32__4566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                            vlSelf->__Vfunc_leading_zero32__4566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4578__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4578__part 
                            = vlSelf->__Vfunc_leading_zero32__4578__value;
                        vlSelf->__Vfunc_leading_zero32__4578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                            vlSelf->__Vfunc_leading_zero32__4578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4590__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4590__part 
                            = vlSelf->__Vfunc_leading_zero32__4590__value;
                        vlSelf->__Vfunc_leading_zero32__4590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                            vlSelf->__Vfunc_leading_zero32__4590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4602__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4602__part 
                            = vlSelf->__Vfunc_leading_zero32__4602__value;
                        vlSelf->__Vfunc_leading_zero32__4602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                            vlSelf->__Vfunc_leading_zero32__4602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4614__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4614__part 
                            = vlSelf->__Vfunc_leading_zero32__4614__value;
                        vlSelf->__Vfunc_leading_zero32__4614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                            vlSelf->__Vfunc_leading_zero32__4614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4626__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4626__part 
                            = vlSelf->__Vfunc_leading_zero32__4626__value;
                        vlSelf->__Vfunc_leading_zero32__4626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                            vlSelf->__Vfunc_leading_zero32__4626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4638__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4638__part 
                            = vlSelf->__Vfunc_leading_zero32__4638__value;
                        vlSelf->__Vfunc_leading_zero32__4638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                            vlSelf->__Vfunc_leading_zero32__4638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4650__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4650__part 
                            = vlSelf->__Vfunc_leading_zero32__4650__value;
                        vlSelf->__Vfunc_leading_zero32__4650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                            vlSelf->__Vfunc_leading_zero32__4650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4662__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4662__part 
                            = vlSelf->__Vfunc_leading_zero32__4662__value;
                        vlSelf->__Vfunc_leading_zero32__4662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                            vlSelf->__Vfunc_leading_zero32__4662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4674__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4674__part 
                            = vlSelf->__Vfunc_leading_zero32__4674__value;
                        vlSelf->__Vfunc_leading_zero32__4674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                            vlSelf->__Vfunc_leading_zero32__4674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4686__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4686__part 
                            = vlSelf->__Vfunc_leading_zero32__4686__value;
                        vlSelf->__Vfunc_leading_zero32__4686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                            vlSelf->__Vfunc_leading_zero32__4686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4698__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4698__part 
                            = vlSelf->__Vfunc_leading_zero32__4698__value;
                        vlSelf->__Vfunc_leading_zero32__4698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                            vlSelf->__Vfunc_leading_zero32__4698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4710__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4710__part 
                            = vlSelf->__Vfunc_leading_zero32__4710__value;
                        vlSelf->__Vfunc_leading_zero32__4710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                            vlSelf->__Vfunc_leading_zero32__4710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4722__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4722__part 
                            = vlSelf->__Vfunc_leading_zero32__4722__value;
                        vlSelf->__Vfunc_leading_zero32__4722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                            vlSelf->__Vfunc_leading_zero32__4722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4734__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4734__part 
                            = vlSelf->__Vfunc_leading_zero32__4734__value;
                        vlSelf->__Vfunc_leading_zero32__4734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                            vlSelf->__Vfunc_leading_zero32__4734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4746__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4746__part 
                            = vlSelf->__Vfunc_leading_zero32__4746__value;
                        vlSelf->__Vfunc_leading_zero32__4746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                            vlSelf->__Vfunc_leading_zero32__4746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1687__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1687__part 
                            = vlSelf->__Vfunc_leading_zero32__1687__value;
                        vlSelf->__Vfunc_leading_zero32__1687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                            vlSelf->__Vfunc_leading_zero32__1687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1699__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1699__part 
                            = vlSelf->__Vfunc_leading_zero32__1699__value;
                        vlSelf->__Vfunc_leading_zero32__1699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                            vlSelf->__Vfunc_leading_zero32__1699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1711__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1711__part 
                            = vlSelf->__Vfunc_leading_zero32__1711__value;
                        vlSelf->__Vfunc_leading_zero32__1711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                            vlSelf->__Vfunc_leading_zero32__1711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1723__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1723__part 
                            = vlSelf->__Vfunc_leading_zero32__1723__value;
                        vlSelf->__Vfunc_leading_zero32__1723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                            vlSelf->__Vfunc_leading_zero32__1723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1735__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1735__part 
                            = vlSelf->__Vfunc_leading_zero32__1735__value;
                        vlSelf->__Vfunc_leading_zero32__1735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                            vlSelf->__Vfunc_leading_zero32__1735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1747__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1747__part 
                            = vlSelf->__Vfunc_leading_zero32__1747__value;
                        vlSelf->__Vfunc_leading_zero32__1747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                            vlSelf->__Vfunc_leading_zero32__1747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1759__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1759__part 
                            = vlSelf->__Vfunc_leading_zero32__1759__value;
                        vlSelf->__Vfunc_leading_zero32__1759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                            vlSelf->__Vfunc_leading_zero32__1759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1771__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1771__part 
                            = vlSelf->__Vfunc_leading_zero32__1771__value;
                        vlSelf->__Vfunc_leading_zero32__1771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                            vlSelf->__Vfunc_leading_zero32__1771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1783__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1783__part 
                            = vlSelf->__Vfunc_leading_zero32__1783__value;
                        vlSelf->__Vfunc_leading_zero32__1783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                            vlSelf->__Vfunc_leading_zero32__1783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1795__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1795__part 
                            = vlSelf->__Vfunc_leading_zero32__1795__value;
                        vlSelf->__Vfunc_leading_zero32__1795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                            vlSelf->__Vfunc_leading_zero32__1795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1807__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1807__part 
                            = vlSelf->__Vfunc_leading_zero32__1807__value;
                        vlSelf->__Vfunc_leading_zero32__1807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                            vlSelf->__Vfunc_leading_zero32__1807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1819__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1819__part 
                            = vlSelf->__Vfunc_leading_zero32__1819__value;
                        vlSelf->__Vfunc_leading_zero32__1819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                            vlSelf->__Vfunc_leading_zero32__1819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1831__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1831__part 
                            = vlSelf->__Vfunc_leading_zero32__1831__value;
                        vlSelf->__Vfunc_leading_zero32__1831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                            vlSelf->__Vfunc_leading_zero32__1831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1843__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1843__part 
                            = vlSelf->__Vfunc_leading_zero32__1843__value;
                        vlSelf->__Vfunc_leading_zero32__1843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                            vlSelf->__Vfunc_leading_zero32__1843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1855__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1855__part 
                            = vlSelf->__Vfunc_leading_zero32__1855__value;
                        vlSelf->__Vfunc_leading_zero32__1855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                            vlSelf->__Vfunc_leading_zero32__1855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1867__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1867__part 
                            = vlSelf->__Vfunc_leading_zero32__1867__value;
                        vlSelf->__Vfunc_leading_zero32__1867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                            vlSelf->__Vfunc_leading_zero32__1867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1879__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1879__part 
                            = vlSelf->__Vfunc_leading_zero32__1879__value;
                        vlSelf->__Vfunc_leading_zero32__1879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                            vlSelf->__Vfunc_leading_zero32__1879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1891__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1891__part 
                            = vlSelf->__Vfunc_leading_zero32__1891__value;
                        vlSelf->__Vfunc_leading_zero32__1891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                            vlSelf->__Vfunc_leading_zero32__1891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1903__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1903__part 
                            = vlSelf->__Vfunc_leading_zero32__1903__value;
                        vlSelf->__Vfunc_leading_zero32__1903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                            vlSelf->__Vfunc_leading_zero32__1903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1915__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1915__part 
                            = vlSelf->__Vfunc_leading_zero32__1915__value;
                        vlSelf->__Vfunc_leading_zero32__1915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                            vlSelf->__Vfunc_leading_zero32__1915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1927__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1927__part 
                            = vlSelf->__Vfunc_leading_zero32__1927__value;
                        vlSelf->__Vfunc_leading_zero32__1927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                            vlSelf->__Vfunc_leading_zero32__1927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1939__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1939__part 
                            = vlSelf->__Vfunc_leading_zero32__1939__value;
                        vlSelf->__Vfunc_leading_zero32__1939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                            vlSelf->__Vfunc_leading_zero32__1939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1951__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1951__part 
                            = vlSelf->__Vfunc_leading_zero32__1951__value;
                        vlSelf->__Vfunc_leading_zero32__1951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                            vlSelf->__Vfunc_leading_zero32__1951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1963__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1963__part 
                            = vlSelf->__Vfunc_leading_zero32__1963__value;
                        vlSelf->__Vfunc_leading_zero32__1963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                            vlSelf->__Vfunc_leading_zero32__1963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1975__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1975__part 
                            = vlSelf->__Vfunc_leading_zero32__1975__value;
                        vlSelf->__Vfunc_leading_zero32__1975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                            vlSelf->__Vfunc_leading_zero32__1975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1987__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1987__part 
                            = vlSelf->__Vfunc_leading_zero32__1987__value;
                        vlSelf->__Vfunc_leading_zero32__1987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                            vlSelf->__Vfunc_leading_zero32__1987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1999__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1999__part 
                            = vlSelf->__Vfunc_leading_zero32__1999__value;
                        vlSelf->__Vfunc_leading_zero32__1999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                            vlSelf->__Vfunc_leading_zero32__1999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2011__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2011__part 
                            = vlSelf->__Vfunc_leading_zero32__2011__value;
                        vlSelf->__Vfunc_leading_zero32__2011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                            vlSelf->__Vfunc_leading_zero32__2011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2023__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2023__part 
                            = vlSelf->__Vfunc_leading_zero32__2023__value;
                        vlSelf->__Vfunc_leading_zero32__2023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                            vlSelf->__Vfunc_leading_zero32__2023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2035__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2035__part 
                            = vlSelf->__Vfunc_leading_zero32__2035__value;
                        vlSelf->__Vfunc_leading_zero32__2035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                            vlSelf->__Vfunc_leading_zero32__2035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2047__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2047__part 
                            = vlSelf->__Vfunc_leading_zero32__2047__value;
                        vlSelf->__Vfunc_leading_zero32__2047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                            vlSelf->__Vfunc_leading_zero32__2047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2059__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2059__part 
                            = vlSelf->__Vfunc_leading_zero32__2059__value;
                        vlSelf->__Vfunc_leading_zero32__2059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                            vlSelf->__Vfunc_leading_zero32__2059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2071__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2071__part 
                            = vlSelf->__Vfunc_leading_zero32__2071__value;
                        vlSelf->__Vfunc_leading_zero32__2071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                            vlSelf->__Vfunc_leading_zero32__2071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2083__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2083__part 
                            = vlSelf->__Vfunc_leading_zero32__2083__value;
                        vlSelf->__Vfunc_leading_zero32__2083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                            vlSelf->__Vfunc_leading_zero32__2083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2095__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2095__part 
                            = vlSelf->__Vfunc_leading_zero32__2095__value;
                        vlSelf->__Vfunc_leading_zero32__2095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                            vlSelf->__Vfunc_leading_zero32__2095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2107__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2107__part 
                            = vlSelf->__Vfunc_leading_zero32__2107__value;
                        vlSelf->__Vfunc_leading_zero32__2107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                            vlSelf->__Vfunc_leading_zero32__2107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2119__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2119__part 
                            = vlSelf->__Vfunc_leading_zero32__2119__value;
                        vlSelf->__Vfunc_leading_zero32__2119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                            vlSelf->__Vfunc_leading_zero32__2119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2131__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2131__part 
                            = vlSelf->__Vfunc_leading_zero32__2131__value;
                        vlSelf->__Vfunc_leading_zero32__2131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                            vlSelf->__Vfunc_leading_zero32__2131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2143__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2143__part 
                            = vlSelf->__Vfunc_leading_zero32__2143__value;
                        vlSelf->__Vfunc_leading_zero32__2143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                            vlSelf->__Vfunc_leading_zero32__2143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2155__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2155__part 
                            = vlSelf->__Vfunc_leading_zero32__2155__value;
                        vlSelf->__Vfunc_leading_zero32__2155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                            vlSelf->__Vfunc_leading_zero32__2155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2167__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2167__part 
                            = vlSelf->__Vfunc_leading_zero32__2167__value;
                        vlSelf->__Vfunc_leading_zero32__2167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                            vlSelf->__Vfunc_leading_zero32__2167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2179__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2179__part 
                            = vlSelf->__Vfunc_leading_zero32__2179__value;
                        vlSelf->__Vfunc_leading_zero32__2179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                            vlSelf->__Vfunc_leading_zero32__2179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2191__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2191__part 
                            = vlSelf->__Vfunc_leading_zero32__2191__value;
                        vlSelf->__Vfunc_leading_zero32__2191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                            vlSelf->__Vfunc_leading_zero32__2191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2203__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2203__part 
                            = vlSelf->__Vfunc_leading_zero32__2203__value;
                        vlSelf->__Vfunc_leading_zero32__2203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                            vlSelf->__Vfunc_leading_zero32__2203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2215__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2215__part 
                            = vlSelf->__Vfunc_leading_zero32__2215__value;
                        vlSelf->__Vfunc_leading_zero32__2215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                            vlSelf->__Vfunc_leading_zero32__2215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2227__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2227__part 
                            = vlSelf->__Vfunc_leading_zero32__2227__value;
                        vlSelf->__Vfunc_leading_zero32__2227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                            vlSelf->__Vfunc_leading_zero32__2227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2239__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2239__part 
                            = vlSelf->__Vfunc_leading_zero32__2239__value;
                        vlSelf->__Vfunc_leading_zero32__2239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                            vlSelf->__Vfunc_leading_zero32__2239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2251__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2251__part 
                            = vlSelf->__Vfunc_leading_zero32__2251__value;
                        vlSelf->__Vfunc_leading_zero32__2251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                            vlSelf->__Vfunc_leading_zero32__2251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2263__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2263__part 
                            = vlSelf->__Vfunc_leading_zero32__2263__value;
                        vlSelf->__Vfunc_leading_zero32__2263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                            vlSelf->__Vfunc_leading_zero32__2263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2275__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2275__part 
                            = vlSelf->__Vfunc_leading_zero32__2275__value;
                        vlSelf->__Vfunc_leading_zero32__2275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                            vlSelf->__Vfunc_leading_zero32__2275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2287__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2287__part 
                            = vlSelf->__Vfunc_leading_zero32__2287__value;
                        vlSelf->__Vfunc_leading_zero32__2287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                            vlSelf->__Vfunc_leading_zero32__2287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2299__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2299__part 
                            = vlSelf->__Vfunc_leading_zero32__2299__value;
                        vlSelf->__Vfunc_leading_zero32__2299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                            vlSelf->__Vfunc_leading_zero32__2299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2311__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2311__part 
                            = vlSelf->__Vfunc_leading_zero32__2311__value;
                        vlSelf->__Vfunc_leading_zero32__2311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                            vlSelf->__Vfunc_leading_zero32__2311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2323__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2323__part 
                            = vlSelf->__Vfunc_leading_zero32__2323__value;
                        vlSelf->__Vfunc_leading_zero32__2323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                            vlSelf->__Vfunc_leading_zero32__2323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2335__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2335__part 
                            = vlSelf->__Vfunc_leading_zero32__2335__value;
                        vlSelf->__Vfunc_leading_zero32__2335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                            vlSelf->__Vfunc_leading_zero32__2335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2347__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2347__part 
                            = vlSelf->__Vfunc_leading_zero32__2347__value;
                        vlSelf->__Vfunc_leading_zero32__2347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                            vlSelf->__Vfunc_leading_zero32__2347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2359__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2359__part 
                            = vlSelf->__Vfunc_leading_zero32__2359__value;
                        vlSelf->__Vfunc_leading_zero32__2359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                            vlSelf->__Vfunc_leading_zero32__2359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2371__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2371__part 
                            = vlSelf->__Vfunc_leading_zero32__2371__value;
                        vlSelf->__Vfunc_leading_zero32__2371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                            vlSelf->__Vfunc_leading_zero32__2371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2383__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2383__part 
                            = vlSelf->__Vfunc_leading_zero32__2383__value;
                        vlSelf->__Vfunc_leading_zero32__2383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                            vlSelf->__Vfunc_leading_zero32__2383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2395__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2395__part 
                            = vlSelf->__Vfunc_leading_zero32__2395__value;
                        vlSelf->__Vfunc_leading_zero32__2395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                            vlSelf->__Vfunc_leading_zero32__2395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2407__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2407__part 
                            = vlSelf->__Vfunc_leading_zero32__2407__value;
                        vlSelf->__Vfunc_leading_zero32__2407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                            vlSelf->__Vfunc_leading_zero32__2407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2419__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2419__part 
                            = vlSelf->__Vfunc_leading_zero32__2419__value;
                        vlSelf->__Vfunc_leading_zero32__2419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                            vlSelf->__Vfunc_leading_zero32__2419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2431__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2431__part 
                            = vlSelf->__Vfunc_leading_zero32__2431__value;
                        vlSelf->__Vfunc_leading_zero32__2431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                            vlSelf->__Vfunc_leading_zero32__2431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2443__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2443__part 
                            = vlSelf->__Vfunc_leading_zero32__2443__value;
                        vlSelf->__Vfunc_leading_zero32__2443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                            vlSelf->__Vfunc_leading_zero32__2443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2455__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2455__part 
                            = vlSelf->__Vfunc_leading_zero32__2455__value;
                        vlSelf->__Vfunc_leading_zero32__2455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                            vlSelf->__Vfunc_leading_zero32__2455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2467__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2467__part 
                            = vlSelf->__Vfunc_leading_zero32__2467__value;
                        vlSelf->__Vfunc_leading_zero32__2467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                            vlSelf->__Vfunc_leading_zero32__2467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2479__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2479__part 
                            = vlSelf->__Vfunc_leading_zero32__2479__value;
                        vlSelf->__Vfunc_leading_zero32__2479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                            vlSelf->__Vfunc_leading_zero32__2479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2491__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2491__part 
                            = vlSelf->__Vfunc_leading_zero32__2491__value;
                        vlSelf->__Vfunc_leading_zero32__2491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                            vlSelf->__Vfunc_leading_zero32__2491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2503__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2503__part 
                            = vlSelf->__Vfunc_leading_zero32__2503__value;
                        vlSelf->__Vfunc_leading_zero32__2503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                            vlSelf->__Vfunc_leading_zero32__2503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2515__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2515__part 
                            = vlSelf->__Vfunc_leading_zero32__2515__value;
                        vlSelf->__Vfunc_leading_zero32__2515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                            vlSelf->__Vfunc_leading_zero32__2515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2527__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2527__part 
                            = vlSelf->__Vfunc_leading_zero32__2527__value;
                        vlSelf->__Vfunc_leading_zero32__2527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                            vlSelf->__Vfunc_leading_zero32__2527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2539__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2539__part 
                            = vlSelf->__Vfunc_leading_zero32__2539__value;
                        vlSelf->__Vfunc_leading_zero32__2539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                            vlSelf->__Vfunc_leading_zero32__2539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2551__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2551__part 
                            = vlSelf->__Vfunc_leading_zero32__2551__value;
                        vlSelf->__Vfunc_leading_zero32__2551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                            vlSelf->__Vfunc_leading_zero32__2551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2563__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2563__part 
                            = vlSelf->__Vfunc_leading_zero32__2563__value;
                        vlSelf->__Vfunc_leading_zero32__2563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                            vlSelf->__Vfunc_leading_zero32__2563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2575__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2575__part 
                            = vlSelf->__Vfunc_leading_zero32__2575__value;
                        vlSelf->__Vfunc_leading_zero32__2575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                            vlSelf->__Vfunc_leading_zero32__2575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2587__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2587__part 
                            = vlSelf->__Vfunc_leading_zero32__2587__value;
                        vlSelf->__Vfunc_leading_zero32__2587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                            vlSelf->__Vfunc_leading_zero32__2587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2599__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2599__part 
                            = vlSelf->__Vfunc_leading_zero32__2599__value;
                        vlSelf->__Vfunc_leading_zero32__2599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                            vlSelf->__Vfunc_leading_zero32__2599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2611__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2611__part 
                            = vlSelf->__Vfunc_leading_zero32__2611__value;
                        vlSelf->__Vfunc_leading_zero32__2611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                            vlSelf->__Vfunc_leading_zero32__2611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2623__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2623__part 
                            = vlSelf->__Vfunc_leading_zero32__2623__value;
                        vlSelf->__Vfunc_leading_zero32__2623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                            vlSelf->__Vfunc_leading_zero32__2623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2635__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2635__part 
                            = vlSelf->__Vfunc_leading_zero32__2635__value;
                        vlSelf->__Vfunc_leading_zero32__2635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                            vlSelf->__Vfunc_leading_zero32__2635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2647__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2647__part 
                            = vlSelf->__Vfunc_leading_zero32__2647__value;
                        vlSelf->__Vfunc_leading_zero32__2647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                            vlSelf->__Vfunc_leading_zero32__2647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2659__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2659__part 
                            = vlSelf->__Vfunc_leading_zero32__2659__value;
                        vlSelf->__Vfunc_leading_zero32__2659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                            vlSelf->__Vfunc_leading_zero32__2659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2671__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2671__part 
                            = vlSelf->__Vfunc_leading_zero32__2671__value;
                        vlSelf->__Vfunc_leading_zero32__2671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                            vlSelf->__Vfunc_leading_zero32__2671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2683__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2683__part 
                            = vlSelf->__Vfunc_leading_zero32__2683__value;
                        vlSelf->__Vfunc_leading_zero32__2683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                            vlSelf->__Vfunc_leading_zero32__2683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2695__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2695__part 
                            = vlSelf->__Vfunc_leading_zero32__2695__value;
                        vlSelf->__Vfunc_leading_zero32__2695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                            vlSelf->__Vfunc_leading_zero32__2695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2695__Vfuncout)) 
                             - (IData)(8U))));
}
