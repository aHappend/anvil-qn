// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__1(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5018__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5018__part 
                            = vlSelf->__Vfunc_leading_zero32__5018__value;
                        vlSelf->__Vfunc_leading_zero32__5018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5018__count)));
                            vlSelf->__Vfunc_leading_zero32__5018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5018__count)));
                            vlSelf->__Vfunc_leading_zero32__5018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5018__count)));
                            vlSelf->__Vfunc_leading_zero32__5018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5018__count)));
                            vlSelf->__Vfunc_leading_zero32__5018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5018__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5024__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5024__part 
                            = vlSelf->__Vfunc_leading_zero32__5024__value;
                        vlSelf->__Vfunc_leading_zero32__5024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5024__count)));
                            vlSelf->__Vfunc_leading_zero32__5024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5024__count)));
                            vlSelf->__Vfunc_leading_zero32__5024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5024__count)));
                            vlSelf->__Vfunc_leading_zero32__5024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5024__count)));
                            vlSelf->__Vfunc_leading_zero32__5024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5024__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5030__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5030__part 
                            = vlSelf->__Vfunc_leading_zero32__5030__value;
                        vlSelf->__Vfunc_leading_zero32__5030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5030__count)));
                            vlSelf->__Vfunc_leading_zero32__5030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5030__count)));
                            vlSelf->__Vfunc_leading_zero32__5030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5030__count)));
                            vlSelf->__Vfunc_leading_zero32__5030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5030__count)));
                            vlSelf->__Vfunc_leading_zero32__5030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5030__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5036__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5036__part 
                            = vlSelf->__Vfunc_leading_zero32__5036__value;
                        vlSelf->__Vfunc_leading_zero32__5036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5036__count)));
                            vlSelf->__Vfunc_leading_zero32__5036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5036__count)));
                            vlSelf->__Vfunc_leading_zero32__5036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5036__count)));
                            vlSelf->__Vfunc_leading_zero32__5036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5036__count)));
                            vlSelf->__Vfunc_leading_zero32__5036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5036__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5042__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5042__part 
                            = vlSelf->__Vfunc_leading_zero32__5042__value;
                        vlSelf->__Vfunc_leading_zero32__5042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5042__count)));
                            vlSelf->__Vfunc_leading_zero32__5042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5042__count)));
                            vlSelf->__Vfunc_leading_zero32__5042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5042__count)));
                            vlSelf->__Vfunc_leading_zero32__5042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5042__count)));
                            vlSelf->__Vfunc_leading_zero32__5042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5042__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5048__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5048__part 
                            = vlSelf->__Vfunc_leading_zero32__5048__value;
                        vlSelf->__Vfunc_leading_zero32__5048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5048__count)));
                            vlSelf->__Vfunc_leading_zero32__5048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5048__count)));
                            vlSelf->__Vfunc_leading_zero32__5048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5048__count)));
                            vlSelf->__Vfunc_leading_zero32__5048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5048__count)));
                            vlSelf->__Vfunc_leading_zero32__5048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5048__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5054__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5054__part 
                            = vlSelf->__Vfunc_leading_zero32__5054__value;
                        vlSelf->__Vfunc_leading_zero32__5054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5054__count)));
                            vlSelf->__Vfunc_leading_zero32__5054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5054__count)));
                            vlSelf->__Vfunc_leading_zero32__5054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5054__count)));
                            vlSelf->__Vfunc_leading_zero32__5054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5054__count)));
                            vlSelf->__Vfunc_leading_zero32__5054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5054__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5060__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5060__part 
                            = vlSelf->__Vfunc_leading_zero32__5060__value;
                        vlSelf->__Vfunc_leading_zero32__5060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5060__count)));
                            vlSelf->__Vfunc_leading_zero32__5060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5060__count)));
                            vlSelf->__Vfunc_leading_zero32__5060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5060__count)));
                            vlSelf->__Vfunc_leading_zero32__5060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5060__count)));
                            vlSelf->__Vfunc_leading_zero32__5060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5060__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5066__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5066__part 
                            = vlSelf->__Vfunc_leading_zero32__5066__value;
                        vlSelf->__Vfunc_leading_zero32__5066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5066__count)));
                            vlSelf->__Vfunc_leading_zero32__5066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5066__count)));
                            vlSelf->__Vfunc_leading_zero32__5066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5066__count)));
                            vlSelf->__Vfunc_leading_zero32__5066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5066__count)));
                            vlSelf->__Vfunc_leading_zero32__5066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5066__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5072__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5072__part 
                            = vlSelf->__Vfunc_leading_zero32__5072__value;
                        vlSelf->__Vfunc_leading_zero32__5072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5072__count)));
                            vlSelf->__Vfunc_leading_zero32__5072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5072__count)));
                            vlSelf->__Vfunc_leading_zero32__5072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5072__count)));
                            vlSelf->__Vfunc_leading_zero32__5072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5072__count)));
                            vlSelf->__Vfunc_leading_zero32__5072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5072__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5078__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5078__part 
                            = vlSelf->__Vfunc_leading_zero32__5078__value;
                        vlSelf->__Vfunc_leading_zero32__5078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5078__count)));
                            vlSelf->__Vfunc_leading_zero32__5078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5078__count)));
                            vlSelf->__Vfunc_leading_zero32__5078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5078__count)));
                            vlSelf->__Vfunc_leading_zero32__5078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5078__count)));
                            vlSelf->__Vfunc_leading_zero32__5078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5078__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5084__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5084__part 
                            = vlSelf->__Vfunc_leading_zero32__5084__value;
                        vlSelf->__Vfunc_leading_zero32__5084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5084__count)));
                            vlSelf->__Vfunc_leading_zero32__5084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5084__count)));
                            vlSelf->__Vfunc_leading_zero32__5084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5084__count)));
                            vlSelf->__Vfunc_leading_zero32__5084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5084__count)));
                            vlSelf->__Vfunc_leading_zero32__5084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5084__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5090__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5090__part 
                            = vlSelf->__Vfunc_leading_zero32__5090__value;
                        vlSelf->__Vfunc_leading_zero32__5090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5090__count)));
                            vlSelf->__Vfunc_leading_zero32__5090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5090__count)));
                            vlSelf->__Vfunc_leading_zero32__5090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5090__count)));
                            vlSelf->__Vfunc_leading_zero32__5090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5090__count)));
                            vlSelf->__Vfunc_leading_zero32__5090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5090__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5096__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5096__part 
                            = vlSelf->__Vfunc_leading_zero32__5096__value;
                        vlSelf->__Vfunc_leading_zero32__5096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5096__count)));
                            vlSelf->__Vfunc_leading_zero32__5096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5096__count)));
                            vlSelf->__Vfunc_leading_zero32__5096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5096__count)));
                            vlSelf->__Vfunc_leading_zero32__5096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5096__count)));
                            vlSelf->__Vfunc_leading_zero32__5096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5096__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5102__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5102__part 
                            = vlSelf->__Vfunc_leading_zero32__5102__value;
                        vlSelf->__Vfunc_leading_zero32__5102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5102__count)));
                            vlSelf->__Vfunc_leading_zero32__5102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5102__count)));
                            vlSelf->__Vfunc_leading_zero32__5102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5102__count)));
                            vlSelf->__Vfunc_leading_zero32__5102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5102__count)));
                            vlSelf->__Vfunc_leading_zero32__5102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5102__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5108__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5108__part 
                            = vlSelf->__Vfunc_leading_zero32__5108__value;
                        vlSelf->__Vfunc_leading_zero32__5108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5108__count)));
                            vlSelf->__Vfunc_leading_zero32__5108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5108__count)));
                            vlSelf->__Vfunc_leading_zero32__5108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5108__count)));
                            vlSelf->__Vfunc_leading_zero32__5108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5108__count)));
                            vlSelf->__Vfunc_leading_zero32__5108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5108__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5114__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5114__part 
                            = vlSelf->__Vfunc_leading_zero32__5114__value;
                        vlSelf->__Vfunc_leading_zero32__5114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5114__count)));
                            vlSelf->__Vfunc_leading_zero32__5114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5114__count)));
                            vlSelf->__Vfunc_leading_zero32__5114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5114__count)));
                            vlSelf->__Vfunc_leading_zero32__5114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5114__count)));
                            vlSelf->__Vfunc_leading_zero32__5114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5114__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5120__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5120__part 
                            = vlSelf->__Vfunc_leading_zero32__5120__value;
                        vlSelf->__Vfunc_leading_zero32__5120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5120__count)));
                            vlSelf->__Vfunc_leading_zero32__5120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5120__count)));
                            vlSelf->__Vfunc_leading_zero32__5120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5120__count)));
                            vlSelf->__Vfunc_leading_zero32__5120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5120__count)));
                            vlSelf->__Vfunc_leading_zero32__5120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5120__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5126__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5126__part 
                            = vlSelf->__Vfunc_leading_zero32__5126__value;
                        vlSelf->__Vfunc_leading_zero32__5126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5126__count)));
                            vlSelf->__Vfunc_leading_zero32__5126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5126__count)));
                            vlSelf->__Vfunc_leading_zero32__5126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5126__count)));
                            vlSelf->__Vfunc_leading_zero32__5126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5126__count)));
                            vlSelf->__Vfunc_leading_zero32__5126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5126__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5132__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5132__part 
                            = vlSelf->__Vfunc_leading_zero32__5132__value;
                        vlSelf->__Vfunc_leading_zero32__5132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5132__count)));
                            vlSelf->__Vfunc_leading_zero32__5132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5132__count)));
                            vlSelf->__Vfunc_leading_zero32__5132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5132__count)));
                            vlSelf->__Vfunc_leading_zero32__5132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5132__count)));
                            vlSelf->__Vfunc_leading_zero32__5132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5132__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5138__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5138__part 
                            = vlSelf->__Vfunc_leading_zero32__5138__value;
                        vlSelf->__Vfunc_leading_zero32__5138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5138__count)));
                            vlSelf->__Vfunc_leading_zero32__5138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5138__count)));
                            vlSelf->__Vfunc_leading_zero32__5138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5138__count)));
                            vlSelf->__Vfunc_leading_zero32__5138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5138__count)));
                            vlSelf->__Vfunc_leading_zero32__5138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5138__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5144__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5144__part 
                            = vlSelf->__Vfunc_leading_zero32__5144__value;
                        vlSelf->__Vfunc_leading_zero32__5144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5144__count)));
                            vlSelf->__Vfunc_leading_zero32__5144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5144__count)));
                            vlSelf->__Vfunc_leading_zero32__5144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5144__count)));
                            vlSelf->__Vfunc_leading_zero32__5144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5144__count)));
                            vlSelf->__Vfunc_leading_zero32__5144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5144__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5150__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5150__part 
                            = vlSelf->__Vfunc_leading_zero32__5150__value;
                        vlSelf->__Vfunc_leading_zero32__5150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5150__count)));
                            vlSelf->__Vfunc_leading_zero32__5150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5150__count)));
                            vlSelf->__Vfunc_leading_zero32__5150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5150__count)));
                            vlSelf->__Vfunc_leading_zero32__5150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5150__count)));
                            vlSelf->__Vfunc_leading_zero32__5150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5150__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5156__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5156__part 
                            = vlSelf->__Vfunc_leading_zero32__5156__value;
                        vlSelf->__Vfunc_leading_zero32__5156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5156__count)));
                            vlSelf->__Vfunc_leading_zero32__5156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5156__count)));
                            vlSelf->__Vfunc_leading_zero32__5156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5156__count)));
                            vlSelf->__Vfunc_leading_zero32__5156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5156__count)));
                            vlSelf->__Vfunc_leading_zero32__5156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5156__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5162__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5162__part 
                            = vlSelf->__Vfunc_leading_zero32__5162__value;
                        vlSelf->__Vfunc_leading_zero32__5162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5162__count)));
                            vlSelf->__Vfunc_leading_zero32__5162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5162__count)));
                            vlSelf->__Vfunc_leading_zero32__5162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5162__count)));
                            vlSelf->__Vfunc_leading_zero32__5162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5162__count)));
                            vlSelf->__Vfunc_leading_zero32__5162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5162__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5168__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5168__part 
                            = vlSelf->__Vfunc_leading_zero32__5168__value;
                        vlSelf->__Vfunc_leading_zero32__5168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5168__count)));
                            vlSelf->__Vfunc_leading_zero32__5168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5168__count)));
                            vlSelf->__Vfunc_leading_zero32__5168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5168__count)));
                            vlSelf->__Vfunc_leading_zero32__5168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5168__count)));
                            vlSelf->__Vfunc_leading_zero32__5168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5168__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5174__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5174__part 
                            = vlSelf->__Vfunc_leading_zero32__5174__value;
                        vlSelf->__Vfunc_leading_zero32__5174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5174__count)));
                            vlSelf->__Vfunc_leading_zero32__5174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5174__count)));
                            vlSelf->__Vfunc_leading_zero32__5174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5174__count)));
                            vlSelf->__Vfunc_leading_zero32__5174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5174__count)));
                            vlSelf->__Vfunc_leading_zero32__5174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5174__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5180__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5180__part 
                            = vlSelf->__Vfunc_leading_zero32__5180__value;
                        vlSelf->__Vfunc_leading_zero32__5180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5180__count)));
                            vlSelf->__Vfunc_leading_zero32__5180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5180__count)));
                            vlSelf->__Vfunc_leading_zero32__5180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5180__count)));
                            vlSelf->__Vfunc_leading_zero32__5180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5180__count)));
                            vlSelf->__Vfunc_leading_zero32__5180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5180__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5186__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5186__part 
                            = vlSelf->__Vfunc_leading_zero32__5186__value;
                        vlSelf->__Vfunc_leading_zero32__5186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5186__count)));
                            vlSelf->__Vfunc_leading_zero32__5186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5186__count)));
                            vlSelf->__Vfunc_leading_zero32__5186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5186__count)));
                            vlSelf->__Vfunc_leading_zero32__5186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5186__count)));
                            vlSelf->__Vfunc_leading_zero32__5186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5186__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5192__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5192__part 
                            = vlSelf->__Vfunc_leading_zero32__5192__value;
                        vlSelf->__Vfunc_leading_zero32__5192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5192__count)));
                            vlSelf->__Vfunc_leading_zero32__5192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5192__count)));
                            vlSelf->__Vfunc_leading_zero32__5192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5192__count)));
                            vlSelf->__Vfunc_leading_zero32__5192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5192__count)));
                            vlSelf->__Vfunc_leading_zero32__5192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5192__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5198__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5198__part 
                            = vlSelf->__Vfunc_leading_zero32__5198__value;
                        vlSelf->__Vfunc_leading_zero32__5198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5198__count)));
                            vlSelf->__Vfunc_leading_zero32__5198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5198__count)));
                            vlSelf->__Vfunc_leading_zero32__5198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5198__count)));
                            vlSelf->__Vfunc_leading_zero32__5198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5198__count)));
                            vlSelf->__Vfunc_leading_zero32__5198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5198__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5204__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5204__part 
                            = vlSelf->__Vfunc_leading_zero32__5204__value;
                        vlSelf->__Vfunc_leading_zero32__5204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5204__count)));
                            vlSelf->__Vfunc_leading_zero32__5204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5204__count)));
                            vlSelf->__Vfunc_leading_zero32__5204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5204__count)));
                            vlSelf->__Vfunc_leading_zero32__5204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5204__count)));
                            vlSelf->__Vfunc_leading_zero32__5204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5204__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5210__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5210__part 
                            = vlSelf->__Vfunc_leading_zero32__5210__value;
                        vlSelf->__Vfunc_leading_zero32__5210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5210__count)));
                            vlSelf->__Vfunc_leading_zero32__5210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5210__count)));
                            vlSelf->__Vfunc_leading_zero32__5210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5210__count)));
                            vlSelf->__Vfunc_leading_zero32__5210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5210__count)));
                            vlSelf->__Vfunc_leading_zero32__5210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5210__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5216__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5216__part 
                            = vlSelf->__Vfunc_leading_zero32__5216__value;
                        vlSelf->__Vfunc_leading_zero32__5216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5216__count)));
                            vlSelf->__Vfunc_leading_zero32__5216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5216__count)));
                            vlSelf->__Vfunc_leading_zero32__5216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5216__count)));
                            vlSelf->__Vfunc_leading_zero32__5216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5216__count)));
                            vlSelf->__Vfunc_leading_zero32__5216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5216__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5222__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5222__part 
                            = vlSelf->__Vfunc_leading_zero32__5222__value;
                        vlSelf->__Vfunc_leading_zero32__5222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5222__count)));
                            vlSelf->__Vfunc_leading_zero32__5222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5222__count)));
                            vlSelf->__Vfunc_leading_zero32__5222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5222__count)));
                            vlSelf->__Vfunc_leading_zero32__5222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5222__count)));
                            vlSelf->__Vfunc_leading_zero32__5222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5222__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5228__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5228__part 
                            = vlSelf->__Vfunc_leading_zero32__5228__value;
                        vlSelf->__Vfunc_leading_zero32__5228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5228__count)));
                            vlSelf->__Vfunc_leading_zero32__5228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5228__count)));
                            vlSelf->__Vfunc_leading_zero32__5228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5228__count)));
                            vlSelf->__Vfunc_leading_zero32__5228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5228__count)));
                            vlSelf->__Vfunc_leading_zero32__5228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5228__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5234__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5234__part 
                            = vlSelf->__Vfunc_leading_zero32__5234__value;
                        vlSelf->__Vfunc_leading_zero32__5234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5234__count)));
                            vlSelf->__Vfunc_leading_zero32__5234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5234__count)));
                            vlSelf->__Vfunc_leading_zero32__5234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5234__count)));
                            vlSelf->__Vfunc_leading_zero32__5234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5234__count)));
                            vlSelf->__Vfunc_leading_zero32__5234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5234__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5240__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5240__part 
                            = vlSelf->__Vfunc_leading_zero32__5240__value;
                        vlSelf->__Vfunc_leading_zero32__5240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5240__count)));
                            vlSelf->__Vfunc_leading_zero32__5240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5240__count)));
                            vlSelf->__Vfunc_leading_zero32__5240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5240__count)));
                            vlSelf->__Vfunc_leading_zero32__5240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5240__count)));
                            vlSelf->__Vfunc_leading_zero32__5240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5240__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5246__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5246__part 
                            = vlSelf->__Vfunc_leading_zero32__5246__value;
                        vlSelf->__Vfunc_leading_zero32__5246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5246__count)));
                            vlSelf->__Vfunc_leading_zero32__5246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5246__count)));
                            vlSelf->__Vfunc_leading_zero32__5246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5246__count)));
                            vlSelf->__Vfunc_leading_zero32__5246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5246__count)));
                            vlSelf->__Vfunc_leading_zero32__5246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5246__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5252__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5252__part 
                            = vlSelf->__Vfunc_leading_zero32__5252__value;
                        vlSelf->__Vfunc_leading_zero32__5252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5252__count)));
                            vlSelf->__Vfunc_leading_zero32__5252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5252__count)));
                            vlSelf->__Vfunc_leading_zero32__5252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5252__count)));
                            vlSelf->__Vfunc_leading_zero32__5252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5252__count)));
                            vlSelf->__Vfunc_leading_zero32__5252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5252__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5258__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5258__part 
                            = vlSelf->__Vfunc_leading_zero32__5258__value;
                        vlSelf->__Vfunc_leading_zero32__5258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5258__count)));
                            vlSelf->__Vfunc_leading_zero32__5258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5258__count)));
                            vlSelf->__Vfunc_leading_zero32__5258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5258__count)));
                            vlSelf->__Vfunc_leading_zero32__5258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5258__count)));
                            vlSelf->__Vfunc_leading_zero32__5258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5258__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5264__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5264__part 
                            = vlSelf->__Vfunc_leading_zero32__5264__value;
                        vlSelf->__Vfunc_leading_zero32__5264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5264__count)));
                            vlSelf->__Vfunc_leading_zero32__5264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5264__count)));
                            vlSelf->__Vfunc_leading_zero32__5264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5264__count)));
                            vlSelf->__Vfunc_leading_zero32__5264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5264__count)));
                            vlSelf->__Vfunc_leading_zero32__5264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5264__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5270__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5270__part 
                            = vlSelf->__Vfunc_leading_zero32__5270__value;
                        vlSelf->__Vfunc_leading_zero32__5270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5270__count)));
                            vlSelf->__Vfunc_leading_zero32__5270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5270__count)));
                            vlSelf->__Vfunc_leading_zero32__5270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5270__count)));
                            vlSelf->__Vfunc_leading_zero32__5270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5270__count)));
                            vlSelf->__Vfunc_leading_zero32__5270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5270__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5276__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5276__part 
                            = vlSelf->__Vfunc_leading_zero32__5276__value;
                        vlSelf->__Vfunc_leading_zero32__5276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5276__count)));
                            vlSelf->__Vfunc_leading_zero32__5276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5276__count)));
                            vlSelf->__Vfunc_leading_zero32__5276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5276__count)));
                            vlSelf->__Vfunc_leading_zero32__5276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5276__count)));
                            vlSelf->__Vfunc_leading_zero32__5276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5276__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5282__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5282__part 
                            = vlSelf->__Vfunc_leading_zero32__5282__value;
                        vlSelf->__Vfunc_leading_zero32__5282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5282__count)));
                            vlSelf->__Vfunc_leading_zero32__5282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5282__count)));
                            vlSelf->__Vfunc_leading_zero32__5282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5282__count)));
                            vlSelf->__Vfunc_leading_zero32__5282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5282__count)));
                            vlSelf->__Vfunc_leading_zero32__5282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5282__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5288__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5288__part 
                            = vlSelf->__Vfunc_leading_zero32__5288__value;
                        vlSelf->__Vfunc_leading_zero32__5288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5288__count)));
                            vlSelf->__Vfunc_leading_zero32__5288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5288__count)));
                            vlSelf->__Vfunc_leading_zero32__5288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5288__count)));
                            vlSelf->__Vfunc_leading_zero32__5288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5288__count)));
                            vlSelf->__Vfunc_leading_zero32__5288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5288__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5294__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5294__part 
                            = vlSelf->__Vfunc_leading_zero32__5294__value;
                        vlSelf->__Vfunc_leading_zero32__5294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5294__count)));
                            vlSelf->__Vfunc_leading_zero32__5294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5294__count)));
                            vlSelf->__Vfunc_leading_zero32__5294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5294__count)));
                            vlSelf->__Vfunc_leading_zero32__5294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5294__count)));
                            vlSelf->__Vfunc_leading_zero32__5294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5294__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5300__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5300__part 
                            = vlSelf->__Vfunc_leading_zero32__5300__value;
                        vlSelf->__Vfunc_leading_zero32__5300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5300__count)));
                            vlSelf->__Vfunc_leading_zero32__5300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5300__count)));
                            vlSelf->__Vfunc_leading_zero32__5300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5300__count)));
                            vlSelf->__Vfunc_leading_zero32__5300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5300__count)));
                            vlSelf->__Vfunc_leading_zero32__5300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5300__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5306__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5306__part 
                            = vlSelf->__Vfunc_leading_zero32__5306__value;
                        vlSelf->__Vfunc_leading_zero32__5306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5306__count)));
                            vlSelf->__Vfunc_leading_zero32__5306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5306__count)));
                            vlSelf->__Vfunc_leading_zero32__5306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5306__count)));
                            vlSelf->__Vfunc_leading_zero32__5306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5306__count)));
                            vlSelf->__Vfunc_leading_zero32__5306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5306__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5312__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5312__part 
                            = vlSelf->__Vfunc_leading_zero32__5312__value;
                        vlSelf->__Vfunc_leading_zero32__5312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5312__count)));
                            vlSelf->__Vfunc_leading_zero32__5312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5312__count)));
                            vlSelf->__Vfunc_leading_zero32__5312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5312__count)));
                            vlSelf->__Vfunc_leading_zero32__5312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5312__count)));
                            vlSelf->__Vfunc_leading_zero32__5312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5312__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5318__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5318__part 
                            = vlSelf->__Vfunc_leading_zero32__5318__value;
                        vlSelf->__Vfunc_leading_zero32__5318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5318__count)));
                            vlSelf->__Vfunc_leading_zero32__5318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5318__count)));
                            vlSelf->__Vfunc_leading_zero32__5318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5318__count)));
                            vlSelf->__Vfunc_leading_zero32__5318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5318__count)));
                            vlSelf->__Vfunc_leading_zero32__5318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5318__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5324__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5324__part 
                            = vlSelf->__Vfunc_leading_zero32__5324__value;
                        vlSelf->__Vfunc_leading_zero32__5324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5324__count)));
                            vlSelf->__Vfunc_leading_zero32__5324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5324__count)));
                            vlSelf->__Vfunc_leading_zero32__5324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5324__count)));
                            vlSelf->__Vfunc_leading_zero32__5324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5324__count)));
                            vlSelf->__Vfunc_leading_zero32__5324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5324__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5330__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5330__part 
                            = vlSelf->__Vfunc_leading_zero32__5330__value;
                        vlSelf->__Vfunc_leading_zero32__5330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5330__count)));
                            vlSelf->__Vfunc_leading_zero32__5330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5330__count)));
                            vlSelf->__Vfunc_leading_zero32__5330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5330__count)));
                            vlSelf->__Vfunc_leading_zero32__5330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5330__count)));
                            vlSelf->__Vfunc_leading_zero32__5330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5330__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5336__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5336__part 
                            = vlSelf->__Vfunc_leading_zero32__5336__value;
                        vlSelf->__Vfunc_leading_zero32__5336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5336__count)));
                            vlSelf->__Vfunc_leading_zero32__5336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5336__count)));
                            vlSelf->__Vfunc_leading_zero32__5336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5336__count)));
                            vlSelf->__Vfunc_leading_zero32__5336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5336__count)));
                            vlSelf->__Vfunc_leading_zero32__5336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5336__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5342__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5342__part 
                            = vlSelf->__Vfunc_leading_zero32__5342__value;
                        vlSelf->__Vfunc_leading_zero32__5342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5342__count)));
                            vlSelf->__Vfunc_leading_zero32__5342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5342__count)));
                            vlSelf->__Vfunc_leading_zero32__5342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5342__count)));
                            vlSelf->__Vfunc_leading_zero32__5342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5342__count)));
                            vlSelf->__Vfunc_leading_zero32__5342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5342__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5348__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5348__part 
                            = vlSelf->__Vfunc_leading_zero32__5348__value;
                        vlSelf->__Vfunc_leading_zero32__5348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5348__count)));
                            vlSelf->__Vfunc_leading_zero32__5348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5348__count)));
                            vlSelf->__Vfunc_leading_zero32__5348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5348__count)));
                            vlSelf->__Vfunc_leading_zero32__5348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5348__count)));
                            vlSelf->__Vfunc_leading_zero32__5348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5348__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5354__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5354__part 
                            = vlSelf->__Vfunc_leading_zero32__5354__value;
                        vlSelf->__Vfunc_leading_zero32__5354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5354__count)));
                            vlSelf->__Vfunc_leading_zero32__5354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5354__count)));
                            vlSelf->__Vfunc_leading_zero32__5354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5354__count)));
                            vlSelf->__Vfunc_leading_zero32__5354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5354__count)));
                            vlSelf->__Vfunc_leading_zero32__5354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5354__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5360__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5360__part 
                            = vlSelf->__Vfunc_leading_zero32__5360__value;
                        vlSelf->__Vfunc_leading_zero32__5360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5360__count)));
                            vlSelf->__Vfunc_leading_zero32__5360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5360__count)));
                            vlSelf->__Vfunc_leading_zero32__5360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5360__count)));
                            vlSelf->__Vfunc_leading_zero32__5360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5360__count)));
                            vlSelf->__Vfunc_leading_zero32__5360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5360__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5366__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5366__part 
                            = vlSelf->__Vfunc_leading_zero32__5366__value;
                        vlSelf->__Vfunc_leading_zero32__5366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5366__count)));
                            vlSelf->__Vfunc_leading_zero32__5366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5366__count)));
                            vlSelf->__Vfunc_leading_zero32__5366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5366__count)));
                            vlSelf->__Vfunc_leading_zero32__5366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5366__count)));
                            vlSelf->__Vfunc_leading_zero32__5366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5366__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5372__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5372__part 
                            = vlSelf->__Vfunc_leading_zero32__5372__value;
                        vlSelf->__Vfunc_leading_zero32__5372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5372__count)));
                            vlSelf->__Vfunc_leading_zero32__5372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5372__count)));
                            vlSelf->__Vfunc_leading_zero32__5372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5372__count)));
                            vlSelf->__Vfunc_leading_zero32__5372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5372__count)));
                            vlSelf->__Vfunc_leading_zero32__5372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5372__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5378__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5378__part 
                            = vlSelf->__Vfunc_leading_zero32__5378__value;
                        vlSelf->__Vfunc_leading_zero32__5378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5378__count)));
                            vlSelf->__Vfunc_leading_zero32__5378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5378__count)));
                            vlSelf->__Vfunc_leading_zero32__5378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5378__count)));
                            vlSelf->__Vfunc_leading_zero32__5378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5378__count)));
                            vlSelf->__Vfunc_leading_zero32__5378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5378__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5384__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5384__part 
                            = vlSelf->__Vfunc_leading_zero32__5384__value;
                        vlSelf->__Vfunc_leading_zero32__5384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5384__count)));
                            vlSelf->__Vfunc_leading_zero32__5384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5384__count)));
                            vlSelf->__Vfunc_leading_zero32__5384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5384__count)));
                            vlSelf->__Vfunc_leading_zero32__5384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5384__count)));
                            vlSelf->__Vfunc_leading_zero32__5384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5384__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5390__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5390__part 
                            = vlSelf->__Vfunc_leading_zero32__5390__value;
                        vlSelf->__Vfunc_leading_zero32__5390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5390__count)));
                            vlSelf->__Vfunc_leading_zero32__5390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5390__count)));
                            vlSelf->__Vfunc_leading_zero32__5390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5390__count)));
                            vlSelf->__Vfunc_leading_zero32__5390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5390__count)));
                            vlSelf->__Vfunc_leading_zero32__5390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5390__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5396__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5396__part 
                            = vlSelf->__Vfunc_leading_zero32__5396__value;
                        vlSelf->__Vfunc_leading_zero32__5396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5396__count)));
                            vlSelf->__Vfunc_leading_zero32__5396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5396__count)));
                            vlSelf->__Vfunc_leading_zero32__5396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5396__count)));
                            vlSelf->__Vfunc_leading_zero32__5396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5396__count)));
                            vlSelf->__Vfunc_leading_zero32__5396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5396__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5402__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5402__part 
                            = vlSelf->__Vfunc_leading_zero32__5402__value;
                        vlSelf->__Vfunc_leading_zero32__5402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5402__count)));
                            vlSelf->__Vfunc_leading_zero32__5402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5402__count)));
                            vlSelf->__Vfunc_leading_zero32__5402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5402__count)));
                            vlSelf->__Vfunc_leading_zero32__5402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5402__count)));
                            vlSelf->__Vfunc_leading_zero32__5402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5402__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5408__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5408__part 
                            = vlSelf->__Vfunc_leading_zero32__5408__value;
                        vlSelf->__Vfunc_leading_zero32__5408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5408__count)));
                            vlSelf->__Vfunc_leading_zero32__5408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5408__count)));
                            vlSelf->__Vfunc_leading_zero32__5408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5408__count)));
                            vlSelf->__Vfunc_leading_zero32__5408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5408__count)));
                            vlSelf->__Vfunc_leading_zero32__5408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5408__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5414__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5414__part 
                            = vlSelf->__Vfunc_leading_zero32__5414__value;
                        vlSelf->__Vfunc_leading_zero32__5414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5414__count)));
                            vlSelf->__Vfunc_leading_zero32__5414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5414__count)));
                            vlSelf->__Vfunc_leading_zero32__5414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5414__count)));
                            vlSelf->__Vfunc_leading_zero32__5414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5414__count)));
                            vlSelf->__Vfunc_leading_zero32__5414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5414__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5420__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5420__part 
                            = vlSelf->__Vfunc_leading_zero32__5420__value;
                        vlSelf->__Vfunc_leading_zero32__5420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5420__count)));
                            vlSelf->__Vfunc_leading_zero32__5420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5420__count)));
                            vlSelf->__Vfunc_leading_zero32__5420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5420__count)));
                            vlSelf->__Vfunc_leading_zero32__5420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5420__count)));
                            vlSelf->__Vfunc_leading_zero32__5420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5420__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5426__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5426__part 
                            = vlSelf->__Vfunc_leading_zero32__5426__value;
                        vlSelf->__Vfunc_leading_zero32__5426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5426__count)));
                            vlSelf->__Vfunc_leading_zero32__5426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5426__count)));
                            vlSelf->__Vfunc_leading_zero32__5426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5426__count)));
                            vlSelf->__Vfunc_leading_zero32__5426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5426__count)));
                            vlSelf->__Vfunc_leading_zero32__5426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5426__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5432__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5432__part 
                            = vlSelf->__Vfunc_leading_zero32__5432__value;
                        vlSelf->__Vfunc_leading_zero32__5432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5432__count)));
                            vlSelf->__Vfunc_leading_zero32__5432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5432__count)));
                            vlSelf->__Vfunc_leading_zero32__5432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5432__count)));
                            vlSelf->__Vfunc_leading_zero32__5432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5432__count)));
                            vlSelf->__Vfunc_leading_zero32__5432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5432__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5438__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5438__part 
                            = vlSelf->__Vfunc_leading_zero32__5438__value;
                        vlSelf->__Vfunc_leading_zero32__5438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5438__count)));
                            vlSelf->__Vfunc_leading_zero32__5438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5438__count)));
                            vlSelf->__Vfunc_leading_zero32__5438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5438__count)));
                            vlSelf->__Vfunc_leading_zero32__5438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5438__count)));
                            vlSelf->__Vfunc_leading_zero32__5438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5438__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5444__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5444__part 
                            = vlSelf->__Vfunc_leading_zero32__5444__value;
                        vlSelf->__Vfunc_leading_zero32__5444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5444__count)));
                            vlSelf->__Vfunc_leading_zero32__5444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5444__count)));
                            vlSelf->__Vfunc_leading_zero32__5444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5444__count)));
                            vlSelf->__Vfunc_leading_zero32__5444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5444__count)));
                            vlSelf->__Vfunc_leading_zero32__5444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5444__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5450__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5450__part 
                            = vlSelf->__Vfunc_leading_zero32__5450__value;
                        vlSelf->__Vfunc_leading_zero32__5450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5450__count)));
                            vlSelf->__Vfunc_leading_zero32__5450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5450__count)));
                            vlSelf->__Vfunc_leading_zero32__5450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5450__count)));
                            vlSelf->__Vfunc_leading_zero32__5450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5450__count)));
                            vlSelf->__Vfunc_leading_zero32__5450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5450__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5456__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5456__part 
                            = vlSelf->__Vfunc_leading_zero32__5456__value;
                        vlSelf->__Vfunc_leading_zero32__5456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5456__count)));
                            vlSelf->__Vfunc_leading_zero32__5456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5456__count)));
                            vlSelf->__Vfunc_leading_zero32__5456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5456__count)));
                            vlSelf->__Vfunc_leading_zero32__5456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5456__count)));
                            vlSelf->__Vfunc_leading_zero32__5456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5456__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5462__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5462__part 
                            = vlSelf->__Vfunc_leading_zero32__5462__value;
                        vlSelf->__Vfunc_leading_zero32__5462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5462__count)));
                            vlSelf->__Vfunc_leading_zero32__5462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5462__count)));
                            vlSelf->__Vfunc_leading_zero32__5462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5462__count)));
                            vlSelf->__Vfunc_leading_zero32__5462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5462__count)));
                            vlSelf->__Vfunc_leading_zero32__5462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5462__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5468__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5468__part 
                            = vlSelf->__Vfunc_leading_zero32__5468__value;
                        vlSelf->__Vfunc_leading_zero32__5468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5468__count)));
                            vlSelf->__Vfunc_leading_zero32__5468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5468__count)));
                            vlSelf->__Vfunc_leading_zero32__5468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5468__count)));
                            vlSelf->__Vfunc_leading_zero32__5468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5468__count)));
                            vlSelf->__Vfunc_leading_zero32__5468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5468__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5474__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5474__part 
                            = vlSelf->__Vfunc_leading_zero32__5474__value;
                        vlSelf->__Vfunc_leading_zero32__5474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5474__count)));
                            vlSelf->__Vfunc_leading_zero32__5474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5474__count)));
                            vlSelf->__Vfunc_leading_zero32__5474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5474__count)));
                            vlSelf->__Vfunc_leading_zero32__5474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5474__count)));
                            vlSelf->__Vfunc_leading_zero32__5474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5474__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5480__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5480__part 
                            = vlSelf->__Vfunc_leading_zero32__5480__value;
                        vlSelf->__Vfunc_leading_zero32__5480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5480__count)));
                            vlSelf->__Vfunc_leading_zero32__5480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5480__count)));
                            vlSelf->__Vfunc_leading_zero32__5480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5480__count)));
                            vlSelf->__Vfunc_leading_zero32__5480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5480__count)));
                            vlSelf->__Vfunc_leading_zero32__5480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5480__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5486__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5486__part 
                            = vlSelf->__Vfunc_leading_zero32__5486__value;
                        vlSelf->__Vfunc_leading_zero32__5486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5486__count)));
                            vlSelf->__Vfunc_leading_zero32__5486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5486__count)));
                            vlSelf->__Vfunc_leading_zero32__5486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5486__count)));
                            vlSelf->__Vfunc_leading_zero32__5486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5486__count)));
                            vlSelf->__Vfunc_leading_zero32__5486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5486__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5492__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5492__part 
                            = vlSelf->__Vfunc_leading_zero32__5492__value;
                        vlSelf->__Vfunc_leading_zero32__5492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5492__count)));
                            vlSelf->__Vfunc_leading_zero32__5492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5492__count)));
                            vlSelf->__Vfunc_leading_zero32__5492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5492__count)));
                            vlSelf->__Vfunc_leading_zero32__5492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5492__count)));
                            vlSelf->__Vfunc_leading_zero32__5492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5492__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5498__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5498__part 
                            = vlSelf->__Vfunc_leading_zero32__5498__value;
                        vlSelf->__Vfunc_leading_zero32__5498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5498__count)));
                            vlSelf->__Vfunc_leading_zero32__5498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5498__count)));
                            vlSelf->__Vfunc_leading_zero32__5498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5498__count)));
                            vlSelf->__Vfunc_leading_zero32__5498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5498__count)));
                            vlSelf->__Vfunc_leading_zero32__5498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5498__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5504__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5504__part 
                            = vlSelf->__Vfunc_leading_zero32__5504__value;
                        vlSelf->__Vfunc_leading_zero32__5504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5504__count)));
                            vlSelf->__Vfunc_leading_zero32__5504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5504__count)));
                            vlSelf->__Vfunc_leading_zero32__5504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5504__count)));
                            vlSelf->__Vfunc_leading_zero32__5504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5504__count)));
                            vlSelf->__Vfunc_leading_zero32__5504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5504__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5510__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5510__part 
                            = vlSelf->__Vfunc_leading_zero32__5510__value;
                        vlSelf->__Vfunc_leading_zero32__5510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5510__count)));
                            vlSelf->__Vfunc_leading_zero32__5510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5510__count)));
                            vlSelf->__Vfunc_leading_zero32__5510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5510__count)));
                            vlSelf->__Vfunc_leading_zero32__5510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5510__count)));
                            vlSelf->__Vfunc_leading_zero32__5510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5510__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5516__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5516__part 
                            = vlSelf->__Vfunc_leading_zero32__5516__value;
                        vlSelf->__Vfunc_leading_zero32__5516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5516__count)));
                            vlSelf->__Vfunc_leading_zero32__5516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5516__count)));
                            vlSelf->__Vfunc_leading_zero32__5516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5516__count)));
                            vlSelf->__Vfunc_leading_zero32__5516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5516__count)));
                            vlSelf->__Vfunc_leading_zero32__5516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5516__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5522__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5522__part 
                            = vlSelf->__Vfunc_leading_zero32__5522__value;
                        vlSelf->__Vfunc_leading_zero32__5522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5522__count)));
                            vlSelf->__Vfunc_leading_zero32__5522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5522__count)));
                            vlSelf->__Vfunc_leading_zero32__5522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5522__count)));
                            vlSelf->__Vfunc_leading_zero32__5522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5522__count)));
                            vlSelf->__Vfunc_leading_zero32__5522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5522__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5528__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5528__part 
                            = vlSelf->__Vfunc_leading_zero32__5528__value;
                        vlSelf->__Vfunc_leading_zero32__5528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5528__count)));
                            vlSelf->__Vfunc_leading_zero32__5528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5528__count)));
                            vlSelf->__Vfunc_leading_zero32__5528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5528__count)));
                            vlSelf->__Vfunc_leading_zero32__5528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5528__count)));
                            vlSelf->__Vfunc_leading_zero32__5528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5528__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5534__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5534__part 
                            = vlSelf->__Vfunc_leading_zero32__5534__value;
                        vlSelf->__Vfunc_leading_zero32__5534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5534__count)));
                            vlSelf->__Vfunc_leading_zero32__5534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5534__count)));
                            vlSelf->__Vfunc_leading_zero32__5534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5534__count)));
                            vlSelf->__Vfunc_leading_zero32__5534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5534__count)));
                            vlSelf->__Vfunc_leading_zero32__5534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5534__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5540__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5540__part 
                            = vlSelf->__Vfunc_leading_zero32__5540__value;
                        vlSelf->__Vfunc_leading_zero32__5540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5540__count)));
                            vlSelf->__Vfunc_leading_zero32__5540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5540__count)));
                            vlSelf->__Vfunc_leading_zero32__5540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5540__count)));
                            vlSelf->__Vfunc_leading_zero32__5540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5540__count)));
                            vlSelf->__Vfunc_leading_zero32__5540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5540__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5546__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5546__part 
                            = vlSelf->__Vfunc_leading_zero32__5546__value;
                        vlSelf->__Vfunc_leading_zero32__5546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5546__count)));
                            vlSelf->__Vfunc_leading_zero32__5546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5546__count)));
                            vlSelf->__Vfunc_leading_zero32__5546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5546__count)));
                            vlSelf->__Vfunc_leading_zero32__5546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5546__count)));
                            vlSelf->__Vfunc_leading_zero32__5546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5546__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5552__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5552__part 
                            = vlSelf->__Vfunc_leading_zero32__5552__value;
                        vlSelf->__Vfunc_leading_zero32__5552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5552__count)));
                            vlSelf->__Vfunc_leading_zero32__5552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5552__count)));
                            vlSelf->__Vfunc_leading_zero32__5552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5552__count)));
                            vlSelf->__Vfunc_leading_zero32__5552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5552__count)));
                            vlSelf->__Vfunc_leading_zero32__5552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5552__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5558__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5558__part 
                            = vlSelf->__Vfunc_leading_zero32__5558__value;
                        vlSelf->__Vfunc_leading_zero32__5558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5558__count)));
                            vlSelf->__Vfunc_leading_zero32__5558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5558__count)));
                            vlSelf->__Vfunc_leading_zero32__5558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5558__count)));
                            vlSelf->__Vfunc_leading_zero32__5558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5558__count)));
                            vlSelf->__Vfunc_leading_zero32__5558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5558__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5564__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5564__part 
                            = vlSelf->__Vfunc_leading_zero32__5564__value;
                        vlSelf->__Vfunc_leading_zero32__5564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5564__count)));
                            vlSelf->__Vfunc_leading_zero32__5564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5564__count)));
                            vlSelf->__Vfunc_leading_zero32__5564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5564__count)));
                            vlSelf->__Vfunc_leading_zero32__5564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5564__count)));
                            vlSelf->__Vfunc_leading_zero32__5564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5564__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5570__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5570__part 
                            = vlSelf->__Vfunc_leading_zero32__5570__value;
                        vlSelf->__Vfunc_leading_zero32__5570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5570__count)));
                            vlSelf->__Vfunc_leading_zero32__5570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5570__count)));
                            vlSelf->__Vfunc_leading_zero32__5570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5570__count)));
                            vlSelf->__Vfunc_leading_zero32__5570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5570__count)));
                            vlSelf->__Vfunc_leading_zero32__5570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5570__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5576__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5576__part 
                            = vlSelf->__Vfunc_leading_zero32__5576__value;
                        vlSelf->__Vfunc_leading_zero32__5576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5576__count)));
                            vlSelf->__Vfunc_leading_zero32__5576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5576__count)));
                            vlSelf->__Vfunc_leading_zero32__5576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5576__count)));
                            vlSelf->__Vfunc_leading_zero32__5576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5576__count)));
                            vlSelf->__Vfunc_leading_zero32__5576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5576__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5582__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5582__part 
                            = vlSelf->__Vfunc_leading_zero32__5582__value;
                        vlSelf->__Vfunc_leading_zero32__5582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5582__count)));
                            vlSelf->__Vfunc_leading_zero32__5582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5582__count)));
                            vlSelf->__Vfunc_leading_zero32__5582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5582__count)));
                            vlSelf->__Vfunc_leading_zero32__5582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5582__count)));
                            vlSelf->__Vfunc_leading_zero32__5582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5582__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5588__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5588__part 
                            = vlSelf->__Vfunc_leading_zero32__5588__value;
                        vlSelf->__Vfunc_leading_zero32__5588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5588__count)));
                            vlSelf->__Vfunc_leading_zero32__5588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5588__count)));
                            vlSelf->__Vfunc_leading_zero32__5588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5588__count)));
                            vlSelf->__Vfunc_leading_zero32__5588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5588__count)));
                            vlSelf->__Vfunc_leading_zero32__5588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5588__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5594__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5594__part 
                            = vlSelf->__Vfunc_leading_zero32__5594__value;
                        vlSelf->__Vfunc_leading_zero32__5594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5594__count)));
                            vlSelf->__Vfunc_leading_zero32__5594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5594__count)));
                            vlSelf->__Vfunc_leading_zero32__5594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5594__count)));
                            vlSelf->__Vfunc_leading_zero32__5594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5594__count)));
                            vlSelf->__Vfunc_leading_zero32__5594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5594__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5600__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5600__part 
                            = vlSelf->__Vfunc_leading_zero32__5600__value;
                        vlSelf->__Vfunc_leading_zero32__5600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5600__count)));
                            vlSelf->__Vfunc_leading_zero32__5600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5600__count)));
                            vlSelf->__Vfunc_leading_zero32__5600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5600__count)));
                            vlSelf->__Vfunc_leading_zero32__5600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5600__count)));
                            vlSelf->__Vfunc_leading_zero32__5600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5600__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5606__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5606__part 
                            = vlSelf->__Vfunc_leading_zero32__5606__value;
                        vlSelf->__Vfunc_leading_zero32__5606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5606__count)));
                            vlSelf->__Vfunc_leading_zero32__5606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5606__count)));
                            vlSelf->__Vfunc_leading_zero32__5606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5606__count)));
                            vlSelf->__Vfunc_leading_zero32__5606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5606__count)));
                            vlSelf->__Vfunc_leading_zero32__5606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5606__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5612__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5612__part 
                            = vlSelf->__Vfunc_leading_zero32__5612__value;
                        vlSelf->__Vfunc_leading_zero32__5612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5612__count)));
                            vlSelf->__Vfunc_leading_zero32__5612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5612__count)));
                            vlSelf->__Vfunc_leading_zero32__5612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5612__count)));
                            vlSelf->__Vfunc_leading_zero32__5612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5612__count)));
                            vlSelf->__Vfunc_leading_zero32__5612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5612__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5618__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5618__part 
                            = vlSelf->__Vfunc_leading_zero32__5618__value;
                        vlSelf->__Vfunc_leading_zero32__5618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5618__count)));
                            vlSelf->__Vfunc_leading_zero32__5618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5618__count)));
                            vlSelf->__Vfunc_leading_zero32__5618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5618__count)));
                            vlSelf->__Vfunc_leading_zero32__5618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5618__count)));
                            vlSelf->__Vfunc_leading_zero32__5618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5618__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5624__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5624__part 
                            = vlSelf->__Vfunc_leading_zero32__5624__value;
                        vlSelf->__Vfunc_leading_zero32__5624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5624__count)));
                            vlSelf->__Vfunc_leading_zero32__5624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5624__count)));
                            vlSelf->__Vfunc_leading_zero32__5624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5624__count)));
                            vlSelf->__Vfunc_leading_zero32__5624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5624__count)));
                            vlSelf->__Vfunc_leading_zero32__5624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5624__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5630__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5630__part 
                            = vlSelf->__Vfunc_leading_zero32__5630__value;
                        vlSelf->__Vfunc_leading_zero32__5630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5630__count)));
                            vlSelf->__Vfunc_leading_zero32__5630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5630__count)));
                            vlSelf->__Vfunc_leading_zero32__5630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5630__count)));
                            vlSelf->__Vfunc_leading_zero32__5630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5630__count)));
                            vlSelf->__Vfunc_leading_zero32__5630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5630__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5636__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5636__part 
                            = vlSelf->__Vfunc_leading_zero32__5636__value;
                        vlSelf->__Vfunc_leading_zero32__5636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5636__count)));
                            vlSelf->__Vfunc_leading_zero32__5636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5636__count)));
                            vlSelf->__Vfunc_leading_zero32__5636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5636__count)));
                            vlSelf->__Vfunc_leading_zero32__5636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5636__count)));
                            vlSelf->__Vfunc_leading_zero32__5636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5636__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5642__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5642__part 
                            = vlSelf->__Vfunc_leading_zero32__5642__value;
                        vlSelf->__Vfunc_leading_zero32__5642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5642__count)));
                            vlSelf->__Vfunc_leading_zero32__5642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5642__count)));
                            vlSelf->__Vfunc_leading_zero32__5642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5642__count)));
                            vlSelf->__Vfunc_leading_zero32__5642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5642__count)));
                            vlSelf->__Vfunc_leading_zero32__5642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5642__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5648__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5648__part 
                            = vlSelf->__Vfunc_leading_zero32__5648__value;
                        vlSelf->__Vfunc_leading_zero32__5648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5648__count)));
                            vlSelf->__Vfunc_leading_zero32__5648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5648__count)));
                            vlSelf->__Vfunc_leading_zero32__5648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5648__count)));
                            vlSelf->__Vfunc_leading_zero32__5648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5648__count)));
                            vlSelf->__Vfunc_leading_zero32__5648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5648__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5654__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5654__part 
                            = vlSelf->__Vfunc_leading_zero32__5654__value;
                        vlSelf->__Vfunc_leading_zero32__5654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5654__count)));
                            vlSelf->__Vfunc_leading_zero32__5654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5654__count)));
                            vlSelf->__Vfunc_leading_zero32__5654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5654__count)));
                            vlSelf->__Vfunc_leading_zero32__5654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5654__count)));
                            vlSelf->__Vfunc_leading_zero32__5654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5654__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5660__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5660__part 
                            = vlSelf->__Vfunc_leading_zero32__5660__value;
                        vlSelf->__Vfunc_leading_zero32__5660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5660__count)));
                            vlSelf->__Vfunc_leading_zero32__5660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5660__count)));
                            vlSelf->__Vfunc_leading_zero32__5660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5660__count)));
                            vlSelf->__Vfunc_leading_zero32__5660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5660__count)));
                            vlSelf->__Vfunc_leading_zero32__5660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5660__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5666__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5666__part 
                            = vlSelf->__Vfunc_leading_zero32__5666__value;
                        vlSelf->__Vfunc_leading_zero32__5666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5666__count)));
                            vlSelf->__Vfunc_leading_zero32__5666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5666__count)));
                            vlSelf->__Vfunc_leading_zero32__5666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5666__count)));
                            vlSelf->__Vfunc_leading_zero32__5666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5666__count)));
                            vlSelf->__Vfunc_leading_zero32__5666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5666__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5672__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5672__part 
                            = vlSelf->__Vfunc_leading_zero32__5672__value;
                        vlSelf->__Vfunc_leading_zero32__5672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5672__count)));
                            vlSelf->__Vfunc_leading_zero32__5672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5672__count)));
                            vlSelf->__Vfunc_leading_zero32__5672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5672__count)));
                            vlSelf->__Vfunc_leading_zero32__5672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5672__count)));
                            vlSelf->__Vfunc_leading_zero32__5672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5672__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5678__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5678__part 
                            = vlSelf->__Vfunc_leading_zero32__5678__value;
                        vlSelf->__Vfunc_leading_zero32__5678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5678__count)));
                            vlSelf->__Vfunc_leading_zero32__5678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5678__count)));
                            vlSelf->__Vfunc_leading_zero32__5678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5678__count)));
                            vlSelf->__Vfunc_leading_zero32__5678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5678__count)));
                            vlSelf->__Vfunc_leading_zero32__5678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5678__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5684__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5684__part 
                            = vlSelf->__Vfunc_leading_zero32__5684__value;
                        vlSelf->__Vfunc_leading_zero32__5684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5684__count)));
                            vlSelf->__Vfunc_leading_zero32__5684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5684__count)));
                            vlSelf->__Vfunc_leading_zero32__5684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5684__count)));
                            vlSelf->__Vfunc_leading_zero32__5684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5684__count)));
                            vlSelf->__Vfunc_leading_zero32__5684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5684__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5690__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5690__part 
                            = vlSelf->__Vfunc_leading_zero32__5690__value;
                        vlSelf->__Vfunc_leading_zero32__5690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5690__count)));
                            vlSelf->__Vfunc_leading_zero32__5690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5690__count)));
                            vlSelf->__Vfunc_leading_zero32__5690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5690__count)));
                            vlSelf->__Vfunc_leading_zero32__5690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5690__count)));
                            vlSelf->__Vfunc_leading_zero32__5690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5690__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5696__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5696__part 
                            = vlSelf->__Vfunc_leading_zero32__5696__value;
                        vlSelf->__Vfunc_leading_zero32__5696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5696__count)));
                            vlSelf->__Vfunc_leading_zero32__5696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5696__count)));
                            vlSelf->__Vfunc_leading_zero32__5696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5696__count)));
                            vlSelf->__Vfunc_leading_zero32__5696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5696__count)));
                            vlSelf->__Vfunc_leading_zero32__5696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5696__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5702__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5702__part 
                            = vlSelf->__Vfunc_leading_zero32__5702__value;
                        vlSelf->__Vfunc_leading_zero32__5702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5702__count)));
                            vlSelf->__Vfunc_leading_zero32__5702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5702__count)));
                            vlSelf->__Vfunc_leading_zero32__5702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5702__count)));
                            vlSelf->__Vfunc_leading_zero32__5702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5702__count)));
                            vlSelf->__Vfunc_leading_zero32__5702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5702__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5708__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5708__part 
                            = vlSelf->__Vfunc_leading_zero32__5708__value;
                        vlSelf->__Vfunc_leading_zero32__5708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5708__count)));
                            vlSelf->__Vfunc_leading_zero32__5708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5708__count)));
                            vlSelf->__Vfunc_leading_zero32__5708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5708__count)));
                            vlSelf->__Vfunc_leading_zero32__5708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5708__count)));
                            vlSelf->__Vfunc_leading_zero32__5708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5708__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5714__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5714__part 
                            = vlSelf->__Vfunc_leading_zero32__5714__value;
                        vlSelf->__Vfunc_leading_zero32__5714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5714__count)));
                            vlSelf->__Vfunc_leading_zero32__5714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5714__count)));
                            vlSelf->__Vfunc_leading_zero32__5714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5714__count)));
                            vlSelf->__Vfunc_leading_zero32__5714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5714__count)));
                            vlSelf->__Vfunc_leading_zero32__5714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5714__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5720__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5720__part 
                            = vlSelf->__Vfunc_leading_zero32__5720__value;
                        vlSelf->__Vfunc_leading_zero32__5720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5720__count)));
                            vlSelf->__Vfunc_leading_zero32__5720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5720__count)));
                            vlSelf->__Vfunc_leading_zero32__5720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5720__count)));
                            vlSelf->__Vfunc_leading_zero32__5720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5720__count)));
                            vlSelf->__Vfunc_leading_zero32__5720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5720__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5726__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5726__part 
                            = vlSelf->__Vfunc_leading_zero32__5726__value;
                        vlSelf->__Vfunc_leading_zero32__5726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5726__count)));
                            vlSelf->__Vfunc_leading_zero32__5726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5726__count)));
                            vlSelf->__Vfunc_leading_zero32__5726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5726__count)));
                            vlSelf->__Vfunc_leading_zero32__5726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5726__count)));
                            vlSelf->__Vfunc_leading_zero32__5726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5726__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5732__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5732__part 
                            = vlSelf->__Vfunc_leading_zero32__5732__value;
                        vlSelf->__Vfunc_leading_zero32__5732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5732__count)));
                            vlSelf->__Vfunc_leading_zero32__5732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5732__count)));
                            vlSelf->__Vfunc_leading_zero32__5732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5732__count)));
                            vlSelf->__Vfunc_leading_zero32__5732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5732__count)));
                            vlSelf->__Vfunc_leading_zero32__5732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5732__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5738__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5738__part 
                            = vlSelf->__Vfunc_leading_zero32__5738__value;
                        vlSelf->__Vfunc_leading_zero32__5738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5738__count)));
                            vlSelf->__Vfunc_leading_zero32__5738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5738__count)));
                            vlSelf->__Vfunc_leading_zero32__5738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5738__count)));
                            vlSelf->__Vfunc_leading_zero32__5738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5738__count)));
                            vlSelf->__Vfunc_leading_zero32__5738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5738__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5744__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5744__part 
                            = vlSelf->__Vfunc_leading_zero32__5744__value;
                        vlSelf->__Vfunc_leading_zero32__5744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5744__count)));
                            vlSelf->__Vfunc_leading_zero32__5744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5744__count)));
                            vlSelf->__Vfunc_leading_zero32__5744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5744__count)));
                            vlSelf->__Vfunc_leading_zero32__5744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5744__count)));
                            vlSelf->__Vfunc_leading_zero32__5744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5744__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5750__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5750__part 
                            = vlSelf->__Vfunc_leading_zero32__5750__value;
                        vlSelf->__Vfunc_leading_zero32__5750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5750__count)));
                            vlSelf->__Vfunc_leading_zero32__5750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5750__count)));
                            vlSelf->__Vfunc_leading_zero32__5750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5750__count)));
                            vlSelf->__Vfunc_leading_zero32__5750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5750__count)));
                            vlSelf->__Vfunc_leading_zero32__5750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5750__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5756__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5756__part 
                            = vlSelf->__Vfunc_leading_zero32__5756__value;
                        vlSelf->__Vfunc_leading_zero32__5756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5756__count)));
                            vlSelf->__Vfunc_leading_zero32__5756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5756__count)));
                            vlSelf->__Vfunc_leading_zero32__5756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5756__count)));
                            vlSelf->__Vfunc_leading_zero32__5756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5756__count)));
                            vlSelf->__Vfunc_leading_zero32__5756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5756__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5762__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5762__part 
                            = vlSelf->__Vfunc_leading_zero32__5762__value;
                        vlSelf->__Vfunc_leading_zero32__5762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5762__count)));
                            vlSelf->__Vfunc_leading_zero32__5762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5762__count)));
                            vlSelf->__Vfunc_leading_zero32__5762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5762__count)));
                            vlSelf->__Vfunc_leading_zero32__5762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5762__count)));
                            vlSelf->__Vfunc_leading_zero32__5762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5762__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5768__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5768__part 
                            = vlSelf->__Vfunc_leading_zero32__5768__value;
                        vlSelf->__Vfunc_leading_zero32__5768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5768__count)));
                            vlSelf->__Vfunc_leading_zero32__5768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5768__count)));
                            vlSelf->__Vfunc_leading_zero32__5768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5768__count)));
                            vlSelf->__Vfunc_leading_zero32__5768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5768__count)));
                            vlSelf->__Vfunc_leading_zero32__5768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5768__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5774__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5774__part 
                            = vlSelf->__Vfunc_leading_zero32__5774__value;
                        vlSelf->__Vfunc_leading_zero32__5774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5774__count)));
                            vlSelf->__Vfunc_leading_zero32__5774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5774__count)));
                            vlSelf->__Vfunc_leading_zero32__5774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5774__count)));
                            vlSelf->__Vfunc_leading_zero32__5774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5774__count)));
                            vlSelf->__Vfunc_leading_zero32__5774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5774__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5780__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5780__part 
                            = vlSelf->__Vfunc_leading_zero32__5780__value;
                        vlSelf->__Vfunc_leading_zero32__5780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5780__count)));
                            vlSelf->__Vfunc_leading_zero32__5780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5780__count)));
                            vlSelf->__Vfunc_leading_zero32__5780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5780__count)));
                            vlSelf->__Vfunc_leading_zero32__5780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5780__count)));
                            vlSelf->__Vfunc_leading_zero32__5780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5780__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5786__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5786__part 
                            = vlSelf->__Vfunc_leading_zero32__5786__value;
                        vlSelf->__Vfunc_leading_zero32__5786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5786__count)));
                            vlSelf->__Vfunc_leading_zero32__5786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5786__count)));
                            vlSelf->__Vfunc_leading_zero32__5786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5786__count)));
                            vlSelf->__Vfunc_leading_zero32__5786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5786__count)));
                            vlSelf->__Vfunc_leading_zero32__5786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5786__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5792__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5792__part 
                            = vlSelf->__Vfunc_leading_zero32__5792__value;
                        vlSelf->__Vfunc_leading_zero32__5792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5792__count)));
                            vlSelf->__Vfunc_leading_zero32__5792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5792__count)));
                            vlSelf->__Vfunc_leading_zero32__5792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5792__count)));
                            vlSelf->__Vfunc_leading_zero32__5792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5792__count)));
                            vlSelf->__Vfunc_leading_zero32__5792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5792__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5798__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5798__part 
                            = vlSelf->__Vfunc_leading_zero32__5798__value;
                        vlSelf->__Vfunc_leading_zero32__5798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5798__count)));
                            vlSelf->__Vfunc_leading_zero32__5798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5798__count)));
                            vlSelf->__Vfunc_leading_zero32__5798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5798__count)));
                            vlSelf->__Vfunc_leading_zero32__5798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5798__count)));
                            vlSelf->__Vfunc_leading_zero32__5798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5798__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5804__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5804__part 
                            = vlSelf->__Vfunc_leading_zero32__5804__value;
                        vlSelf->__Vfunc_leading_zero32__5804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5804__count)));
                            vlSelf->__Vfunc_leading_zero32__5804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5804__count)));
                            vlSelf->__Vfunc_leading_zero32__5804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5804__count)));
                            vlSelf->__Vfunc_leading_zero32__5804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5804__count)));
                            vlSelf->__Vfunc_leading_zero32__5804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5804__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5810__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5810__part 
                            = vlSelf->__Vfunc_leading_zero32__5810__value;
                        vlSelf->__Vfunc_leading_zero32__5810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5810__count)));
                            vlSelf->__Vfunc_leading_zero32__5810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5810__count)));
                            vlSelf->__Vfunc_leading_zero32__5810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5810__count)));
                            vlSelf->__Vfunc_leading_zero32__5810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5810__count)));
                            vlSelf->__Vfunc_leading_zero32__5810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5810__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5816__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5816__part 
                            = vlSelf->__Vfunc_leading_zero32__5816__value;
                        vlSelf->__Vfunc_leading_zero32__5816__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5816__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5816__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5816__count)));
                            vlSelf->__Vfunc_leading_zero32__5816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5816__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5816__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5816__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5816__count)));
                            vlSelf->__Vfunc_leading_zero32__5816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5816__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5816__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5816__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5816__count)));
                            vlSelf->__Vfunc_leading_zero32__5816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5816__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5816__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5816__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5816__count)));
                            vlSelf->__Vfunc_leading_zero32__5816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5816__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5816__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5816__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5816__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5816__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5816__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5816__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5816__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5822__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5822__part 
                            = vlSelf->__Vfunc_leading_zero32__5822__value;
                        vlSelf->__Vfunc_leading_zero32__5822__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5822__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5822__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5822__count)));
                            vlSelf->__Vfunc_leading_zero32__5822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5822__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5822__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5822__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5822__count)));
                            vlSelf->__Vfunc_leading_zero32__5822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5822__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5822__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5822__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5822__count)));
                            vlSelf->__Vfunc_leading_zero32__5822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5822__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5822__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5822__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5822__count)));
                            vlSelf->__Vfunc_leading_zero32__5822__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5822__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5822__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5822__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5822__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5822__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5822__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5822__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5822__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5828__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5828__part 
                            = vlSelf->__Vfunc_leading_zero32__5828__value;
                        vlSelf->__Vfunc_leading_zero32__5828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5828__count)));
                            vlSelf->__Vfunc_leading_zero32__5828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5828__count)));
                            vlSelf->__Vfunc_leading_zero32__5828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5828__count)));
                            vlSelf->__Vfunc_leading_zero32__5828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5828__count)));
                            vlSelf->__Vfunc_leading_zero32__5828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5828__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5834__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5834__part 
                            = vlSelf->__Vfunc_leading_zero32__5834__value;
                        vlSelf->__Vfunc_leading_zero32__5834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5834__count)));
                            vlSelf->__Vfunc_leading_zero32__5834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5834__count)));
                            vlSelf->__Vfunc_leading_zero32__5834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5834__count)));
                            vlSelf->__Vfunc_leading_zero32__5834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5834__count)));
                            vlSelf->__Vfunc_leading_zero32__5834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5834__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5840__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5840__part 
                            = vlSelf->__Vfunc_leading_zero32__5840__value;
                        vlSelf->__Vfunc_leading_zero32__5840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5840__count)));
                            vlSelf->__Vfunc_leading_zero32__5840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5840__count)));
                            vlSelf->__Vfunc_leading_zero32__5840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5840__count)));
                            vlSelf->__Vfunc_leading_zero32__5840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5840__count)));
                            vlSelf->__Vfunc_leading_zero32__5840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5840__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5846__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5846__part 
                            = vlSelf->__Vfunc_leading_zero32__5846__value;
                        vlSelf->__Vfunc_leading_zero32__5846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5846__count)));
                            vlSelf->__Vfunc_leading_zero32__5846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5846__count)));
                            vlSelf->__Vfunc_leading_zero32__5846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5846__count)));
                            vlSelf->__Vfunc_leading_zero32__5846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5846__count)));
                            vlSelf->__Vfunc_leading_zero32__5846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5846__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5852__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5852__part 
                            = vlSelf->__Vfunc_leading_zero32__5852__value;
                        vlSelf->__Vfunc_leading_zero32__5852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5852__count)));
                            vlSelf->__Vfunc_leading_zero32__5852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5852__count)));
                            vlSelf->__Vfunc_leading_zero32__5852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5852__count)));
                            vlSelf->__Vfunc_leading_zero32__5852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5852__count)));
                            vlSelf->__Vfunc_leading_zero32__5852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5852__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5858__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5858__part 
                            = vlSelf->__Vfunc_leading_zero32__5858__value;
                        vlSelf->__Vfunc_leading_zero32__5858__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5858__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5858__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5858__count)));
                            vlSelf->__Vfunc_leading_zero32__5858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5858__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5858__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5858__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5858__count)));
                            vlSelf->__Vfunc_leading_zero32__5858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5858__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5858__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5858__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5858__count)));
                            vlSelf->__Vfunc_leading_zero32__5858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5858__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5858__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5858__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5858__count)));
                            vlSelf->__Vfunc_leading_zero32__5858__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5858__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5858__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5858__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5858__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5858__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5858__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5858__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5858__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5864__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5864__part 
                            = vlSelf->__Vfunc_leading_zero32__5864__value;
                        vlSelf->__Vfunc_leading_zero32__5864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5864__count)));
                            vlSelf->__Vfunc_leading_zero32__5864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5864__count)));
                            vlSelf->__Vfunc_leading_zero32__5864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5864__count)));
                            vlSelf->__Vfunc_leading_zero32__5864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5864__count)));
                            vlSelf->__Vfunc_leading_zero32__5864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5864__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5870__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5870__part 
                            = vlSelf->__Vfunc_leading_zero32__5870__value;
                        vlSelf->__Vfunc_leading_zero32__5870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5870__count)));
                            vlSelf->__Vfunc_leading_zero32__5870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5870__count)));
                            vlSelf->__Vfunc_leading_zero32__5870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5870__count)));
                            vlSelf->__Vfunc_leading_zero32__5870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5870__count)));
                            vlSelf->__Vfunc_leading_zero32__5870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5870__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5876__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5876__part 
                            = vlSelf->__Vfunc_leading_zero32__5876__value;
                        vlSelf->__Vfunc_leading_zero32__5876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5876__count)));
                            vlSelf->__Vfunc_leading_zero32__5876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5876__count)));
                            vlSelf->__Vfunc_leading_zero32__5876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5876__count)));
                            vlSelf->__Vfunc_leading_zero32__5876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5876__count)));
                            vlSelf->__Vfunc_leading_zero32__5876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5876__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xcU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xdU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xeU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xfU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x10U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x11U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x12U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x13U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x14U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x15U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x16U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x17U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x18U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x19U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x1aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x1bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x1cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x1dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x1eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x1fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x20U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x21U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x22U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x23U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x24U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x25U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x26U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x27U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x28U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x29U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x2aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x2bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x2cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x2dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x2eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x2fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x30U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x31U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x32U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x33U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x34U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x35U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x36U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x37U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x38U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x39U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x3aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x3bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x3cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x3dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x3eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x3fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x40U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x41U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x42U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x43U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x44U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x45U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x46U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x47U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x48U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x49U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x4aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x4bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x4cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x4dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x4eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x4fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x50U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x51U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x52U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x53U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x54U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x55U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x56U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x57U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x58U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x59U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x5aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x5bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x5cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x5dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x5eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x5fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x60U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x61U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x62U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x63U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x64U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x65U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x66U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x67U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x68U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x69U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x6aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x6bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x6cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x6dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x6eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x6fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x70U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x71U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x72U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x73U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x74U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x75U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x76U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x77U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x78U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x79U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x7aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x7bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x7cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x7dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x7eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x7fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x80U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x81U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x82U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x83U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x84U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x85U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x86U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x87U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x88U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x89U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x8aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x8bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x8cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x8dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x8eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x8fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x90U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x91U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x92U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x93U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x94U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x95U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x96U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x97U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x97U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x98U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x98U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x99U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x99U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x9aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x9aU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x9bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x9bU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x9cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x9cU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x9dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x9dU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x9eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x9eU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0x9fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0x9fU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xa9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xa9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xaaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xaaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xabU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xabU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xacU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xacU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xadU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xadU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xaeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xaeU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xafU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xafU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xb9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xb9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbbU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbcU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbdU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbeU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xbfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xbfU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xc9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xc9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xcaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xcaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xcbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xcbU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xccU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xccU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xcdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xcdU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xceU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xceU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xcfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xcfU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xd9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xd9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xdaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xdaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xdbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xdbU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xdcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xdcU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xddU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xddU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xdeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xdeU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xdfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xdfU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xe9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xe9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xeaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xeaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xebU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xebU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xecU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xecU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xedU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xedU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xeeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xeeU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xefU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xefU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf0U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf1U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf2U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf3U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf4U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf5U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf6U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf7U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf8U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xf9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xf9U]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xfaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xfaU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xfbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xfbU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xfcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xfcU]));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_tensor_array__DOT__captured_a
                             [0xfdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_tensor_array__DOT__captured_a
              [0xfdU]));
}
