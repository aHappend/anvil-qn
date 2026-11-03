// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__15(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___stl_sequent__TOP__15\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3004__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3004__part 
                            = vlSelf->__Vfunc_leading_zero32__3004__value;
                        vlSelf->__Vfunc_leading_zero32__3004__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3004__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3004__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3004__count)));
                            vlSelf->__Vfunc_leading_zero32__3004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3004__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3004__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3004__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3004__count)));
                            vlSelf->__Vfunc_leading_zero32__3004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3004__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3004__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3004__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3004__count)));
                            vlSelf->__Vfunc_leading_zero32__3004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3004__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3004__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3004__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3004__count)));
                            vlSelf->__Vfunc_leading_zero32__3004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3004__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3004__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3004__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3004__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3004__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3004__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3004__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3004__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3016__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3016__part 
                            = vlSelf->__Vfunc_leading_zero32__3016__value;
                        vlSelf->__Vfunc_leading_zero32__3016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3016__count)));
                            vlSelf->__Vfunc_leading_zero32__3016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3016__count)));
                            vlSelf->__Vfunc_leading_zero32__3016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3016__count)));
                            vlSelf->__Vfunc_leading_zero32__3016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3016__count)));
                            vlSelf->__Vfunc_leading_zero32__3016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3016__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3028__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3028__part 
                            = vlSelf->__Vfunc_leading_zero32__3028__value;
                        vlSelf->__Vfunc_leading_zero32__3028__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3028__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3028__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3028__count)));
                            vlSelf->__Vfunc_leading_zero32__3028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3028__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3028__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3028__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3028__count)));
                            vlSelf->__Vfunc_leading_zero32__3028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3028__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3028__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3028__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3028__count)));
                            vlSelf->__Vfunc_leading_zero32__3028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3028__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3028__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3028__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3028__count)));
                            vlSelf->__Vfunc_leading_zero32__3028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3028__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3028__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3028__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3028__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3028__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3028__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3028__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3028__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3040__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3040__part 
                            = vlSelf->__Vfunc_leading_zero32__3040__value;
                        vlSelf->__Vfunc_leading_zero32__3040__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3040__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3040__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3040__count)));
                            vlSelf->__Vfunc_leading_zero32__3040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3040__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3040__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3040__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3040__count)));
                            vlSelf->__Vfunc_leading_zero32__3040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3040__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3040__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3040__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3040__count)));
                            vlSelf->__Vfunc_leading_zero32__3040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3040__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3040__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3040__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3040__count)));
                            vlSelf->__Vfunc_leading_zero32__3040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3040__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3040__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3040__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3040__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3040__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3040__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3040__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3040__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3052__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3052__part 
                            = vlSelf->__Vfunc_leading_zero32__3052__value;
                        vlSelf->__Vfunc_leading_zero32__3052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3052__count)));
                            vlSelf->__Vfunc_leading_zero32__3052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3052__count)));
                            vlSelf->__Vfunc_leading_zero32__3052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3052__count)));
                            vlSelf->__Vfunc_leading_zero32__3052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3052__count)));
                            vlSelf->__Vfunc_leading_zero32__3052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3052__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3064__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3064__part 
                            = vlSelf->__Vfunc_leading_zero32__3064__value;
                        vlSelf->__Vfunc_leading_zero32__3064__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3064__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3064__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3064__count)));
                            vlSelf->__Vfunc_leading_zero32__3064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3064__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3064__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3064__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3064__count)));
                            vlSelf->__Vfunc_leading_zero32__3064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3064__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3064__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3064__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3064__count)));
                            vlSelf->__Vfunc_leading_zero32__3064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3064__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3064__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3064__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3064__count)));
                            vlSelf->__Vfunc_leading_zero32__3064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3064__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3064__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3064__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3064__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3064__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3064__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3064__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3064__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3076__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3076__part 
                            = vlSelf->__Vfunc_leading_zero32__3076__value;
                        vlSelf->__Vfunc_leading_zero32__3076__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3076__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3076__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3076__count)));
                            vlSelf->__Vfunc_leading_zero32__3076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3076__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3076__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3076__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3076__count)));
                            vlSelf->__Vfunc_leading_zero32__3076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3076__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3076__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3076__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3076__count)));
                            vlSelf->__Vfunc_leading_zero32__3076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3076__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3076__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3076__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3076__count)));
                            vlSelf->__Vfunc_leading_zero32__3076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3076__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3076__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3076__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3076__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3076__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3076__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3076__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3076__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3088__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3088__part 
                            = vlSelf->__Vfunc_leading_zero32__3088__value;
                        vlSelf->__Vfunc_leading_zero32__3088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3088__count)));
                            vlSelf->__Vfunc_leading_zero32__3088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3088__count)));
                            vlSelf->__Vfunc_leading_zero32__3088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3088__count)));
                            vlSelf->__Vfunc_leading_zero32__3088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3088__count)));
                            vlSelf->__Vfunc_leading_zero32__3088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3088__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3100__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3100__part 
                            = vlSelf->__Vfunc_leading_zero32__3100__value;
                        vlSelf->__Vfunc_leading_zero32__3100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3100__count)));
                            vlSelf->__Vfunc_leading_zero32__3100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3100__count)));
                            vlSelf->__Vfunc_leading_zero32__3100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3100__count)));
                            vlSelf->__Vfunc_leading_zero32__3100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3100__count)));
                            vlSelf->__Vfunc_leading_zero32__3100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3100__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3112__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3112__part 
                            = vlSelf->__Vfunc_leading_zero32__3112__value;
                        vlSelf->__Vfunc_leading_zero32__3112__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3112__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3112__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3112__count)));
                            vlSelf->__Vfunc_leading_zero32__3112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3112__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3112__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3112__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3112__count)));
                            vlSelf->__Vfunc_leading_zero32__3112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3112__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3112__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3112__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3112__count)));
                            vlSelf->__Vfunc_leading_zero32__3112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3112__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3112__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3112__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3112__count)));
                            vlSelf->__Vfunc_leading_zero32__3112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3112__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3112__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3112__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3112__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3112__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3112__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3112__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3112__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3124__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3124__part 
                            = vlSelf->__Vfunc_leading_zero32__3124__value;
                        vlSelf->__Vfunc_leading_zero32__3124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3136__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3136__part 
                            = vlSelf->__Vfunc_leading_zero32__3136__value;
                        vlSelf->__Vfunc_leading_zero32__3136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3148__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3148__part 
                            = vlSelf->__Vfunc_leading_zero32__3148__value;
                        vlSelf->__Vfunc_leading_zero32__3148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3160__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3160__part 
                            = vlSelf->__Vfunc_leading_zero32__3160__value;
                        vlSelf->__Vfunc_leading_zero32__3160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3172__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3172__part 
                            = vlSelf->__Vfunc_leading_zero32__3172__value;
                        vlSelf->__Vfunc_leading_zero32__3172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3184__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3184__part 
                            = vlSelf->__Vfunc_leading_zero32__3184__value;
                        vlSelf->__Vfunc_leading_zero32__3184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3196__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3196__part 
                            = vlSelf->__Vfunc_leading_zero32__3196__value;
                        vlSelf->__Vfunc_leading_zero32__3196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3208__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3208__part 
                            = vlSelf->__Vfunc_leading_zero32__3208__value;
                        vlSelf->__Vfunc_leading_zero32__3208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3208__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3220__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3220__part 
                            = vlSelf->__Vfunc_leading_zero32__3220__value;
                        vlSelf->__Vfunc_leading_zero32__3220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3220__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3232__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3232__part 
                            = vlSelf->__Vfunc_leading_zero32__3232__value;
                        vlSelf->__Vfunc_leading_zero32__3232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3244__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3244__part 
                            = vlSelf->__Vfunc_leading_zero32__3244__value;
                        vlSelf->__Vfunc_leading_zero32__3244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3244__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3256__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3256__part 
                            = vlSelf->__Vfunc_leading_zero32__3256__value;
                        vlSelf->__Vfunc_leading_zero32__3256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3256__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3268__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3268__part 
                            = vlSelf->__Vfunc_leading_zero32__3268__value;
                        vlSelf->__Vfunc_leading_zero32__3268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3280__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3280__part 
                            = vlSelf->__Vfunc_leading_zero32__3280__value;
                        vlSelf->__Vfunc_leading_zero32__3280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3280__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3292__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3292__part 
                            = vlSelf->__Vfunc_leading_zero32__3292__value;
                        vlSelf->__Vfunc_leading_zero32__3292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3304__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3304__part 
                            = vlSelf->__Vfunc_leading_zero32__3304__value;
                        vlSelf->__Vfunc_leading_zero32__3304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3316__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3316__part 
                            = vlSelf->__Vfunc_leading_zero32__3316__value;
                        vlSelf->__Vfunc_leading_zero32__3316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3316__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3328__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3328__part 
                            = vlSelf->__Vfunc_leading_zero32__3328__value;
                        vlSelf->__Vfunc_leading_zero32__3328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3328__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3340__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3340__part 
                            = vlSelf->__Vfunc_leading_zero32__3340__value;
                        vlSelf->__Vfunc_leading_zero32__3340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3352__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3352__part 
                            = vlSelf->__Vfunc_leading_zero32__3352__value;
                        vlSelf->__Vfunc_leading_zero32__3352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3352__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3364__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3364__part 
                            = vlSelf->__Vfunc_leading_zero32__3364__value;
                        vlSelf->__Vfunc_leading_zero32__3364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3364__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3376__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3376__part 
                            = vlSelf->__Vfunc_leading_zero32__3376__value;
                        vlSelf->__Vfunc_leading_zero32__3376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3376__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3388__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3400__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3412__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3424__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3436__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3448__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3460__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3472__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3484__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3496__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3508__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3520__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3532__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3544__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3556__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3568__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3580__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3592__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3604__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3616__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3628__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3640__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3652__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3664__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3676__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3688__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3700__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3712__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3724__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3736__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3748__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3760__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3772__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3784__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3796__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3808__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3820__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3832__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3844__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3856__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3868__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3880__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3892__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3904__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3916__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3928__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3940__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3952__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3964__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3976__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3988__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4000__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4012__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4024__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4036__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4048__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4060__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4072__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4084__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4096__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4108__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4120__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4132__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4144__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4156__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4168__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4180__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4192__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4204__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4216__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4228__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4240__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4252__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4264__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4276__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4288__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4300__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4312__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4324__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4336__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4348__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4360__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4372__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4384__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4396__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4408__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4420__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4432__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4444__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4456__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4468__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4480__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4492__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4504__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4516__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4528__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4540__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4552__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4564__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4576__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4588__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4600__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4612__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4624__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4636__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4648__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4660__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4672__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4684__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4696__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4708__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4720__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4732__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4744__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4756__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4768__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4780__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4792__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b;
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
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1738__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1738__part 
                            = vlSelf->__Vfunc_leading_zero32__1738__value;
                        vlSelf->__Vfunc_leading_zero32__1738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1738__count)));
                            vlSelf->__Vfunc_leading_zero32__1738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1738__count)));
                            vlSelf->__Vfunc_leading_zero32__1738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1738__count)));
                            vlSelf->__Vfunc_leading_zero32__1738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1738__count)));
                            vlSelf->__Vfunc_leading_zero32__1738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1750__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1750__part 
                            = vlSelf->__Vfunc_leading_zero32__1750__value;
                        vlSelf->__Vfunc_leading_zero32__1750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1750__count)));
                            vlSelf->__Vfunc_leading_zero32__1750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1750__count)));
                            vlSelf->__Vfunc_leading_zero32__1750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1750__count)));
                            vlSelf->__Vfunc_leading_zero32__1750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1750__count)));
                            vlSelf->__Vfunc_leading_zero32__1750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1762__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1762__part 
                            = vlSelf->__Vfunc_leading_zero32__1762__value;
                        vlSelf->__Vfunc_leading_zero32__1762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1762__count)));
                            vlSelf->__Vfunc_leading_zero32__1762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1762__count)));
                            vlSelf->__Vfunc_leading_zero32__1762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1762__count)));
                            vlSelf->__Vfunc_leading_zero32__1762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1762__count)));
                            vlSelf->__Vfunc_leading_zero32__1762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1774__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1774__part 
                            = vlSelf->__Vfunc_leading_zero32__1774__value;
                        vlSelf->__Vfunc_leading_zero32__1774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1774__count)));
                            vlSelf->__Vfunc_leading_zero32__1774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1774__count)));
                            vlSelf->__Vfunc_leading_zero32__1774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1774__count)));
                            vlSelf->__Vfunc_leading_zero32__1774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1774__count)));
                            vlSelf->__Vfunc_leading_zero32__1774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1786__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1786__part 
                            = vlSelf->__Vfunc_leading_zero32__1786__value;
                        vlSelf->__Vfunc_leading_zero32__1786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1786__count)));
                            vlSelf->__Vfunc_leading_zero32__1786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1786__count)));
                            vlSelf->__Vfunc_leading_zero32__1786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1786__count)));
                            vlSelf->__Vfunc_leading_zero32__1786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1786__count)));
                            vlSelf->__Vfunc_leading_zero32__1786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1798__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1798__part 
                            = vlSelf->__Vfunc_leading_zero32__1798__value;
                        vlSelf->__Vfunc_leading_zero32__1798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1798__count)));
                            vlSelf->__Vfunc_leading_zero32__1798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1798__count)));
                            vlSelf->__Vfunc_leading_zero32__1798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1798__count)));
                            vlSelf->__Vfunc_leading_zero32__1798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1798__count)));
                            vlSelf->__Vfunc_leading_zero32__1798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1810__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1810__part 
                            = vlSelf->__Vfunc_leading_zero32__1810__value;
                        vlSelf->__Vfunc_leading_zero32__1810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1810__count)));
                            vlSelf->__Vfunc_leading_zero32__1810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1810__count)));
                            vlSelf->__Vfunc_leading_zero32__1810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1810__count)));
                            vlSelf->__Vfunc_leading_zero32__1810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1810__count)));
                            vlSelf->__Vfunc_leading_zero32__1810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1810__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1822__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1822__part 
                            = vlSelf->__Vfunc_leading_zero32__1822__value;
                        vlSelf->__Vfunc_leading_zero32__1822__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1822__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1822__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1822__count)));
                            vlSelf->__Vfunc_leading_zero32__1822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1822__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1822__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1822__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1822__count)));
                            vlSelf->__Vfunc_leading_zero32__1822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1822__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1822__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1822__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1822__count)));
                            vlSelf->__Vfunc_leading_zero32__1822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1822__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1822__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1822__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1822__count)));
                            vlSelf->__Vfunc_leading_zero32__1822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1822__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1822__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1822__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1822__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1822__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1822__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1822__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1822__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1834__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1834__part 
                            = vlSelf->__Vfunc_leading_zero32__1834__value;
                        vlSelf->__Vfunc_leading_zero32__1834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1834__count)));
                            vlSelf->__Vfunc_leading_zero32__1834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1834__count)));
                            vlSelf->__Vfunc_leading_zero32__1834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1834__count)));
                            vlSelf->__Vfunc_leading_zero32__1834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1834__count)));
                            vlSelf->__Vfunc_leading_zero32__1834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1834__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1846__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1846__part 
                            = vlSelf->__Vfunc_leading_zero32__1846__value;
                        vlSelf->__Vfunc_leading_zero32__1846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1846__count)));
                            vlSelf->__Vfunc_leading_zero32__1846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1846__count)));
                            vlSelf->__Vfunc_leading_zero32__1846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1846__count)));
                            vlSelf->__Vfunc_leading_zero32__1846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1846__count)));
                            vlSelf->__Vfunc_leading_zero32__1846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1846__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1858__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1858__part 
                            = vlSelf->__Vfunc_leading_zero32__1858__value;
                        vlSelf->__Vfunc_leading_zero32__1858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1858__count)));
                            vlSelf->__Vfunc_leading_zero32__1858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1858__count)));
                            vlSelf->__Vfunc_leading_zero32__1858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1858__count)));
                            vlSelf->__Vfunc_leading_zero32__1858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1858__count)));
                            vlSelf->__Vfunc_leading_zero32__1858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1858__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1870__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1870__part 
                            = vlSelf->__Vfunc_leading_zero32__1870__value;
                        vlSelf->__Vfunc_leading_zero32__1870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1870__count)));
                            vlSelf->__Vfunc_leading_zero32__1870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1870__count)));
                            vlSelf->__Vfunc_leading_zero32__1870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1870__count)));
                            vlSelf->__Vfunc_leading_zero32__1870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1870__count)));
                            vlSelf->__Vfunc_leading_zero32__1870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1870__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1882__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1882__part 
                            = vlSelf->__Vfunc_leading_zero32__1882__value;
                        vlSelf->__Vfunc_leading_zero32__1882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1882__count)));
                            vlSelf->__Vfunc_leading_zero32__1882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1882__count)));
                            vlSelf->__Vfunc_leading_zero32__1882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1882__count)));
                            vlSelf->__Vfunc_leading_zero32__1882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1882__count)));
                            vlSelf->__Vfunc_leading_zero32__1882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1882__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1894__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1894__part 
                            = vlSelf->__Vfunc_leading_zero32__1894__value;
                        vlSelf->__Vfunc_leading_zero32__1894__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1894__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1894__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1894__count)));
                            vlSelf->__Vfunc_leading_zero32__1894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1894__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1894__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1894__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1894__count)));
                            vlSelf->__Vfunc_leading_zero32__1894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1894__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1894__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1894__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1894__count)));
                            vlSelf->__Vfunc_leading_zero32__1894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1894__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1894__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1894__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1894__count)));
                            vlSelf->__Vfunc_leading_zero32__1894__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1894__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1894__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1894__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1894__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1894__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1894__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1894__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1894__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1906__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1906__part 
                            = vlSelf->__Vfunc_leading_zero32__1906__value;
                        vlSelf->__Vfunc_leading_zero32__1906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1906__count)));
                            vlSelf->__Vfunc_leading_zero32__1906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1906__count)));
                            vlSelf->__Vfunc_leading_zero32__1906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1906__count)));
                            vlSelf->__Vfunc_leading_zero32__1906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1906__count)));
                            vlSelf->__Vfunc_leading_zero32__1906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1918__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1918__part 
                            = vlSelf->__Vfunc_leading_zero32__1918__value;
                        vlSelf->__Vfunc_leading_zero32__1918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1918__count)));
                            vlSelf->__Vfunc_leading_zero32__1918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1918__count)));
                            vlSelf->__Vfunc_leading_zero32__1918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1918__count)));
                            vlSelf->__Vfunc_leading_zero32__1918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1918__count)));
                            vlSelf->__Vfunc_leading_zero32__1918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1930__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1930__part 
                            = vlSelf->__Vfunc_leading_zero32__1930__value;
                        vlSelf->__Vfunc_leading_zero32__1930__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1930__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1930__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1930__count)));
                            vlSelf->__Vfunc_leading_zero32__1930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1930__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1930__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1930__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1930__count)));
                            vlSelf->__Vfunc_leading_zero32__1930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1930__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1930__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1930__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1930__count)));
                            vlSelf->__Vfunc_leading_zero32__1930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1930__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1930__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1930__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1930__count)));
                            vlSelf->__Vfunc_leading_zero32__1930__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1930__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1930__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1930__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1930__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1930__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1930__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1930__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1930__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1942__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1942__part 
                            = vlSelf->__Vfunc_leading_zero32__1942__value;
                        vlSelf->__Vfunc_leading_zero32__1942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1942__count)));
                            vlSelf->__Vfunc_leading_zero32__1942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1942__count)));
                            vlSelf->__Vfunc_leading_zero32__1942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1942__count)));
                            vlSelf->__Vfunc_leading_zero32__1942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1942__count)));
                            vlSelf->__Vfunc_leading_zero32__1942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1954__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1954__part 
                            = vlSelf->__Vfunc_leading_zero32__1954__value;
                        vlSelf->__Vfunc_leading_zero32__1954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1954__count)));
                            vlSelf->__Vfunc_leading_zero32__1954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1954__count)));
                            vlSelf->__Vfunc_leading_zero32__1954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1954__count)));
                            vlSelf->__Vfunc_leading_zero32__1954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1954__count)));
                            vlSelf->__Vfunc_leading_zero32__1954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1966__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1966__part 
                            = vlSelf->__Vfunc_leading_zero32__1966__value;
                        vlSelf->__Vfunc_leading_zero32__1966__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1966__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1966__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1966__count)));
                            vlSelf->__Vfunc_leading_zero32__1966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1966__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1966__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1966__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1966__count)));
                            vlSelf->__Vfunc_leading_zero32__1966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1966__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1966__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1966__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1966__count)));
                            vlSelf->__Vfunc_leading_zero32__1966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1966__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1966__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1966__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1966__count)));
                            vlSelf->__Vfunc_leading_zero32__1966__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1966__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1966__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1966__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1966__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1966__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1966__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1966__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1966__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1978__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1978__part 
                            = vlSelf->__Vfunc_leading_zero32__1978__value;
                        vlSelf->__Vfunc_leading_zero32__1978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1978__count)));
                            vlSelf->__Vfunc_leading_zero32__1978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1978__count)));
                            vlSelf->__Vfunc_leading_zero32__1978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1978__count)));
                            vlSelf->__Vfunc_leading_zero32__1978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1978__count)));
                            vlSelf->__Vfunc_leading_zero32__1978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1990__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__1990__part 
                            = vlSelf->__Vfunc_leading_zero32__1990__value;
                        vlSelf->__Vfunc_leading_zero32__1990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1990__count)));
                            vlSelf->__Vfunc_leading_zero32__1990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1990__count)));
                            vlSelf->__Vfunc_leading_zero32__1990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1990__count)));
                            vlSelf->__Vfunc_leading_zero32__1990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1990__count)));
                            vlSelf->__Vfunc_leading_zero32__1990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1990__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2002__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2002__part 
                            = vlSelf->__Vfunc_leading_zero32__2002__value;
                        vlSelf->__Vfunc_leading_zero32__2002__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2002__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2002__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2002__count)));
                            vlSelf->__Vfunc_leading_zero32__2002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2002__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2002__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2002__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2002__count)));
                            vlSelf->__Vfunc_leading_zero32__2002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2002__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2002__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2002__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2002__count)));
                            vlSelf->__Vfunc_leading_zero32__2002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2002__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2002__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2002__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2002__count)));
                            vlSelf->__Vfunc_leading_zero32__2002__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2002__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2002__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2002__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2002__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2002__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2002__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2002__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2002__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2014__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2014__part 
                            = vlSelf->__Vfunc_leading_zero32__2014__value;
                        vlSelf->__Vfunc_leading_zero32__2014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2014__count)));
                            vlSelf->__Vfunc_leading_zero32__2014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2014__count)));
                            vlSelf->__Vfunc_leading_zero32__2014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2014__count)));
                            vlSelf->__Vfunc_leading_zero32__2014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2014__count)));
                            vlSelf->__Vfunc_leading_zero32__2014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2026__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2026__part 
                            = vlSelf->__Vfunc_leading_zero32__2026__value;
                        vlSelf->__Vfunc_leading_zero32__2026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2026__count)));
                            vlSelf->__Vfunc_leading_zero32__2026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2026__count)));
                            vlSelf->__Vfunc_leading_zero32__2026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2026__count)));
                            vlSelf->__Vfunc_leading_zero32__2026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2026__count)));
                            vlSelf->__Vfunc_leading_zero32__2026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2026__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2038__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2038__part 
                            = vlSelf->__Vfunc_leading_zero32__2038__value;
                        vlSelf->__Vfunc_leading_zero32__2038__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2038__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2038__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2038__count)));
                            vlSelf->__Vfunc_leading_zero32__2038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2038__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2038__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2038__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2038__count)));
                            vlSelf->__Vfunc_leading_zero32__2038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2038__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2038__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2038__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2038__count)));
                            vlSelf->__Vfunc_leading_zero32__2038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2038__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2038__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2038__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2038__count)));
                            vlSelf->__Vfunc_leading_zero32__2038__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2038__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2038__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2038__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2038__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2038__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2038__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2038__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2038__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2050__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2050__part 
                            = vlSelf->__Vfunc_leading_zero32__2050__value;
                        vlSelf->__Vfunc_leading_zero32__2050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2050__count)));
                            vlSelf->__Vfunc_leading_zero32__2050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2050__count)));
                            vlSelf->__Vfunc_leading_zero32__2050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2050__count)));
                            vlSelf->__Vfunc_leading_zero32__2050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2050__count)));
                            vlSelf->__Vfunc_leading_zero32__2050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2062__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2062__part 
                            = vlSelf->__Vfunc_leading_zero32__2062__value;
                        vlSelf->__Vfunc_leading_zero32__2062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2062__count)));
                            vlSelf->__Vfunc_leading_zero32__2062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2062__count)));
                            vlSelf->__Vfunc_leading_zero32__2062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2062__count)));
                            vlSelf->__Vfunc_leading_zero32__2062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2062__count)));
                            vlSelf->__Vfunc_leading_zero32__2062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2062__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2074__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2074__part 
                            = vlSelf->__Vfunc_leading_zero32__2074__value;
                        vlSelf->__Vfunc_leading_zero32__2074__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2074__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2074__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2074__count)));
                            vlSelf->__Vfunc_leading_zero32__2074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2074__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2074__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2074__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2074__count)));
                            vlSelf->__Vfunc_leading_zero32__2074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2074__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2074__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2074__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2074__count)));
                            vlSelf->__Vfunc_leading_zero32__2074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2074__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2074__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2074__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2074__count)));
                            vlSelf->__Vfunc_leading_zero32__2074__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2074__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2074__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2074__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2074__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2074__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2074__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2074__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2074__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2086__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2086__part 
                            = vlSelf->__Vfunc_leading_zero32__2086__value;
                        vlSelf->__Vfunc_leading_zero32__2086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2086__count)));
                            vlSelf->__Vfunc_leading_zero32__2086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2086__count)));
                            vlSelf->__Vfunc_leading_zero32__2086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2086__count)));
                            vlSelf->__Vfunc_leading_zero32__2086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2086__count)));
                            vlSelf->__Vfunc_leading_zero32__2086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2098__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2098__part 
                            = vlSelf->__Vfunc_leading_zero32__2098__value;
                        vlSelf->__Vfunc_leading_zero32__2098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2098__count)));
                            vlSelf->__Vfunc_leading_zero32__2098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2098__count)));
                            vlSelf->__Vfunc_leading_zero32__2098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2098__count)));
                            vlSelf->__Vfunc_leading_zero32__2098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2098__count)));
                            vlSelf->__Vfunc_leading_zero32__2098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2098__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2110__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2110__part 
                            = vlSelf->__Vfunc_leading_zero32__2110__value;
                        vlSelf->__Vfunc_leading_zero32__2110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2110__count)));
                            vlSelf->__Vfunc_leading_zero32__2110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2110__count)));
                            vlSelf->__Vfunc_leading_zero32__2110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2110__count)));
                            vlSelf->__Vfunc_leading_zero32__2110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2110__count)));
                            vlSelf->__Vfunc_leading_zero32__2110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2110__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2122__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2122__part 
                            = vlSelf->__Vfunc_leading_zero32__2122__value;
                        vlSelf->__Vfunc_leading_zero32__2122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2122__count)));
                            vlSelf->__Vfunc_leading_zero32__2122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2122__count)));
                            vlSelf->__Vfunc_leading_zero32__2122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2122__count)));
                            vlSelf->__Vfunc_leading_zero32__2122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2122__count)));
                            vlSelf->__Vfunc_leading_zero32__2122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2134__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2134__part 
                            = vlSelf->__Vfunc_leading_zero32__2134__value;
                        vlSelf->__Vfunc_leading_zero32__2134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2134__count)));
                            vlSelf->__Vfunc_leading_zero32__2134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2134__count)));
                            vlSelf->__Vfunc_leading_zero32__2134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2134__count)));
                            vlSelf->__Vfunc_leading_zero32__2134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2134__count)));
                            vlSelf->__Vfunc_leading_zero32__2134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2134__Vfuncout)) 
                             - (IData)(8U))));
}
