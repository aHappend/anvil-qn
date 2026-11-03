// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__15(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__15\n"); );
    // Init
    CData/*5:0*/ top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift;
    top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0;
    top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 = 0;
    QData/*32:0*/ __Vfunc_round_pack32__6289__Vfuncout;
    __Vfunc_round_pack32__6289__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__6289__exponent;
    __Vfunc_round_pack32__6289__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__6289__significand;
    __Vfunc_round_pack32__6289__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__6289__shifted;
    __Vfunc_round_pack32__6289__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__6289__rounded;
    __Vfunc_round_pack32__6289__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__6289__adjusted;
    __Vfunc_round_pack32__6289__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__6289__biased;
    __Vfunc_round_pack32__6289__biased = 0;
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4740__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4740__part 
                            = vlSelf->__Vfunc_leading_zero32__4740__value;
                        vlSelf->__Vfunc_leading_zero32__4740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4740__count)));
                            vlSelf->__Vfunc_leading_zero32__4740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4740__count)));
                            vlSelf->__Vfunc_leading_zero32__4740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4740__count)));
                            vlSelf->__Vfunc_leading_zero32__4740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4740__count)));
                            vlSelf->__Vfunc_leading_zero32__4740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4752__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4752__part 
                            = vlSelf->__Vfunc_leading_zero32__4752__value;
                        vlSelf->__Vfunc_leading_zero32__4752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand_ready 
        = ((0x1eU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projected_heads__start_valid 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__configuring_head) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6369__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw;
                        vlSelf->__Vfunc_leading_zero32__6369__part 
                            = vlSelf->__Vfunc_leading_zero32__6369__value;
                        vlSelf->__Vfunc_leading_zero32__6369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6369__count)));
                            vlSelf->__Vfunc_leading_zero32__6369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6369__count)));
                            vlSelf->__Vfunc_leading_zero32__6369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6369__count)));
                            vlSelf->__Vfunc_leading_zero32__6369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6369__count)));
                            vlSelf->__Vfunc_leading_zero32__6369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6369__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6374__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6374__part 
                            = vlSelf->__Vfunc_leading_zero32__6374__value;
                        vlSelf->__Vfunc_leading_zero32__6374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6374__count)));
                            vlSelf->__Vfunc_leading_zero32__6374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6374__count)));
                            vlSelf->__Vfunc_leading_zero32__6374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6374__count)));
                            vlSelf->__Vfunc_leading_zero32__6374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6374__count)));
                            vlSelf->__Vfunc_leading_zero32__6374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6374__Vfuncout)) 
                             - (IData)(8U))));
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
    }
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
    }
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
    }
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__tensor_bad 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov) 
           & ((((5U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov) 
                   & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                      & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5)))) 
               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov)
                    ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__tags
                   [0x30U] : 0U) != vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row)) 
              | ([&]() {
                    vlSelf->__Vfunc_fp32_invalid__146__value 
                        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tsum;
                    vlSelf->__Vfunc_fp32_invalid__146__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__146__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__146__Vfuncout))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7190__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7190__part 
                            = vlSelf->__Vfunc_leading_zero32__7190__value;
                        vlSelf->__Vfunc_leading_zero32__7190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7190__count)));
                            vlSelf->__Vfunc_leading_zero32__7190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7190__count)));
                            vlSelf->__Vfunc_leading_zero32__7190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7190__count)));
                            vlSelf->__Vfunc_leading_zero32__7190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7190__count)));
                            vlSelf->__Vfunc_leading_zero32__7190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7202__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7202__part 
                            = vlSelf->__Vfunc_leading_zero32__7202__value;
                        vlSelf->__Vfunc_leading_zero32__7202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7202__count)));
                            vlSelf->__Vfunc_leading_zero32__7202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7202__count)));
                            vlSelf->__Vfunc_leading_zero32__7202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7202__count)));
                            vlSelf->__Vfunc_leading_zero32__7202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7202__count)));
                            vlSelf->__Vfunc_leading_zero32__7202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7214__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7214__part 
                            = vlSelf->__Vfunc_leading_zero32__7214__value;
                        vlSelf->__Vfunc_leading_zero32__7214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7214__count)));
                            vlSelf->__Vfunc_leading_zero32__7214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7214__count)));
                            vlSelf->__Vfunc_leading_zero32__7214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7214__count)));
                            vlSelf->__Vfunc_leading_zero32__7214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7214__count)));
                            vlSelf->__Vfunc_leading_zero32__7214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7226__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7226__part 
                            = vlSelf->__Vfunc_leading_zero32__7226__value;
                        vlSelf->__Vfunc_leading_zero32__7226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7226__count)));
                            vlSelf->__Vfunc_leading_zero32__7226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7226__count)));
                            vlSelf->__Vfunc_leading_zero32__7226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7226__count)));
                            vlSelf->__Vfunc_leading_zero32__7226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7226__count)));
                            vlSelf->__Vfunc_leading_zero32__7226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7238__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7238__part 
                            = vlSelf->__Vfunc_leading_zero32__7238__value;
                        vlSelf->__Vfunc_leading_zero32__7238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7238__count)));
                            vlSelf->__Vfunc_leading_zero32__7238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7238__count)));
                            vlSelf->__Vfunc_leading_zero32__7238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7238__count)));
                            vlSelf->__Vfunc_leading_zero32__7238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7238__count)));
                            vlSelf->__Vfunc_leading_zero32__7238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7250__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7250__part 
                            = vlSelf->__Vfunc_leading_zero32__7250__value;
                        vlSelf->__Vfunc_leading_zero32__7250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7250__count)));
                            vlSelf->__Vfunc_leading_zero32__7250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7250__count)));
                            vlSelf->__Vfunc_leading_zero32__7250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7250__count)));
                            vlSelf->__Vfunc_leading_zero32__7250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7250__count)));
                            vlSelf->__Vfunc_leading_zero32__7250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7262__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7262__part 
                            = vlSelf->__Vfunc_leading_zero32__7262__value;
                        vlSelf->__Vfunc_leading_zero32__7262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7262__count)));
                            vlSelf->__Vfunc_leading_zero32__7262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7262__count)));
                            vlSelf->__Vfunc_leading_zero32__7262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7262__count)));
                            vlSelf->__Vfunc_leading_zero32__7262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7262__count)));
                            vlSelf->__Vfunc_leading_zero32__7262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7274__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7274__part 
                            = vlSelf->__Vfunc_leading_zero32__7274__value;
                        vlSelf->__Vfunc_leading_zero32__7274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7274__count)));
                            vlSelf->__Vfunc_leading_zero32__7274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7274__count)));
                            vlSelf->__Vfunc_leading_zero32__7274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7274__count)));
                            vlSelf->__Vfunc_leading_zero32__7274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7274__count)));
                            vlSelf->__Vfunc_leading_zero32__7274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7274__Vfuncout)) 
                             - (IData)(8U))));
    top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6288__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw;
                        vlSelf->__Vfunc_leading_zero32__6288__part 
                            = vlSelf->__Vfunc_leading_zero32__6288__value;
                        vlSelf->__Vfunc_leading_zero32__6288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6288__count)));
                            vlSelf->__Vfunc_leading_zero32__6288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6288__count)));
                            vlSelf->__Vfunc_leading_zero32__6288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6288__count)));
                            vlSelf->__Vfunc_leading_zero32__6288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6288__count)));
                            vlSelf->__Vfunc_leading_zero32__6288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0 
        = (1U & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__configuring_head)) 
                 | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__head_start_ready)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_transfer 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__dual_think_ctrl__verify_rsp_valid) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_rsp_ready));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault 
        = ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_expected)) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__dual_think_ctrl__verify_rsp_valid));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__input_exponent 
        = (0xfffU & (((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0))
                       ? 0xf82U : ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0) 
                                   - (IData)(0x7fU))) 
                     - (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__normalized_b 
        = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b, (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_b)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    __Vfunc_round_pack32__6289__significand = (0x7fffff8U 
                                               & (VL_SHIFTL_III(24,24,6, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw, (IData)(top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift)) 
                                                  << 3U));
    __Vfunc_round_pack32__6289__exponent = (0xfffU 
                                            & ((((0U 
                                                  == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____VdfgTmp_ha1a50253__0))
                                                  ? 0xf82U
                                                  : 
                                                 ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____VdfgTmp_ha1a50253__0) 
                                                  - (IData)(0x7fU))) 
                                                - (IData)(top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift)) 
                                               - (IData)(3U)));
    __Vfunc_round_pack32__6289__adjusted = __Vfunc_round_pack32__6289__exponent;
    __Vfunc_round_pack32__6289__shifted = __Vfunc_round_pack32__6289__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__6289__exponent))) {
        vlSelf->__Vfunc_shift_jam27__6290__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__6289__exponent)));
        vlSelf->__Vfunc_shift_jam27__6290__value = __Vfunc_round_pack32__6289__significand;
        __Vfunc_round_pack32__6289__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__6290__distance))) {
            vlSelf->__Vfunc_shift_jam27__6290__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__6290__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__6290__distance))) {
            vlSelf->__Vfunc_shift_jam27__6290__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__6290__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__6290__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6290__value, (IData)(vlSelf->__Vfunc_shift_jam27__6290__distance)));
            vlSelf->__Vfunc_shift_jam27__6290__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6290__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__6290__distance)))));
            vlSelf->__Vfunc_shift_jam27__6290__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__6290__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__6290__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__6290__discarded))));
        }
        __Vfunc_round_pack32__6289__shifted = vlSelf->__Vfunc_shift_jam27__6290__Vfuncout;
    }
    __Vfunc_round_pack32__6289__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__6289__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__6289__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__6289__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__6289__rounded)) {
        __Vfunc_round_pack32__6289__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__6289__rounded, 1U));
        __Vfunc_round_pack32__6289__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__6289__adjusted)));
    }
    __Vfunc_round_pack32__6289__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__6289__rounded)) {
        __Vfunc_round_pack32__6289__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__6289__adjusted)));
    }
    __Vfunc_round_pack32__6289__Vfuncout = (((0U == __Vfunc_round_pack32__6289__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__6289__rounded))
                                             ? 0ULL
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__6289__adjusted))
                                                 ? 0x100000000ULL
                                                 : (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__6289__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__6289__rounded))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
        = __Vfunc_round_pack32__6289__Vfuncout;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0));
    top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 
        = ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault)) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__below_one 
        = ((0xffffffU & VL_SHIFTL_III(24,24,6, (IData)(0x800000U), (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_a))) 
           < vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__normalized_b);
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_valid 
        = ((IData)(top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
           & ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)) 
              | (6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid 
        = ((IData)(top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
           & (9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)));
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_valid) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_position 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_position;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_parent;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_position = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent = 0U;
    }
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[0U] 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U];
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[1U] 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U];
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[2U] 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U];
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[3U] 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U];
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[4U] 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U];
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_pos 
            = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position);
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count;
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[0U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[1U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[2U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[3U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[4U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_pos = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count = 0U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_start_pos 
        = ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state))
            ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__host_position
            : vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_position);
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_start_token 
        = (((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
            | (4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent)))
            ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__host_token
            : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U)))
                 ? 0U : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__owned_drafts[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U))))) 
               | (vlSelf->top_tb__DOT__dut__DOT__native__DOT__owned_drafts[
                  (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__batch_end 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__host_position)) 
                             + (QData)((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count))));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__19(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__reserved_bad 
        = ((((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
             | (3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) 
            | (4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) 
           & ((0U != (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data 
                      >> 0x10U)) | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__143__value 
                        = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data);
                    vlSelf->__Vfunc_bf16_invalid__143__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__143__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__143__Vfuncout))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__scale_bad 
        = ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
           & ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__144__value 
                    = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data);
                vlSelf->__Vfunc_bf16_scale_invalid__144__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__145__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__144__value;
                            vlSelf->__Vfunc_bf16_invalid__145__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__145__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__145__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__144__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__144__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__144__Vfuncout)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
           & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__load_state)) 
              | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_error) 
                 | ((0U != ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid)
                             ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__drsp_valid)
                                 ? (0x1ffffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                                                >> 0xbU))
                                 : 0U) : 0U)) | ((~ 
                                                  ((2U 
                                                    == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
                                                    | (3U 
                                                       == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
                                                    | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type) 
                                                       == 
                                                       ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                                         ? 1U
                                                         : 4U))))) 
                                                 | ((~ 
                                                     ((2U 
                                                       == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                       < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_groups))
                                                       : 
                                                      ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                       < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes)))) 
                                                    | (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                          << 1U) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                             ? 
                                                            (3U 
                                                             == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))
                                                             : 
                                                            (0U 
                                                             != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)))) 
                                                        >= (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued)) 
                                                       | ((0x500U 
                                                           <= (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)) 
                                                          | (((0x4ffU 
                                                               >= (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)) 
                                                              && (1U 
                                                                  & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[
                                                                     ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                                                      >> 5U)] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))))) 
                                                             | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__reserved_bad) 
                                                                | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__scale_bad)))))))))));
}

