// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__5(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__5\n"); );
    // Init
    IData/*16:0*/ __Vfunc_round_bf16__3__Vfuncout;
    __Vfunc_round_bf16__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__3__value;
    __Vfunc_round_bf16__3__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__3__rounded;
    __Vfunc_round_bf16__3__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__8__Vfuncout;
    __Vfunc_round_bf16__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__8__value;
    __Vfunc_round_bf16__8__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__8__rounded;
    __Vfunc_round_bf16__8__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__11__Vfuncout;
    __Vfunc_round_bf16__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__11__value;
    __Vfunc_round_bf16__11__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__11__rounded;
    __Vfunc_round_bf16__11__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__13__Vfuncout;
    __Vfunc_round_bf16__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__13__value;
    __Vfunc_round_bf16__13__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__13__rounded;
    __Vfunc_round_bf16__13__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__33__Vfuncout;
    __Vfunc_round_bf16__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__33__value;
    __Vfunc_round_bf16__33__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__33__rounded;
    __Vfunc_round_bf16__33__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__1585__Vfuncout;
    __Vfunc_round_bf16__1585__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__1585__value;
    __Vfunc_round_bf16__1585__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__1585__rounded;
    __Vfunc_round_bf16__1585__rounded = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12821__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12821__part 
                            = vlSelf->__Vfunc_leading_zero32__12821__value;
                        vlSelf->__Vfunc_leading_zero32__12821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12821__count)));
                            vlSelf->__Vfunc_leading_zero32__12821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12821__count)));
                            vlSelf->__Vfunc_leading_zero32__12821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12821__count)));
                            vlSelf->__Vfunc_leading_zero32__12821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12821__count)));
                            vlSelf->__Vfunc_leading_zero32__12821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12821__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12851__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12851__part 
                            = vlSelf->__Vfunc_leading_zero32__12851__value;
                        vlSelf->__Vfunc_leading_zero32__12851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12851__count)));
                            vlSelf->__Vfunc_leading_zero32__12851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12851__count)));
                            vlSelf->__Vfunc_leading_zero32__12851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12851__count)));
                            vlSelf->__Vfunc_leading_zero32__12851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12851__count)));
                            vlSelf->__Vfunc_leading_zero32__12851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12851__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12857__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12857__part 
                            = vlSelf->__Vfunc_leading_zero32__12857__value;
                        vlSelf->__Vfunc_leading_zero32__12857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12857__count)));
                            vlSelf->__Vfunc_leading_zero32__12857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12857__count)));
                            vlSelf->__Vfunc_leading_zero32__12857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12857__count)));
                            vlSelf->__Vfunc_leading_zero32__12857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12857__count)));
                            vlSelf->__Vfunc_leading_zero32__12857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12857__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12887__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12887__part 
                            = vlSelf->__Vfunc_leading_zero32__12887__value;
                        vlSelf->__Vfunc_leading_zero32__12887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12887__count)));
                            vlSelf->__Vfunc_leading_zero32__12887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12887__count)));
                            vlSelf->__Vfunc_leading_zero32__12887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12887__count)));
                            vlSelf->__Vfunc_leading_zero32__12887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12887__count)));
                            vlSelf->__Vfunc_leading_zero32__12887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12887__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12893__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12893__part 
                            = vlSelf->__Vfunc_leading_zero32__12893__value;
                        vlSelf->__Vfunc_leading_zero32__12893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12893__count)));
                            vlSelf->__Vfunc_leading_zero32__12893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12893__count)));
                            vlSelf->__Vfunc_leading_zero32__12893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12893__count)));
                            vlSelf->__Vfunc_leading_zero32__12893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12893__count)));
                            vlSelf->__Vfunc_leading_zero32__12893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12893__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12923__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12923__part 
                            = vlSelf->__Vfunc_leading_zero32__12923__value;
                        vlSelf->__Vfunc_leading_zero32__12923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12923__count)));
                            vlSelf->__Vfunc_leading_zero32__12923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12923__count)));
                            vlSelf->__Vfunc_leading_zero32__12923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12923__count)));
                            vlSelf->__Vfunc_leading_zero32__12923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12923__count)));
                            vlSelf->__Vfunc_leading_zero32__12923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12923__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12929__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12929__part 
                            = vlSelf->__Vfunc_leading_zero32__12929__value;
                        vlSelf->__Vfunc_leading_zero32__12929__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12929__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12929__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12929__count)));
                            vlSelf->__Vfunc_leading_zero32__12929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12929__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12929__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12929__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12929__count)));
                            vlSelf->__Vfunc_leading_zero32__12929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12929__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12929__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12929__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12929__count)));
                            vlSelf->__Vfunc_leading_zero32__12929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12929__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12929__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12929__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12929__count)));
                            vlSelf->__Vfunc_leading_zero32__12929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12929__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12929__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12929__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12929__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12929__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12929__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12929__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12929__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12959__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12959__part 
                            = vlSelf->__Vfunc_leading_zero32__12959__value;
                        vlSelf->__Vfunc_leading_zero32__12959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12959__count)));
                            vlSelf->__Vfunc_leading_zero32__12959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12959__count)));
                            vlSelf->__Vfunc_leading_zero32__12959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12959__count)));
                            vlSelf->__Vfunc_leading_zero32__12959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12959__count)));
                            vlSelf->__Vfunc_leading_zero32__12959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12959__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12965__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12965__part 
                            = vlSelf->__Vfunc_leading_zero32__12965__value;
                        vlSelf->__Vfunc_leading_zero32__12965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12965__count)));
                            vlSelf->__Vfunc_leading_zero32__12965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12965__count)));
                            vlSelf->__Vfunc_leading_zero32__12965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12965__count)));
                            vlSelf->__Vfunc_leading_zero32__12965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12965__count)));
                            vlSelf->__Vfunc_leading_zero32__12965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12965__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12995__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__12995__part 
                            = vlSelf->__Vfunc_leading_zero32__12995__value;
                        vlSelf->__Vfunc_leading_zero32__12995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12995__count)));
                            vlSelf->__Vfunc_leading_zero32__12995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12995__count)));
                            vlSelf->__Vfunc_leading_zero32__12995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12995__count)));
                            vlSelf->__Vfunc_leading_zero32__12995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12995__count)));
                            vlSelf->__Vfunc_leading_zero32__12995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12995__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13001__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13001__part 
                            = vlSelf->__Vfunc_leading_zero32__13001__value;
                        vlSelf->__Vfunc_leading_zero32__13001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13001__count)));
                            vlSelf->__Vfunc_leading_zero32__13001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13001__count)));
                            vlSelf->__Vfunc_leading_zero32__13001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13001__count)));
                            vlSelf->__Vfunc_leading_zero32__13001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13001__count)));
                            vlSelf->__Vfunc_leading_zero32__13001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13001__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13031__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13031__part 
                            = vlSelf->__Vfunc_leading_zero32__13031__value;
                        vlSelf->__Vfunc_leading_zero32__13031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13031__count)));
                            vlSelf->__Vfunc_leading_zero32__13031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13031__count)));
                            vlSelf->__Vfunc_leading_zero32__13031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13031__count)));
                            vlSelf->__Vfunc_leading_zero32__13031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13031__count)));
                            vlSelf->__Vfunc_leading_zero32__13031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13031__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13037__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13037__part 
                            = vlSelf->__Vfunc_leading_zero32__13037__value;
                        vlSelf->__Vfunc_leading_zero32__13037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13037__count)));
                            vlSelf->__Vfunc_leading_zero32__13037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13037__count)));
                            vlSelf->__Vfunc_leading_zero32__13037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13037__count)));
                            vlSelf->__Vfunc_leading_zero32__13037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13037__count)));
                            vlSelf->__Vfunc_leading_zero32__13037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13037__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13067__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13067__part 
                            = vlSelf->__Vfunc_leading_zero32__13067__value;
                        vlSelf->__Vfunc_leading_zero32__13067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13067__count)));
                            vlSelf->__Vfunc_leading_zero32__13067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13067__count)));
                            vlSelf->__Vfunc_leading_zero32__13067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13067__count)));
                            vlSelf->__Vfunc_leading_zero32__13067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13067__count)));
                            vlSelf->__Vfunc_leading_zero32__13067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13067__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13073__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13073__part 
                            = vlSelf->__Vfunc_leading_zero32__13073__value;
                        vlSelf->__Vfunc_leading_zero32__13073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13073__count)));
                            vlSelf->__Vfunc_leading_zero32__13073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13073__count)));
                            vlSelf->__Vfunc_leading_zero32__13073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13073__count)));
                            vlSelf->__Vfunc_leading_zero32__13073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13073__count)));
                            vlSelf->__Vfunc_leading_zero32__13073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13073__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13103__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13103__part 
                            = vlSelf->__Vfunc_leading_zero32__13103__value;
                        vlSelf->__Vfunc_leading_zero32__13103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13103__count)));
                            vlSelf->__Vfunc_leading_zero32__13103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13103__count)));
                            vlSelf->__Vfunc_leading_zero32__13103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13103__count)));
                            vlSelf->__Vfunc_leading_zero32__13103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13103__count)));
                            vlSelf->__Vfunc_leading_zero32__13103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13103__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13109__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13109__part 
                            = vlSelf->__Vfunc_leading_zero32__13109__value;
                        vlSelf->__Vfunc_leading_zero32__13109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13109__count)));
                            vlSelf->__Vfunc_leading_zero32__13109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13109__count)));
                            vlSelf->__Vfunc_leading_zero32__13109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13109__count)));
                            vlSelf->__Vfunc_leading_zero32__13109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13109__count)));
                            vlSelf->__Vfunc_leading_zero32__13109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13109__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13139__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13139__part 
                            = vlSelf->__Vfunc_leading_zero32__13139__value;
                        vlSelf->__Vfunc_leading_zero32__13139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13139__count)));
                            vlSelf->__Vfunc_leading_zero32__13139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13139__count)));
                            vlSelf->__Vfunc_leading_zero32__13139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13139__count)));
                            vlSelf->__Vfunc_leading_zero32__13139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13139__count)));
                            vlSelf->__Vfunc_leading_zero32__13139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13139__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13145__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13145__part 
                            = vlSelf->__Vfunc_leading_zero32__13145__value;
                        vlSelf->__Vfunc_leading_zero32__13145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13145__count)));
                            vlSelf->__Vfunc_leading_zero32__13145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13145__count)));
                            vlSelf->__Vfunc_leading_zero32__13145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13145__count)));
                            vlSelf->__Vfunc_leading_zero32__13145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13145__count)));
                            vlSelf->__Vfunc_leading_zero32__13145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13145__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13175__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13175__part 
                            = vlSelf->__Vfunc_leading_zero32__13175__value;
                        vlSelf->__Vfunc_leading_zero32__13175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13175__count)));
                            vlSelf->__Vfunc_leading_zero32__13175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13175__count)));
                            vlSelf->__Vfunc_leading_zero32__13175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13175__count)));
                            vlSelf->__Vfunc_leading_zero32__13175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13175__count)));
                            vlSelf->__Vfunc_leading_zero32__13175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13175__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13181__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13181__part 
                            = vlSelf->__Vfunc_leading_zero32__13181__value;
                        vlSelf->__Vfunc_leading_zero32__13181__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13181__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13181__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13181__count)));
                            vlSelf->__Vfunc_leading_zero32__13181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13181__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13181__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13181__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13181__count)));
                            vlSelf->__Vfunc_leading_zero32__13181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13181__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13181__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13181__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13181__count)));
                            vlSelf->__Vfunc_leading_zero32__13181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13181__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13181__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13181__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13181__count)));
                            vlSelf->__Vfunc_leading_zero32__13181__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13181__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13181__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13181__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13181__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13181__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13181__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13181__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13181__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13211__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13211__part 
                            = vlSelf->__Vfunc_leading_zero32__13211__value;
                        vlSelf->__Vfunc_leading_zero32__13211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13211__count)));
                            vlSelf->__Vfunc_leading_zero32__13211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13211__count)));
                            vlSelf->__Vfunc_leading_zero32__13211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13211__count)));
                            vlSelf->__Vfunc_leading_zero32__13211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13211__count)));
                            vlSelf->__Vfunc_leading_zero32__13211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13211__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13217__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13217__part 
                            = vlSelf->__Vfunc_leading_zero32__13217__value;
                        vlSelf->__Vfunc_leading_zero32__13217__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13217__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13217__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13217__count)));
                            vlSelf->__Vfunc_leading_zero32__13217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13217__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13217__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13217__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13217__count)));
                            vlSelf->__Vfunc_leading_zero32__13217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13217__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13217__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13217__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13217__count)));
                            vlSelf->__Vfunc_leading_zero32__13217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13217__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13217__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13217__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13217__count)));
                            vlSelf->__Vfunc_leading_zero32__13217__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13217__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13217__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13217__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13217__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13217__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13217__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13217__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13217__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13247__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13247__part 
                            = vlSelf->__Vfunc_leading_zero32__13247__value;
                        vlSelf->__Vfunc_leading_zero32__13247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13247__count)));
                            vlSelf->__Vfunc_leading_zero32__13247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13247__count)));
                            vlSelf->__Vfunc_leading_zero32__13247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13247__count)));
                            vlSelf->__Vfunc_leading_zero32__13247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13247__count)));
                            vlSelf->__Vfunc_leading_zero32__13247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13247__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13253__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13253__part 
                            = vlSelf->__Vfunc_leading_zero32__13253__value;
                        vlSelf->__Vfunc_leading_zero32__13253__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13253__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13253__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13253__count)));
                            vlSelf->__Vfunc_leading_zero32__13253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13253__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13253__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13253__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13253__count)));
                            vlSelf->__Vfunc_leading_zero32__13253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13253__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13253__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13253__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13253__count)));
                            vlSelf->__Vfunc_leading_zero32__13253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13253__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13253__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13253__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13253__count)));
                            vlSelf->__Vfunc_leading_zero32__13253__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13253__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13253__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13253__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13253__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13253__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13253__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13253__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13253__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13283__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13283__part 
                            = vlSelf->__Vfunc_leading_zero32__13283__value;
                        vlSelf->__Vfunc_leading_zero32__13283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13283__count)));
                            vlSelf->__Vfunc_leading_zero32__13283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13283__count)));
                            vlSelf->__Vfunc_leading_zero32__13283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13283__count)));
                            vlSelf->__Vfunc_leading_zero32__13283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13283__count)));
                            vlSelf->__Vfunc_leading_zero32__13283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13283__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13289__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13289__part 
                            = vlSelf->__Vfunc_leading_zero32__13289__value;
                        vlSelf->__Vfunc_leading_zero32__13289__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13289__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13289__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13289__count)));
                            vlSelf->__Vfunc_leading_zero32__13289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13289__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13289__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13289__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13289__count)));
                            vlSelf->__Vfunc_leading_zero32__13289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13289__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13289__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13289__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13289__count)));
                            vlSelf->__Vfunc_leading_zero32__13289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13289__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13289__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13289__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13289__count)));
                            vlSelf->__Vfunc_leading_zero32__13289__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13289__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13289__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13289__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13289__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13289__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13289__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13289__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13289__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13319__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13319__part 
                            = vlSelf->__Vfunc_leading_zero32__13319__value;
                        vlSelf->__Vfunc_leading_zero32__13319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13319__count)));
                            vlSelf->__Vfunc_leading_zero32__13319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13319__count)));
                            vlSelf->__Vfunc_leading_zero32__13319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13319__count)));
                            vlSelf->__Vfunc_leading_zero32__13319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13319__count)));
                            vlSelf->__Vfunc_leading_zero32__13319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13319__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13325__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13325__part 
                            = vlSelf->__Vfunc_leading_zero32__13325__value;
                        vlSelf->__Vfunc_leading_zero32__13325__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13325__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13325__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13325__count)));
                            vlSelf->__Vfunc_leading_zero32__13325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13325__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13325__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13325__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13325__count)));
                            vlSelf->__Vfunc_leading_zero32__13325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13325__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13325__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13325__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13325__count)));
                            vlSelf->__Vfunc_leading_zero32__13325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13325__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13325__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13325__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13325__count)));
                            vlSelf->__Vfunc_leading_zero32__13325__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13325__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13325__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13325__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13325__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13325__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13325__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13325__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13325__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13355__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13355__part 
                            = vlSelf->__Vfunc_leading_zero32__13355__value;
                        vlSelf->__Vfunc_leading_zero32__13355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13355__count)));
                            vlSelf->__Vfunc_leading_zero32__13355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13355__count)));
                            vlSelf->__Vfunc_leading_zero32__13355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13355__count)));
                            vlSelf->__Vfunc_leading_zero32__13355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13355__count)));
                            vlSelf->__Vfunc_leading_zero32__13355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13355__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13361__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13361__part 
                            = vlSelf->__Vfunc_leading_zero32__13361__value;
                        vlSelf->__Vfunc_leading_zero32__13361__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13361__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13361__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13361__count)));
                            vlSelf->__Vfunc_leading_zero32__13361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13361__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13361__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13361__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13361__count)));
                            vlSelf->__Vfunc_leading_zero32__13361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13361__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13361__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13361__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13361__count)));
                            vlSelf->__Vfunc_leading_zero32__13361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13361__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13361__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13361__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13361__count)));
                            vlSelf->__Vfunc_leading_zero32__13361__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13361__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13361__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13361__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13361__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13361__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13361__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13361__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13361__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13391__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13391__part 
                            = vlSelf->__Vfunc_leading_zero32__13391__value;
                        vlSelf->__Vfunc_leading_zero32__13391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13391__count)));
                            vlSelf->__Vfunc_leading_zero32__13391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13391__count)));
                            vlSelf->__Vfunc_leading_zero32__13391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13391__count)));
                            vlSelf->__Vfunc_leading_zero32__13391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13391__count)));
                            vlSelf->__Vfunc_leading_zero32__13391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13391__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13397__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13397__part 
                            = vlSelf->__Vfunc_leading_zero32__13397__value;
                        vlSelf->__Vfunc_leading_zero32__13397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13397__count)));
                            vlSelf->__Vfunc_leading_zero32__13397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13397__count)));
                            vlSelf->__Vfunc_leading_zero32__13397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13397__count)));
                            vlSelf->__Vfunc_leading_zero32__13397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13397__count)));
                            vlSelf->__Vfunc_leading_zero32__13397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13397__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13427__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13427__part 
                            = vlSelf->__Vfunc_leading_zero32__13427__value;
                        vlSelf->__Vfunc_leading_zero32__13427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13427__count)));
                            vlSelf->__Vfunc_leading_zero32__13427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13427__count)));
                            vlSelf->__Vfunc_leading_zero32__13427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13427__count)));
                            vlSelf->__Vfunc_leading_zero32__13427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13427__count)));
                            vlSelf->__Vfunc_leading_zero32__13427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13427__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13433__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13433__part 
                            = vlSelf->__Vfunc_leading_zero32__13433__value;
                        vlSelf->__Vfunc_leading_zero32__13433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13433__count)));
                            vlSelf->__Vfunc_leading_zero32__13433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13433__count)));
                            vlSelf->__Vfunc_leading_zero32__13433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13433__count)));
                            vlSelf->__Vfunc_leading_zero32__13433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13433__count)));
                            vlSelf->__Vfunc_leading_zero32__13433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13433__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13463__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13463__part 
                            = vlSelf->__Vfunc_leading_zero32__13463__value;
                        vlSelf->__Vfunc_leading_zero32__13463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13463__count)));
                            vlSelf->__Vfunc_leading_zero32__13463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13463__count)));
                            vlSelf->__Vfunc_leading_zero32__13463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13463__count)));
                            vlSelf->__Vfunc_leading_zero32__13463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13463__count)));
                            vlSelf->__Vfunc_leading_zero32__13463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13463__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13469__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13469__part 
                            = vlSelf->__Vfunc_leading_zero32__13469__value;
                        vlSelf->__Vfunc_leading_zero32__13469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13469__count)));
                            vlSelf->__Vfunc_leading_zero32__13469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13469__count)));
                            vlSelf->__Vfunc_leading_zero32__13469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13469__count)));
                            vlSelf->__Vfunc_leading_zero32__13469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13469__count)));
                            vlSelf->__Vfunc_leading_zero32__13469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13469__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13499__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13499__part 
                            = vlSelf->__Vfunc_leading_zero32__13499__value;
                        vlSelf->__Vfunc_leading_zero32__13499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13499__count)));
                            vlSelf->__Vfunc_leading_zero32__13499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13499__count)));
                            vlSelf->__Vfunc_leading_zero32__13499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13499__count)));
                            vlSelf->__Vfunc_leading_zero32__13499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13499__count)));
                            vlSelf->__Vfunc_leading_zero32__13499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13499__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13505__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13505__part 
                            = vlSelf->__Vfunc_leading_zero32__13505__value;
                        vlSelf->__Vfunc_leading_zero32__13505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13505__count)));
                            vlSelf->__Vfunc_leading_zero32__13505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13505__count)));
                            vlSelf->__Vfunc_leading_zero32__13505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13505__count)));
                            vlSelf->__Vfunc_leading_zero32__13505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13505__count)));
                            vlSelf->__Vfunc_leading_zero32__13505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13505__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13535__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13535__part 
                            = vlSelf->__Vfunc_leading_zero32__13535__value;
                        vlSelf->__Vfunc_leading_zero32__13535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13535__count)));
                            vlSelf->__Vfunc_leading_zero32__13535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13535__count)));
                            vlSelf->__Vfunc_leading_zero32__13535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13535__count)));
                            vlSelf->__Vfunc_leading_zero32__13535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13535__count)));
                            vlSelf->__Vfunc_leading_zero32__13535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13535__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13541__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13541__part 
                            = vlSelf->__Vfunc_leading_zero32__13541__value;
                        vlSelf->__Vfunc_leading_zero32__13541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13541__count)));
                            vlSelf->__Vfunc_leading_zero32__13541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13541__count)));
                            vlSelf->__Vfunc_leading_zero32__13541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13541__count)));
                            vlSelf->__Vfunc_leading_zero32__13541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13541__count)));
                            vlSelf->__Vfunc_leading_zero32__13541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13541__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13571__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13571__part 
                            = vlSelf->__Vfunc_leading_zero32__13571__value;
                        vlSelf->__Vfunc_leading_zero32__13571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13571__count)));
                            vlSelf->__Vfunc_leading_zero32__13571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13571__count)));
                            vlSelf->__Vfunc_leading_zero32__13571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13571__count)));
                            vlSelf->__Vfunc_leading_zero32__13571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13571__count)));
                            vlSelf->__Vfunc_leading_zero32__13571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13571__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13577__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13577__part 
                            = vlSelf->__Vfunc_leading_zero32__13577__value;
                        vlSelf->__Vfunc_leading_zero32__13577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13577__count)));
                            vlSelf->__Vfunc_leading_zero32__13577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13577__count)));
                            vlSelf->__Vfunc_leading_zero32__13577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13577__count)));
                            vlSelf->__Vfunc_leading_zero32__13577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13577__count)));
                            vlSelf->__Vfunc_leading_zero32__13577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13577__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13607__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13607__part 
                            = vlSelf->__Vfunc_leading_zero32__13607__value;
                        vlSelf->__Vfunc_leading_zero32__13607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13607__count)));
                            vlSelf->__Vfunc_leading_zero32__13607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13607__count)));
                            vlSelf->__Vfunc_leading_zero32__13607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13607__count)));
                            vlSelf->__Vfunc_leading_zero32__13607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13607__count)));
                            vlSelf->__Vfunc_leading_zero32__13607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13607__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13613__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13613__part 
                            = vlSelf->__Vfunc_leading_zero32__13613__value;
                        vlSelf->__Vfunc_leading_zero32__13613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13613__count)));
                            vlSelf->__Vfunc_leading_zero32__13613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13613__count)));
                            vlSelf->__Vfunc_leading_zero32__13613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13613__count)));
                            vlSelf->__Vfunc_leading_zero32__13613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13613__count)));
                            vlSelf->__Vfunc_leading_zero32__13613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13613__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13643__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13643__part 
                            = vlSelf->__Vfunc_leading_zero32__13643__value;
                        vlSelf->__Vfunc_leading_zero32__13643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13643__count)));
                            vlSelf->__Vfunc_leading_zero32__13643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13643__count)));
                            vlSelf->__Vfunc_leading_zero32__13643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13643__count)));
                            vlSelf->__Vfunc_leading_zero32__13643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13643__count)));
                            vlSelf->__Vfunc_leading_zero32__13643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13643__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13649__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13649__part 
                            = vlSelf->__Vfunc_leading_zero32__13649__value;
                        vlSelf->__Vfunc_leading_zero32__13649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13649__count)));
                            vlSelf->__Vfunc_leading_zero32__13649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13649__count)));
                            vlSelf->__Vfunc_leading_zero32__13649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13649__count)));
                            vlSelf->__Vfunc_leading_zero32__13649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13649__count)));
                            vlSelf->__Vfunc_leading_zero32__13649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13649__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13679__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13679__part 
                            = vlSelf->__Vfunc_leading_zero32__13679__value;
                        vlSelf->__Vfunc_leading_zero32__13679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13679__count)));
                            vlSelf->__Vfunc_leading_zero32__13679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13679__count)));
                            vlSelf->__Vfunc_leading_zero32__13679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13679__count)));
                            vlSelf->__Vfunc_leading_zero32__13679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13679__count)));
                            vlSelf->__Vfunc_leading_zero32__13679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13679__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13685__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13685__part 
                            = vlSelf->__Vfunc_leading_zero32__13685__value;
                        vlSelf->__Vfunc_leading_zero32__13685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13685__count)));
                            vlSelf->__Vfunc_leading_zero32__13685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13685__count)));
                            vlSelf->__Vfunc_leading_zero32__13685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13685__count)));
                            vlSelf->__Vfunc_leading_zero32__13685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13685__count)));
                            vlSelf->__Vfunc_leading_zero32__13685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13685__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13715__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13715__part 
                            = vlSelf->__Vfunc_leading_zero32__13715__value;
                        vlSelf->__Vfunc_leading_zero32__13715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13715__count)));
                            vlSelf->__Vfunc_leading_zero32__13715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13715__count)));
                            vlSelf->__Vfunc_leading_zero32__13715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13715__count)));
                            vlSelf->__Vfunc_leading_zero32__13715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13715__count)));
                            vlSelf->__Vfunc_leading_zero32__13715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13715__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13721__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13721__part 
                            = vlSelf->__Vfunc_leading_zero32__13721__value;
                        vlSelf->__Vfunc_leading_zero32__13721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13721__count)));
                            vlSelf->__Vfunc_leading_zero32__13721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13721__count)));
                            vlSelf->__Vfunc_leading_zero32__13721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13721__count)));
                            vlSelf->__Vfunc_leading_zero32__13721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13721__count)));
                            vlSelf->__Vfunc_leading_zero32__13721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13721__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13751__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13751__part 
                            = vlSelf->__Vfunc_leading_zero32__13751__value;
                        vlSelf->__Vfunc_leading_zero32__13751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13751__count)));
                            vlSelf->__Vfunc_leading_zero32__13751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13751__count)));
                            vlSelf->__Vfunc_leading_zero32__13751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13751__count)));
                            vlSelf->__Vfunc_leading_zero32__13751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13751__count)));
                            vlSelf->__Vfunc_leading_zero32__13751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13751__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13757__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13757__part 
                            = vlSelf->__Vfunc_leading_zero32__13757__value;
                        vlSelf->__Vfunc_leading_zero32__13757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13757__count)));
                            vlSelf->__Vfunc_leading_zero32__13757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13757__count)));
                            vlSelf->__Vfunc_leading_zero32__13757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13757__count)));
                            vlSelf->__Vfunc_leading_zero32__13757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13757__count)));
                            vlSelf->__Vfunc_leading_zero32__13757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13757__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13787__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13787__part 
                            = vlSelf->__Vfunc_leading_zero32__13787__value;
                        vlSelf->__Vfunc_leading_zero32__13787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13787__count)));
                            vlSelf->__Vfunc_leading_zero32__13787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13787__count)));
                            vlSelf->__Vfunc_leading_zero32__13787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13787__count)));
                            vlSelf->__Vfunc_leading_zero32__13787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13787__count)));
                            vlSelf->__Vfunc_leading_zero32__13787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13787__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13793__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13793__part 
                            = vlSelf->__Vfunc_leading_zero32__13793__value;
                        vlSelf->__Vfunc_leading_zero32__13793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13793__count)));
                            vlSelf->__Vfunc_leading_zero32__13793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13793__count)));
                            vlSelf->__Vfunc_leading_zero32__13793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13793__count)));
                            vlSelf->__Vfunc_leading_zero32__13793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13793__count)));
                            vlSelf->__Vfunc_leading_zero32__13793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13793__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13823__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13823__part 
                            = vlSelf->__Vfunc_leading_zero32__13823__value;
                        vlSelf->__Vfunc_leading_zero32__13823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13823__count)));
                            vlSelf->__Vfunc_leading_zero32__13823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13823__count)));
                            vlSelf->__Vfunc_leading_zero32__13823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13823__count)));
                            vlSelf->__Vfunc_leading_zero32__13823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13823__count)));
                            vlSelf->__Vfunc_leading_zero32__13823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13823__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13829__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13829__part 
                            = vlSelf->__Vfunc_leading_zero32__13829__value;
                        vlSelf->__Vfunc_leading_zero32__13829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13829__count)));
                            vlSelf->__Vfunc_leading_zero32__13829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13829__count)));
                            vlSelf->__Vfunc_leading_zero32__13829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13829__count)));
                            vlSelf->__Vfunc_leading_zero32__13829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13829__count)));
                            vlSelf->__Vfunc_leading_zero32__13829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13829__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13859__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13859__part 
                            = vlSelf->__Vfunc_leading_zero32__13859__value;
                        vlSelf->__Vfunc_leading_zero32__13859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13859__count)));
                            vlSelf->__Vfunc_leading_zero32__13859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13859__count)));
                            vlSelf->__Vfunc_leading_zero32__13859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13859__count)));
                            vlSelf->__Vfunc_leading_zero32__13859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13859__count)));
                            vlSelf->__Vfunc_leading_zero32__13859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13859__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13865__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13865__part 
                            = vlSelf->__Vfunc_leading_zero32__13865__value;
                        vlSelf->__Vfunc_leading_zero32__13865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13865__count)));
                            vlSelf->__Vfunc_leading_zero32__13865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13865__count)));
                            vlSelf->__Vfunc_leading_zero32__13865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13865__count)));
                            vlSelf->__Vfunc_leading_zero32__13865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13865__count)));
                            vlSelf->__Vfunc_leading_zero32__13865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13865__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13895__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13895__part 
                            = vlSelf->__Vfunc_leading_zero32__13895__value;
                        vlSelf->__Vfunc_leading_zero32__13895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13895__count)));
                            vlSelf->__Vfunc_leading_zero32__13895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13895__count)));
                            vlSelf->__Vfunc_leading_zero32__13895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13895__count)));
                            vlSelf->__Vfunc_leading_zero32__13895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13895__count)));
                            vlSelf->__Vfunc_leading_zero32__13895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13895__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13901__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13901__part 
                            = vlSelf->__Vfunc_leading_zero32__13901__value;
                        vlSelf->__Vfunc_leading_zero32__13901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13901__count)));
                            vlSelf->__Vfunc_leading_zero32__13901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13901__count)));
                            vlSelf->__Vfunc_leading_zero32__13901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13901__count)));
                            vlSelf->__Vfunc_leading_zero32__13901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13901__count)));
                            vlSelf->__Vfunc_leading_zero32__13901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13901__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13931__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13931__part 
                            = vlSelf->__Vfunc_leading_zero32__13931__value;
                        vlSelf->__Vfunc_leading_zero32__13931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13931__count)));
                            vlSelf->__Vfunc_leading_zero32__13931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13931__count)));
                            vlSelf->__Vfunc_leading_zero32__13931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13931__count)));
                            vlSelf->__Vfunc_leading_zero32__13931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13931__count)));
                            vlSelf->__Vfunc_leading_zero32__13931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13931__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13937__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13937__part 
                            = vlSelf->__Vfunc_leading_zero32__13937__value;
                        vlSelf->__Vfunc_leading_zero32__13937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13937__count)));
                            vlSelf->__Vfunc_leading_zero32__13937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13937__count)));
                            vlSelf->__Vfunc_leading_zero32__13937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13937__count)));
                            vlSelf->__Vfunc_leading_zero32__13937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13937__count)));
                            vlSelf->__Vfunc_leading_zero32__13937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13937__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13967__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13967__part 
                            = vlSelf->__Vfunc_leading_zero32__13967__value;
                        vlSelf->__Vfunc_leading_zero32__13967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13967__count)));
                            vlSelf->__Vfunc_leading_zero32__13967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13967__count)));
                            vlSelf->__Vfunc_leading_zero32__13967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13967__count)));
                            vlSelf->__Vfunc_leading_zero32__13967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13967__count)));
                            vlSelf->__Vfunc_leading_zero32__13967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13967__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13973__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__13973__part 
                            = vlSelf->__Vfunc_leading_zero32__13973__value;
                        vlSelf->__Vfunc_leading_zero32__13973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13973__count)));
                            vlSelf->__Vfunc_leading_zero32__13973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13973__count)));
                            vlSelf->__Vfunc_leading_zero32__13973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13973__count)));
                            vlSelf->__Vfunc_leading_zero32__13973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13973__count)));
                            vlSelf->__Vfunc_leading_zero32__13973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13973__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14003__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14003__part 
                            = vlSelf->__Vfunc_leading_zero32__14003__value;
                        vlSelf->__Vfunc_leading_zero32__14003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14003__count)));
                            vlSelf->__Vfunc_leading_zero32__14003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14003__count)));
                            vlSelf->__Vfunc_leading_zero32__14003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14003__count)));
                            vlSelf->__Vfunc_leading_zero32__14003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14003__count)));
                            vlSelf->__Vfunc_leading_zero32__14003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14003__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14009__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14009__part 
                            = vlSelf->__Vfunc_leading_zero32__14009__value;
                        vlSelf->__Vfunc_leading_zero32__14009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14009__count)));
                            vlSelf->__Vfunc_leading_zero32__14009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14009__count)));
                            vlSelf->__Vfunc_leading_zero32__14009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14009__count)));
                            vlSelf->__Vfunc_leading_zero32__14009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14009__count)));
                            vlSelf->__Vfunc_leading_zero32__14009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14009__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14039__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14039__part 
                            = vlSelf->__Vfunc_leading_zero32__14039__value;
                        vlSelf->__Vfunc_leading_zero32__14039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14039__count)));
                            vlSelf->__Vfunc_leading_zero32__14039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14039__count)));
                            vlSelf->__Vfunc_leading_zero32__14039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14039__count)));
                            vlSelf->__Vfunc_leading_zero32__14039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14039__count)));
                            vlSelf->__Vfunc_leading_zero32__14039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14039__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14045__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14045__part 
                            = vlSelf->__Vfunc_leading_zero32__14045__value;
                        vlSelf->__Vfunc_leading_zero32__14045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14045__count)));
                            vlSelf->__Vfunc_leading_zero32__14045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14045__count)));
                            vlSelf->__Vfunc_leading_zero32__14045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14045__count)));
                            vlSelf->__Vfunc_leading_zero32__14045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14045__count)));
                            vlSelf->__Vfunc_leading_zero32__14045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14045__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14075__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14075__part 
                            = vlSelf->__Vfunc_leading_zero32__14075__value;
                        vlSelf->__Vfunc_leading_zero32__14075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14075__count)));
                            vlSelf->__Vfunc_leading_zero32__14075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14075__count)));
                            vlSelf->__Vfunc_leading_zero32__14075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14075__count)));
                            vlSelf->__Vfunc_leading_zero32__14075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14075__count)));
                            vlSelf->__Vfunc_leading_zero32__14075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14075__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14081__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14081__part 
                            = vlSelf->__Vfunc_leading_zero32__14081__value;
                        vlSelf->__Vfunc_leading_zero32__14081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14081__count)));
                            vlSelf->__Vfunc_leading_zero32__14081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14081__count)));
                            vlSelf->__Vfunc_leading_zero32__14081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14081__count)));
                            vlSelf->__Vfunc_leading_zero32__14081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14081__count)));
                            vlSelf->__Vfunc_leading_zero32__14081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14081__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14111__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14111__part 
                            = vlSelf->__Vfunc_leading_zero32__14111__value;
                        vlSelf->__Vfunc_leading_zero32__14111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14111__count)));
                            vlSelf->__Vfunc_leading_zero32__14111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14111__count)));
                            vlSelf->__Vfunc_leading_zero32__14111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14111__count)));
                            vlSelf->__Vfunc_leading_zero32__14111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14111__count)));
                            vlSelf->__Vfunc_leading_zero32__14111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14111__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14117__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14117__part 
                            = vlSelf->__Vfunc_leading_zero32__14117__value;
                        vlSelf->__Vfunc_leading_zero32__14117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14117__count)));
                            vlSelf->__Vfunc_leading_zero32__14117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14117__count)));
                            vlSelf->__Vfunc_leading_zero32__14117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14117__count)));
                            vlSelf->__Vfunc_leading_zero32__14117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14117__count)));
                            vlSelf->__Vfunc_leading_zero32__14117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14117__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14147__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14147__part 
                            = vlSelf->__Vfunc_leading_zero32__14147__value;
                        vlSelf->__Vfunc_leading_zero32__14147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14147__count)));
                            vlSelf->__Vfunc_leading_zero32__14147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14147__count)));
                            vlSelf->__Vfunc_leading_zero32__14147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14147__count)));
                            vlSelf->__Vfunc_leading_zero32__14147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14147__count)));
                            vlSelf->__Vfunc_leading_zero32__14147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14147__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14153__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14153__part 
                            = vlSelf->__Vfunc_leading_zero32__14153__value;
                        vlSelf->__Vfunc_leading_zero32__14153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14153__count)));
                            vlSelf->__Vfunc_leading_zero32__14153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14153__count)));
                            vlSelf->__Vfunc_leading_zero32__14153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14153__count)));
                            vlSelf->__Vfunc_leading_zero32__14153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14153__count)));
                            vlSelf->__Vfunc_leading_zero32__14153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14153__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14183__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14183__part 
                            = vlSelf->__Vfunc_leading_zero32__14183__value;
                        vlSelf->__Vfunc_leading_zero32__14183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14183__count)));
                            vlSelf->__Vfunc_leading_zero32__14183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14183__count)));
                            vlSelf->__Vfunc_leading_zero32__14183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14183__count)));
                            vlSelf->__Vfunc_leading_zero32__14183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14183__count)));
                            vlSelf->__Vfunc_leading_zero32__14183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14183__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14189__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14189__part 
                            = vlSelf->__Vfunc_leading_zero32__14189__value;
                        vlSelf->__Vfunc_leading_zero32__14189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14189__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14219__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14219__part 
                            = vlSelf->__Vfunc_leading_zero32__14219__value;
                        vlSelf->__Vfunc_leading_zero32__14219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14219__count)));
                            vlSelf->__Vfunc_leading_zero32__14219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14219__count)));
                            vlSelf->__Vfunc_leading_zero32__14219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14219__count)));
                            vlSelf->__Vfunc_leading_zero32__14219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14219__count)));
                            vlSelf->__Vfunc_leading_zero32__14219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14219__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14225__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14225__part 
                            = vlSelf->__Vfunc_leading_zero32__14225__value;
                        vlSelf->__Vfunc_leading_zero32__14225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14225__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14255__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14255__part 
                            = vlSelf->__Vfunc_leading_zero32__14255__value;
                        vlSelf->__Vfunc_leading_zero32__14255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14255__count)));
                            vlSelf->__Vfunc_leading_zero32__14255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14255__count)));
                            vlSelf->__Vfunc_leading_zero32__14255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14255__count)));
                            vlSelf->__Vfunc_leading_zero32__14255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14255__count)));
                            vlSelf->__Vfunc_leading_zero32__14255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14255__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14261__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14261__part 
                            = vlSelf->__Vfunc_leading_zero32__14261__value;
                        vlSelf->__Vfunc_leading_zero32__14261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14261__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->anvil_qn1_top__DOT____VdfgTmp_hc9eec2f8__0 
        = ((~ (IData)(vlSelf->cancel)) & (IData)(vlSelf->rst_n));
    __Vfunc_round_bf16__3__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__product;
    __Vfunc_round_bf16__3__rounded = (0x1ffffU & ((__Vfunc_round_bf16__3__value 
                                                   >> 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((__Vfunc_round_bf16__3__value 
                                                       >> 0xfU) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x17fffU 
                                                                  & __Vfunc_round_bf16__3__value)))))));
    __Vfunc_round_bf16__3__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__4__value 
                        = __Vfunc_round_bf16__3__value;
                    vlSelf->__Vfunc_fp32_invalid__4__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__4__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__4__Vfuncout)) 
                                        | (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_round_bf16__3__rounded 
                                             >> 7U))))
                                        ? 0x10000U : 
                                       (0xffffU & __Vfunc_round_bf16__3__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__3__Vfuncout;
    __Vfunc_round_bf16__8__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__sum;
    __Vfunc_round_bf16__8__rounded = (0x1ffffU & ((__Vfunc_round_bf16__8__value 
                                                   >> 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((__Vfunc_round_bf16__8__value 
                                                       >> 0xfU) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x17fffU 
                                                                  & __Vfunc_round_bf16__8__value)))))));
    __Vfunc_round_bf16__8__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__9__value 
                        = __Vfunc_round_bf16__8__value;
                    vlSelf->__Vfunc_fp32_invalid__9__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__9__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__9__Vfuncout)) 
                                        | (0xffU == 
                                           (0xffU & 
                                            (__Vfunc_round_bf16__8__rounded 
                                             >> 7U))))
                                        ? 0x10000U : 
                                       (0xffffU & __Vfunc_round_bf16__8__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__8__Vfuncout;
    __Vfunc_round_bf16__11__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product;
    __Vfunc_round_bf16__11__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__11__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__11__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__11__value)))))));
    __Vfunc_round_bf16__11__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__12__value 
                        = __Vfunc_round_bf16__11__value;
                    vlSelf->__Vfunc_fp32_invalid__12__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__12__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__12__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__11__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__11__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__11__Vfuncout;
    __Vfunc_round_bf16__13__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__quotient;
    __Vfunc_round_bf16__13__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__13__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__13__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__13__value)))))));
    __Vfunc_round_bf16__13__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__14__value 
                        = __Vfunc_round_bf16__13__value;
                    vlSelf->__Vfunc_fp32_invalid__14__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__14__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__14__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__13__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__13__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__rounded 
        = __Vfunc_round_bf16__13__Vfuncout;
    __Vfunc_round_bf16__33__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient;
    __Vfunc_round_bf16__33__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__33__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__33__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__33__value)))))));
    __Vfunc_round_bf16__33__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__34__value 
                        = __Vfunc_round_bf16__33__value;
                    vlSelf->__Vfunc_fp32_invalid__34__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__34__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__34__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__33__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__33__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__33__Vfuncout;
    __Vfunc_round_bf16__1585__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
    __Vfunc_round_bf16__1585__rounded = (0x1ffffU & 
                                         ((__Vfunc_round_bf16__1585__value 
                                           >> 0x10U) 
                                          + (1U & (
                                                   (__Vfunc_round_bf16__1585__value 
                                                    >> 0xfU) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0x17fffU 
                                                               & __Vfunc_round_bf16__1585__value)))))));
    __Vfunc_round_bf16__1585__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__1586__value 
                        = __Vfunc_round_bf16__1585__value;
                    vlSelf->__Vfunc_fp32_invalid__1586__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__1586__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__1586__Vfuncout)) 
                                           | (0xffU 
                                              == (0xffU 
                                                  & (__Vfunc_round_bf16__1585__rounded 
                                                     >> 7U))))
                                           ? 0x10000U
                                           : (0xffffU 
                                              & __Vfunc_round_bf16__1585__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__1585__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__host_request_invalid 
        = (1U & ((0x25180U <= vlSelf->token_id) | (
                                                   (0xa000U 
                                                    <= vlSelf->token_pos) 
                                                   | ((IData)(vlSelf->new_sequence)
                                                       ? 
                                                      (0U 
                                                       != vlSelf->token_pos)
                                                       : 
                                                      ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__sequence_valid)) 
                                                       | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__exhausted) 
                                                          | ((vlSelf->token_pos 
                                                              != vlSelf->anvil_qn1_top__DOT__native__DOT__next_position) 
                                                             | (((~ (IData)(vlSelf->token_phase)) 
                                                                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decode_started)) 
                                                                | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__pending_final) 
                                                                   & ((~ (IData)(vlSelf->token_phase)) 
                                                                      | ((vlSelf->token_pos 
                                                                          != vlSelf->anvil_qn1_top__DOT__native__DOT__pending_position) 
                                                                         | (vlSelf->token_id 
                                                                            != vlSelf->anvil_qn1_top__DOT__native__DOT__pending_token))))))))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__depths[0U] 
        = (((0U < (IData)(vlSelf->draft_count)) & (4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->draft_parents))))
            ? 1U : 0U);
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x10U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x11U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x12U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x13U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x14U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x15U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x16U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x17U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x18U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x19U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x1fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x20U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x21U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x22U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x23U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x24U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x25U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x26U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x27U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x28U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x29U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x2fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x30U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x31U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x32U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x33U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x34U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x35U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x36U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x37U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x38U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x39U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x3fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x40U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x41U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x42U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x43U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x44U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x45U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x46U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x47U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x48U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x49U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x4fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x50U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x51U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x52U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x53U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x54U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x55U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x56U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x57U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x58U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x59U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x5fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x60U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x61U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x62U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x63U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x64U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x65U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x66U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x67U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x68U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x69U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x6fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x70U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x71U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x72U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x73U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x74U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x75U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x76U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x77U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x78U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x79U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x7fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x80U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x81U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x82U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x83U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x84U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x85U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x86U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x87U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x88U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x89U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x8fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x90U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x91U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x92U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x93U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x94U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x95U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x96U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x97U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x97U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x98U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x98U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x99U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x99U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0x9fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0x9fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xa9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xa9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xabU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xabU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xacU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xacU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xadU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xadU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xaeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xaeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xafU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xafU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xb9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xb9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xbfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xbfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xc9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xc9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xccU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xccU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xceU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xceU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xcfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xcfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xd9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xd9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xddU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xddU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xdfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xdfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xe9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xe9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xebU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xebU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xecU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xecU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xedU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xedU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xeeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xeeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xefU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xefU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xf9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xf9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xfeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xfeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
                             [0xffU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_a
              [0xffU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [1U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [2U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [3U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [4U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [5U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [6U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [7U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [8U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [9U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xaU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xbU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xcU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xdU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xeU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0xfU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0xfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x10U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x10U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x11U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x11U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x12U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x12U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x13U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x13U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x14U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x14U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x15U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x15U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x16U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x16U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x17U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x17U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x18U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x18U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x19U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x19U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x1fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x1fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x20U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x20U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x21U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x21U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x22U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x22U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x23U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x23U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x24U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x24U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x25U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x25U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x26U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x26U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x27U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x27U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x28U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x28U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x29U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x29U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x2fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x2fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x30U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x30U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x31U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x31U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x32U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x32U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x33U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x33U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x34U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x34U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x35U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x35U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x36U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x36U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x37U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x37U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x38U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x38U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x39U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x39U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x3fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x3fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x40U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x40U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x41U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x41U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x42U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x42U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x43U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x43U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x44U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x44U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x45U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x45U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x46U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x46U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x47U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x47U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x48U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x48U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x49U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x49U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x4fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x4fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x50U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x50U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x51U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x51U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x52U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x52U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x53U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x53U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x54U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x54U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x55U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x55U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x56U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x56U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x57U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x57U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x58U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x58U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x59U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x59U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x5fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x5fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x60U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x60U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x61U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x61U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x62U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x62U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x63U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x63U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x64U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x64U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x65U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x65U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x66U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x66U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x67U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x67U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x68U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x68U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x69U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x69U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x6fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x6fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x70U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x70U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x71U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x71U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x72U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x72U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x73U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x73U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x74U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x74U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x75U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x75U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x76U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x76U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x77U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x77U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x78U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x78U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x79U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x79U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x7fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x7fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x80U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x80U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x81U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x81U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x82U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x82U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x83U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x83U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x84U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x84U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x85U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x85U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x86U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x86U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x87U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x87U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x88U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x88U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x89U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x89U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8aU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8bU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8cU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8dU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8eU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x8fU] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x8fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x90U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x90U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x91U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x91U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x92U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x92U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x93U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x93U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x94U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x94U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x95U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x95U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
                             [0x96U] >> 0x17U))) << 0x17U) 
           | (0x7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__captured_b
              [0x96U]));
}