VL_INLINE_OPT void Vtop_tb___024root___nba_comb__TOP__36(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__36\n"); );
    // Init
    CData/*0:0*/ top_tb__DOT__dut__DOT__native__DOT__bank_fault;
    top_tb__DOT__dut__DOT__native__DOT__bank_fault = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT__native__DOT__logic_fault;
    top_tb__DOT__dut__DOT__native__DOT__logic_fault = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0;
    top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0 = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT____VdfgTmp_h3840dcf2__0;
    top_tb__DOT__dut__DOT____VdfgTmp_h3840dcf2__0 = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request;
    top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request = 0;
    IData/*31:0*/ top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0;
    top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0 = 0;
    CData/*0:0*/ top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0;
    top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7430__Vfuncout;
    __Vfunc_event_add64__7430__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7430__value;
    __Vfunc_event_add64__7430__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7430__delta;
    __Vfunc_event_add64__7430__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7430__low;
    __Vfunc_event_add64__7430__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7430__carry1;
    __Vfunc_event_add64__7430__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7430__carry2;
    __Vfunc_event_add64__7430__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7430__carry3;
    __Vfunc_event_add64__7430__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7431__Vfuncout;
    __Vfunc_event_add64__7431__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7431__value;
    __Vfunc_event_add64__7431__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7431__delta;
    __Vfunc_event_add64__7431__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7431__low;
    __Vfunc_event_add64__7431__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7431__carry1;
    __Vfunc_event_add64__7431__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7431__carry2;
    __Vfunc_event_add64__7431__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7431__carry3;
    __Vfunc_event_add64__7431__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7432__Vfuncout;
    __Vfunc_event_add64__7432__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7432__value;
    __Vfunc_event_add64__7432__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7432__delta;
    __Vfunc_event_add64__7432__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7432__low;
    __Vfunc_event_add64__7432__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7432__carry1;
    __Vfunc_event_add64__7432__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7432__carry2;
    __Vfunc_event_add64__7432__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7432__carry3;
    __Vfunc_event_add64__7432__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7433__Vfuncout;
    __Vfunc_event_add64__7433__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7433__value;
    __Vfunc_event_add64__7433__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7433__delta;
    __Vfunc_event_add64__7433__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7433__low;
    __Vfunc_event_add64__7433__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7433__carry1;
    __Vfunc_event_add64__7433__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7433__carry2;
    __Vfunc_event_add64__7433__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7433__carry3;
    __Vfunc_event_add64__7433__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7434__Vfuncout;
    __Vfunc_event_add64__7434__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7434__value;
    __Vfunc_event_add64__7434__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7434__delta;
    __Vfunc_event_add64__7434__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7434__low;
    __Vfunc_event_add64__7434__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7434__carry1;
    __Vfunc_event_add64__7434__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7434__carry2;
    __Vfunc_event_add64__7434__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7434__carry3;
    __Vfunc_event_add64__7434__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7435__Vfuncout;
    __Vfunc_event_add64__7435__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7435__value;
    __Vfunc_event_add64__7435__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7435__delta;
    __Vfunc_event_add64__7435__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7435__low;
    __Vfunc_event_add64__7435__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7435__carry1;
    __Vfunc_event_add64__7435__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7435__carry2;
    __Vfunc_event_add64__7435__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7435__carry3;
    __Vfunc_event_add64__7435__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7436__Vfuncout;
    __Vfunc_event_add64__7436__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7436__value;
    __Vfunc_event_add64__7436__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7436__delta;
    __Vfunc_event_add64__7436__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7436__low;
    __Vfunc_event_add64__7436__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7436__carry1;
    __Vfunc_event_add64__7436__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7436__carry2;
    __Vfunc_event_add64__7436__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7436__carry3;
    __Vfunc_event_add64__7436__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7437__Vfuncout;
    __Vfunc_event_add64__7437__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7437__value;
    __Vfunc_event_add64__7437__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7437__delta;
    __Vfunc_event_add64__7437__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7437__low;
    __Vfunc_event_add64__7437__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7437__carry1;
    __Vfunc_event_add64__7437__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7437__carry2;
    __Vfunc_event_add64__7437__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7437__carry3;
    __Vfunc_event_add64__7437__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7438__Vfuncout;
    __Vfunc_event_add64__7438__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7438__value;
    __Vfunc_event_add64__7438__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7438__delta;
    __Vfunc_event_add64__7438__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7438__low;
    __Vfunc_event_add64__7438__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7438__carry1;
    __Vfunc_event_add64__7438__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7438__carry2;
    __Vfunc_event_add64__7438__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7438__carry3;
    __Vfunc_event_add64__7438__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7439__Vfuncout;
    __Vfunc_event_add64__7439__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7439__value;
    __Vfunc_event_add64__7439__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7439__delta;
    __Vfunc_event_add64__7439__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7439__low;
    __Vfunc_event_add64__7439__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7439__carry1;
    __Vfunc_event_add64__7439__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7439__carry2;
    __Vfunc_event_add64__7439__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7439__carry3;
    __Vfunc_event_add64__7439__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7440__Vfuncout;
    __Vfunc_event_add64__7440__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7440__value;
    __Vfunc_event_add64__7440__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7440__delta;
    __Vfunc_event_add64__7440__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7440__low;
    __Vfunc_event_add64__7440__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7440__carry1;
    __Vfunc_event_add64__7440__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7440__carry2;
    __Vfunc_event_add64__7440__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7440__carry3;
    __Vfunc_event_add64__7440__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7441__Vfuncout;
    __Vfunc_event_add64__7441__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7441__value;
    __Vfunc_event_add64__7441__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7441__delta;
    __Vfunc_event_add64__7441__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7441__low;
    __Vfunc_event_add64__7441__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7441__carry1;
    __Vfunc_event_add64__7441__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7441__carry2;
    __Vfunc_event_add64__7441__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7441__carry3;
    __Vfunc_event_add64__7441__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7442__Vfuncout;
    __Vfunc_event_add64__7442__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7442__value;
    __Vfunc_event_add64__7442__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7442__delta;
    __Vfunc_event_add64__7442__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7442__low;
    __Vfunc_event_add64__7442__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7442__carry1;
    __Vfunc_event_add64__7442__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7442__carry2;
    __Vfunc_event_add64__7442__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7442__carry3;
    __Vfunc_event_add64__7442__carry3 = 0;
    // Body
    top_tb__DOT__dut__DOT__native__DOT__logic_fault 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_error) 
           | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_error) 
              | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid) 
                  & ((4U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                     | ((1U > (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)) 
                        | ((5U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)) 
                           | ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_pos 
                               != ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__native__DOT__host_position)) 
                              | ((0x10ULL <= vlSelf->top_tb__DOT__dut__DOT__native__DOT__batch_end) 
                                 | ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__staged_extent 
                                     != ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__batch_end) 
                                         - (IData)(1U))) 
                                    | ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_drained)) 
                                       | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__backend_owned))))))))) 
                 | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_valid) 
                     & ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                        & ((4U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent)) 
                           | ((0x10U <= vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_position) 
                              | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent))
                                  ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_position 
                                     != vlSelf->top_tb__DOT__dut__DOT__native__DOT__host_position)
                                  : ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__draft_owned)) 
                                     | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_parent) 
                                         >= (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__owned_draft_count)) 
                                        | ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__sequence_valid)) 
                                           | ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__staged_extent 
                                               < vlSelf->top_tb__DOT__dut__DOT__native__DOT__committed_extent) 
                                              | (vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_position 
                                                 != 
                                                 ((IData)(1U) 
                                                  + vlSelf->top_tb__DOT__dut__DOT__native__DOT__staged_extent))))))))))) 
                    | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
                       & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_write)) 
                          & (((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_kind)) 
                              | (0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_kind))) 
                             & (((3U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                                 & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__backend_owned)) 
                                    | (4U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)))) 
                                | ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_row 
                                    > vlSelf->top_tb__DOT__dut__DOT__native__DOT__evaluating_position) 
                                   | ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_row 
                                       != vlSelf->top_tb__DOT__dut__DOT__native__DOT__evaluating_position) 
                                      & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__sequence_valid)) 
                                         | (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_row 
                                            > vlSelf->top_tb__DOT__dut__DOT__native__DOT__staged_extent))))))))))));
    vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid 
        = ((~ (IData)(top_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid));
    vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready 
        = ((~ (IData)(top_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->top_tb__DOT__mem_req_ready));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 0U;
    top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 0U;
    top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0 
        = vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [0U];
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[0U] 
        = top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
    if (((vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0U] == vlSelf->top_tb__DOT__mem_rsp_tag) 
         & ((2U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0U]) | (((((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__draining))) 
                        & (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 1U;
    }
    if (((vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [1U] == vlSelf->top_tb__DOT__mem_rsp_tag) 
         & ((2U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [1U]) | (((((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__draining))) 
                        & (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 1U;
    }
    if (((vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [2U] == vlSelf->top_tb__DOT__mem_rsp_tag) 
         & ((2U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [2U]) | (((((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__draining))) 
                        & (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (2U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 2U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 1U;
    }
    if ((((IData)(vlSelf->top_tb__DOT__rst_n) & (IData)(vlSelf->top_tb__DOT__mem_rsp_valid)) 
         & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match)))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0 
        = ((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__draining) 
               | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining) 
                  | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)))) 
           & (IData)(vlSelf->top_tb__DOT__rst_n));
    top_tb__DOT__dut__DOT__native__DOT__bank_fault 
        = ((IData)(vlSelf->top_tb__DOT__rst_n) & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__fault_reg) 
                                                  | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__drsp_valid 
        = ((IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_req_ready 
        = ((IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((~ (IData)((0xffffffffffffffffULL == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial))) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_mem_valid 
        = ((IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request));
    vlSelf->top_tb__DOT__token_ready = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                                        & ((~ (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_fault)) 
                                           & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_error)) 
                                              & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_error)) 
                                                 & ((0U 
                                                     == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                                                    & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__done_reg)) 
                                                       & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__error_reg)) 
                                                          & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__cancel_done_reg)) 
                                                             & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_drained) 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->top_tb__DOT__csr_valid) 
                                                                     | ((IData)(vlSelf->top_tb__DOT__csr_rsp_valid) 
                                                                        | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__mode_valid)))) 
                                                                   & (IData)(vlSelf->top_tb__DOT__csr_ready)))))))))));
    vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__csr_perf__mem_error 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_fault));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__detected_fault 
        = ((IData)(top_tb__DOT__dut__DOT__native__DOT__logic_fault) 
           | (IData)(top_tb__DOT__dut__DOT__native__DOT__bank_fault));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__drsp_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
              | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                   << 7U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                              << 6U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active)))))))) 
                 >> ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__drsp_valid)
                      ? (7U & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                               >> 0x1cU)) : 0U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready 
        = ((~ (IData)(top_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_req_ready));
    vlSelf->top_tb__DOT__mem_req_valid = ((~ (IData)(top_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
                                          & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_mem_valid));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[0xbU] 
        = vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__csr_perf__mem_error;
    top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0 = 
        ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__detected_fault)) 
         & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    if (vlSelf->top_tb__DOT__mem_req_valid) {
        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_mem_valid) {
            vlSelf->top_tb__DOT__mem_req_write = (1U 
                                                  & ((2U 
                                                      >= 
                                                      (3U 
                                                       & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                       [0U])) 
                                                     && (1U 
                                                         & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing) 
                                                            >> 
                                                            (3U 
                                                             & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [0U])))));
            if ((2U >= (3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                        [0U]))) {
                vlSelf->top_tb__DOT__mem_req_kind = 
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->top_tb__DOT__mem_req_layer 
                    = vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->top_tb__DOT__mem_req_proj = 
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->top_tb__DOT__mem_req_row = 
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->top_tb__DOT__mem_req_col = 
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->top_tb__DOT__mem_req_wdata 
                    = vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->top_tb__DOT__mem_req_tag = 
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                    [(3U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
            } else {
                vlSelf->top_tb__DOT__mem_req_kind = 0U;
                vlSelf->top_tb__DOT__mem_req_layer = 0U;
                vlSelf->top_tb__DOT__mem_req_proj = 0U;
                vlSelf->top_tb__DOT__mem_req_row = 0U;
                vlSelf->top_tb__DOT__mem_req_col = 0U;
                vlSelf->top_tb__DOT__mem_req_wdata = 0U;
                vlSelf->top_tb__DOT__mem_req_tag = 0ULL;
            }
        } else {
            vlSelf->top_tb__DOT__mem_req_write = 0U;
            vlSelf->top_tb__DOT__mem_req_kind = 0U;
            vlSelf->top_tb__DOT__mem_req_layer = 0U;
            vlSelf->top_tb__DOT__mem_req_proj = 0U;
            vlSelf->top_tb__DOT__mem_req_row = 0U;
            vlSelf->top_tb__DOT__mem_req_col = 0U;
            vlSelf->top_tb__DOT__mem_req_wdata = 0U;
            vlSelf->top_tb__DOT__mem_req_tag = 0ULL;
        }
    } else {
        vlSelf->top_tb__DOT__mem_req_write = 0U;
        vlSelf->top_tb__DOT__mem_req_kind = 0U;
        vlSelf->top_tb__DOT__mem_req_layer = 0U;
        vlSelf->top_tb__DOT__mem_req_proj = 0U;
        vlSelf->top_tb__DOT__mem_req_row = 0U;
        vlSelf->top_tb__DOT__mem_req_col = 0U;
        vlSelf->top_tb__DOT__mem_req_wdata = 0U;
        vlSelf->top_tb__DOT__mem_req_tag = 0ULL;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_start_valid 
        = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0) 
           & ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                 & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__backend_owned)) 
                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_valid)))));
    vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__decoder__logit_ready 
        = ((IData)(vlSelf->top_tb__DOT__logit_ready) 
           & (IData)(top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0));
    vlSelf->top_tb__DOT__logit_valid = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0) 
                                        & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_result_ready 
        = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0) 
           & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_drained) 
              & ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                 | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                    & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__backend_owned) 
                       & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_rsp_ready))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[0xcU] 
        = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0) 
           & ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
              & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__exhausted) 
                 & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_drained) 
                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_ready)))));
    top_tb__DOT__dut__DOT____VdfgTmp_h3840dcf2__0 = 
        ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_heb4f7d28__0) 
         & (4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr 
        = ((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
             & ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready))) 
            << 7U) | ((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
                        & ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready))) 
                       << 6U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready) 
                                  << 5U) | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready) 
                                             << 4U) 
                                            | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready) 
                                                << 3U) 
                                               | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
                                                        & ((0U 
                                                            == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                                                           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dreq_ready))))))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_ready 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate)) 
              | ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate)) 
                 & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm)
                     ? (IData)(vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__decoder__logit_ready)
                     : ((0U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection)) 
                        & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_in_ready))))));
    if (vlSelf->top_tb__DOT__logit_valid) {
        if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid) {
            vlSelf->top_tb__DOT__logit_index = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_index;
            vlSelf->top_tb__DOT__logit_data = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_fp32;
        } else {
            vlSelf->top_tb__DOT__logit_index = 0U;
            vlSelf->top_tb__DOT__logit_data = 0U;
        }
    } else {
        vlSelf->top_tb__DOT__logit_index = 0U;
        vlSelf->top_tb__DOT__logit_data = 0U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__result_transfer 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_result_valid) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_result_ready));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__verify_ready 
        = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_h3840dcf2__0) 
           & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__backend_owned)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder_ready)));
    vlSelf->top_tb__DOT__draft_ready = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_h3840dcf2__0) 
                                        & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__draft_owned)) 
                                           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_draft_ready)));
    vlSelf->top_tb__DOT__commit_valid = ((IData)(top_tb__DOT__dut__DOT____VdfgTmp_h3840dcf2__0) 
                                         & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__root_publication 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__result_transfer) 
           & ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__state)) 
                 & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__backend_root))));
    vlSelf->top_tb__DOT__dut__DOT____Vcellinp__native__DOT__dual_think_ctrl__draft_valid 
        = ((IData)(vlSelf->top_tb__DOT__draft_valid) 
           & (IData)(vlSelf->top_tb__DOT__draft_ready));
    if (vlSelf->top_tb__DOT__commit_valid) {
        vlSelf->top_tb__DOT__commit_count = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count;
        vlSelf->top_tb__DOT__commit_tokens[0U] = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[0U];
        vlSelf->top_tb__DOT__commit_tokens[1U] = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[1U];
        vlSelf->top_tb__DOT__commit_tokens[2U] = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[2U];
        vlSelf->top_tb__DOT__commit_tokens[3U] = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[3U];
        vlSelf->top_tb__DOT__commit_tokens[4U] = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_tokens[4U];
        vlSelf->top_tb__DOT__commit_pos = vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_pos;
    } else {
        vlSelf->top_tb__DOT__commit_count = 0U;
        vlSelf->top_tb__DOT__commit_tokens[0U] = 0U;
        vlSelf->top_tb__DOT__commit_tokens[1U] = 0U;
        vlSelf->top_tb__DOT__commit_tokens[2U] = 0U;
        vlSelf->top_tb__DOT__commit_tokens[3U] = 0U;
        vlSelf->top_tb__DOT__commit_tokens[4U] = 0U;
        vlSelf->top_tb__DOT__commit_pos = 0U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__publication 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid) 
           & ((IData)(vlSelf->top_tb__DOT__commit_ready) 
              & (IData)(vlSelf->top_tb__DOT__commit_valid)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__commit_transfer 
        = ((IData)(vlSelf->top_tb__DOT__commit_valid) 
           & (IData)(vlSelf->top_tb__DOT__commit_ready));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__observed_valid 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & ((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__input_precommitted)) 
              & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__root_publication)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 0U;
    if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__publication) {
        if ((0U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((1U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((2U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((3U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((4U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[3U] 
        = (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__commit_transfer) 
            & (IData)(vlSelf->top_tb__DOT__think_active))
            ? (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)
            : 0U);
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[4U] 
        = (((~ (IData)(vlSelf->top_tb__DOT__think_active)) 
            & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__commit_transfer))
            ? (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)
            : 0U);
    __Vfunc_event_add64__7430__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0U];
    __Vfunc_event_add64__7430__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0U];
    __Vfunc_event_add64__7430__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7430__value)) 
                                                  + (IData)(__Vfunc_event_add64__7430__delta)));
    __Vfunc_event_add64__7430__carry1 = (1U & (__Vfunc_event_add64__7430__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7430__carry2 = ((IData)(__Vfunc_event_add64__7430__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7430__value)));
    __Vfunc_event_add64__7430__carry3 = ((IData)(__Vfunc_event_add64__7430__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7430__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7430__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7430__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7430__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7430__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7430__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7430__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7430__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7430__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0U] 
        = __Vfunc_event_add64__7430__Vfuncout;
    __Vfunc_event_add64__7431__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [1U];
    __Vfunc_event_add64__7431__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [1U];
    __Vfunc_event_add64__7431__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7431__value)) 
                                                  + (IData)(__Vfunc_event_add64__7431__delta)));
    __Vfunc_event_add64__7431__carry1 = (1U & (__Vfunc_event_add64__7431__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7431__carry2 = ((IData)(__Vfunc_event_add64__7431__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7431__value)));
    __Vfunc_event_add64__7431__carry3 = ((IData)(__Vfunc_event_add64__7431__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7431__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7431__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7431__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7431__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7431__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7431__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7431__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7431__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7431__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[1U] 
        = __Vfunc_event_add64__7431__Vfuncout;
    __Vfunc_event_add64__7432__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [2U];
    __Vfunc_event_add64__7432__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [2U];
    __Vfunc_event_add64__7432__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7432__value)) 
                                                  + (IData)(__Vfunc_event_add64__7432__delta)));
    __Vfunc_event_add64__7432__carry1 = (1U & (__Vfunc_event_add64__7432__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7432__carry2 = ((IData)(__Vfunc_event_add64__7432__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7432__value)));
    __Vfunc_event_add64__7432__carry3 = ((IData)(__Vfunc_event_add64__7432__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7432__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7432__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7432__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7432__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7432__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7432__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7432__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7432__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7432__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[2U] 
        = __Vfunc_event_add64__7432__Vfuncout;
    __Vfunc_event_add64__7433__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [3U];
    __Vfunc_event_add64__7433__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [3U];
    __Vfunc_event_add64__7433__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7433__value)) 
                                                  + (IData)(__Vfunc_event_add64__7433__delta)));
    __Vfunc_event_add64__7433__carry1 = (1U & (__Vfunc_event_add64__7433__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7433__carry2 = ((IData)(__Vfunc_event_add64__7433__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7433__value)));
    __Vfunc_event_add64__7433__carry3 = ((IData)(__Vfunc_event_add64__7433__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7433__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7433__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7433__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7433__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7433__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7433__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7433__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7433__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7433__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[3U] 
        = __Vfunc_event_add64__7433__Vfuncout;
    __Vfunc_event_add64__7434__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [4U];
    __Vfunc_event_add64__7434__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [4U];
    __Vfunc_event_add64__7434__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7434__value)) 
                                                  + (IData)(__Vfunc_event_add64__7434__delta)));
    __Vfunc_event_add64__7434__carry1 = (1U & (__Vfunc_event_add64__7434__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7434__carry2 = ((IData)(__Vfunc_event_add64__7434__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7434__value)));
    __Vfunc_event_add64__7434__carry3 = ((IData)(__Vfunc_event_add64__7434__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7434__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7434__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7434__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7434__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7434__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7434__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7434__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7434__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7434__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[4U] 
        = __Vfunc_event_add64__7434__Vfuncout;
    __Vfunc_event_add64__7435__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [5U];
    __Vfunc_event_add64__7435__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [5U];
    __Vfunc_event_add64__7435__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7435__value)) 
                                                  + (IData)(__Vfunc_event_add64__7435__delta)));
    __Vfunc_event_add64__7435__carry1 = (1U & (__Vfunc_event_add64__7435__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7435__carry2 = ((IData)(__Vfunc_event_add64__7435__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7435__value)));
    __Vfunc_event_add64__7435__carry3 = ((IData)(__Vfunc_event_add64__7435__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7435__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7435__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7435__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7435__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7435__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7435__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7435__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7435__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7435__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[5U] 
        = __Vfunc_event_add64__7435__Vfuncout;
    __Vfunc_event_add64__7436__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [6U];
    __Vfunc_event_add64__7436__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [6U];
    __Vfunc_event_add64__7436__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7436__value)) 
                                                  + (IData)(__Vfunc_event_add64__7436__delta)));
    __Vfunc_event_add64__7436__carry1 = (1U & (__Vfunc_event_add64__7436__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7436__carry2 = ((IData)(__Vfunc_event_add64__7436__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7436__value)));
    __Vfunc_event_add64__7436__carry3 = ((IData)(__Vfunc_event_add64__7436__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7436__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7436__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7436__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7436__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7436__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7436__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7436__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7436__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7436__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[6U] 
        = __Vfunc_event_add64__7436__Vfuncout;
    __Vfunc_event_add64__7437__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [7U];
    __Vfunc_event_add64__7437__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [7U];
    __Vfunc_event_add64__7437__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7437__value)) 
                                                  + (IData)(__Vfunc_event_add64__7437__delta)));
    __Vfunc_event_add64__7437__carry1 = (1U & (__Vfunc_event_add64__7437__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7437__carry2 = ((IData)(__Vfunc_event_add64__7437__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7437__value)));
    __Vfunc_event_add64__7437__carry3 = ((IData)(__Vfunc_event_add64__7437__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7437__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7437__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7437__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7437__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7437__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7437__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7437__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7437__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7437__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[7U] 
        = __Vfunc_event_add64__7437__Vfuncout;
    __Vfunc_event_add64__7438__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [8U];
    __Vfunc_event_add64__7438__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [8U];
    __Vfunc_event_add64__7438__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7438__value)) 
                                                  + (IData)(__Vfunc_event_add64__7438__delta)));
    __Vfunc_event_add64__7438__carry1 = (1U & (__Vfunc_event_add64__7438__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7438__carry2 = ((IData)(__Vfunc_event_add64__7438__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7438__value)));
    __Vfunc_event_add64__7438__carry3 = ((IData)(__Vfunc_event_add64__7438__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7438__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7438__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7438__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7438__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7438__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7438__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7438__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7438__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7438__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[8U] 
        = __Vfunc_event_add64__7438__Vfuncout;
    __Vfunc_event_add64__7439__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [9U];
    __Vfunc_event_add64__7439__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [9U];
    __Vfunc_event_add64__7439__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7439__value)) 
                                                  + (IData)(__Vfunc_event_add64__7439__delta)));
    __Vfunc_event_add64__7439__carry1 = (1U & (__Vfunc_event_add64__7439__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7439__carry2 = ((IData)(__Vfunc_event_add64__7439__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7439__value)));
    __Vfunc_event_add64__7439__carry3 = ((IData)(__Vfunc_event_add64__7439__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7439__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7439__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7439__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7439__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7439__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7439__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7439__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7439__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7439__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[9U] 
        = __Vfunc_event_add64__7439__Vfuncout;
    __Vfunc_event_add64__7440__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0xaU];
    __Vfunc_event_add64__7440__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0xaU];
    __Vfunc_event_add64__7440__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7440__value)) 
                                                  + (IData)(__Vfunc_event_add64__7440__delta)));
    __Vfunc_event_add64__7440__carry1 = (1U & (__Vfunc_event_add64__7440__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7440__carry2 = ((IData)(__Vfunc_event_add64__7440__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7440__value)));
    __Vfunc_event_add64__7440__carry3 = ((IData)(__Vfunc_event_add64__7440__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7440__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7440__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7440__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7440__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7440__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7440__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7440__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7440__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7440__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0xaU] 
        = __Vfunc_event_add64__7440__Vfuncout;
    __Vfunc_event_add64__7441__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0xbU];
    __Vfunc_event_add64__7441__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0xbU];
    __Vfunc_event_add64__7441__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7441__value)) 
                                                  + (IData)(__Vfunc_event_add64__7441__delta)));
    __Vfunc_event_add64__7441__carry1 = (1U & (__Vfunc_event_add64__7441__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7441__carry2 = ((IData)(__Vfunc_event_add64__7441__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7441__value)));
    __Vfunc_event_add64__7441__carry3 = ((IData)(__Vfunc_event_add64__7441__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7441__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7441__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7441__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7441__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7441__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7441__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7441__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7441__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7441__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0xbU] 
        = __Vfunc_event_add64__7441__Vfuncout;
    __Vfunc_event_add64__7442__delta = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0xcU];
    __Vfunc_event_add64__7442__value = vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0xcU];
    __Vfunc_event_add64__7442__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7442__value)) 
                                                  + (IData)(__Vfunc_event_add64__7442__delta)));
    __Vfunc_event_add64__7442__carry1 = (1U & (__Vfunc_event_add64__7442__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7442__carry2 = ((IData)(__Vfunc_event_add64__7442__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7442__value)));
    __Vfunc_event_add64__7442__carry3 = ((IData)(__Vfunc_event_add64__7442__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7442__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7442__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7442__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7442__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7442__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7442__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7442__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7442__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7442__low)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0xcU] 
        = __Vfunc_event_add64__7442__Vfuncout;
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9d9a9148__0.resume("@(negedge top_tb.clk)");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9d9a9879__0.resume("@(posedge top_tb.clk)");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_tb___024root___timing_commit(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9d9a9148__0.commit("@(negedge top_tb.clk)");
    }
    if ((! (0x8000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9d9a9879__0.commit("@(posedge top_tb.clk)");
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<30> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-behavior-core-case06-20261103T095715Z-33d8a9b2/speculative_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("evidence/l1-behavior-core-case06-20261103T095715Z-33d8a9b2/speculative_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
