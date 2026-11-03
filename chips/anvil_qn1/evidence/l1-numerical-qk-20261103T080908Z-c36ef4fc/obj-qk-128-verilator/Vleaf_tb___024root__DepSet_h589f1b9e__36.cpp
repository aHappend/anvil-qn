// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_INLINE_OPT void Vleaf_tb___024root___nba_comb__TOP__4(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_comb__TOP__4\n"); );
    // Init
    QData/*32:0*/ __Vfunc_round_pack32__5__Vfuncout;
    __Vfunc_round_pack32__5__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__5__exponent;
    __Vfunc_round_pack32__5__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__5__significand;
    __Vfunc_round_pack32__5__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__5__shifted;
    __Vfunc_round_pack32__5__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__5__rounded;
    __Vfunc_round_pack32__5__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__5__adjusted;
    __Vfunc_round_pack32__5__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__5__biased;
    __Vfunc_round_pack32__5__biased = 0;
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    __Vfunc_round_pack32__5__significand = (0x7fffff8U 
                                            & (VL_SHIFTL_III(24,24,6, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_raw, (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift)) 
                                               << 3U));
    __Vfunc_round_pack32__5__exponent = (0xfffU & (
                                                   (((0U 
                                                      == (IData)(vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0))
                                                      ? 0xf82U
                                                      : 
                                                     ((IData)(vlSelf->leaf_tb__DOT__dut__DOT____VdfgTmp_ha1a50253__0) 
                                                      - (IData)(0x7fU))) 
                                                    - (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_shift)) 
                                                   - (IData)(7U)));
    __Vfunc_round_pack32__5__adjusted = __Vfunc_round_pack32__5__exponent;
    __Vfunc_round_pack32__5__shifted = __Vfunc_round_pack32__5__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__5__exponent))) {
        vlSelf->__Vfunc_shift_jam27__6__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__5__exponent)));
        vlSelf->__Vfunc_shift_jam27__6__value = __Vfunc_round_pack32__5__significand;
        __Vfunc_round_pack32__5__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__6__distance))) {
            vlSelf->__Vfunc_shift_jam27__6__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__6__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__6__distance))) {
            vlSelf->__Vfunc_shift_jam27__6__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__6__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__6__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6__value, (IData)(vlSelf->__Vfunc_shift_jam27__6__distance)));
            vlSelf->__Vfunc_shift_jam27__6__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__6__distance)))));
            vlSelf->__Vfunc_shift_jam27__6__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__6__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__6__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__6__discarded))));
        }
        __Vfunc_round_pack32__5__shifted = vlSelf->__Vfunc_shift_jam27__6__Vfuncout;
    }
    __Vfunc_round_pack32__5__rounded = (0x1ffffffU 
                                        & ((0xffffffU 
                                            & (__Vfunc_round_pack32__5__shifted 
                                               >> 3U)) 
                                           + (1U & 
                                              ((__Vfunc_round_pack32__5__shifted 
                                                >> 2U) 
                                               & (IData)(
                                                         (0U 
                                                          != 
                                                          (0xbU 
                                                           & __Vfunc_round_pack32__5__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__5__rounded)) {
        __Vfunc_round_pack32__5__rounded = (0x1ffffffU 
                                            & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__5__rounded, 1U));
        __Vfunc_round_pack32__5__adjusted = (0xfffU 
                                             & ((IData)(1U) 
                                                + (IData)(__Vfunc_round_pack32__5__adjusted)));
    }
    __Vfunc_round_pack32__5__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__5__rounded)) {
        __Vfunc_round_pack32__5__biased = (0xffU & 
                                           ((IData)(0x7fU) 
                                            + (IData)(__Vfunc_round_pack32__5__adjusted)));
    }
    __Vfunc_round_pack32__5__Vfuncout = (((0U == __Vfunc_round_pack32__5__significand) 
                                          | (0U == __Vfunc_round_pack32__5__rounded))
                                          ? 0ULL : 
                                         (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__5__adjusted))
                                           ? 0x100000000ULL
                                           : (QData)((IData)(
                                                             (((IData)(__Vfunc_round_pack32__5__biased) 
                                                               << 0x17U) 
                                                              | (0x7fffffU 
                                                                 & __Vfunc_round_pack32__5__rounded))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean_packed 
        = __Vfunc_round_pack32__5__Vfuncout;
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__input_exponent 
        = (0xfffU & (((0U == (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0))
                       ? 0xf82U : ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0) 
                                   - (IData)(0x7fU))) 
                     - (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shift)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__below_one 
        = ((0xffffffU & VL_SHIFTL_III(24,24,6, (IData)(0x800000U), (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__shift_a))) 
           < vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__normalized_b);
}

void Vleaf_tb___024root___nba_sequent__TOP__0(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__1(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__2(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__3(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__4(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__5(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__6(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__7(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__8(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__9(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__10(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__11(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__12(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__13(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__14(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__15(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__16(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__17(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__18(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__19(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__20(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__21(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__22(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__23(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__24(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__25(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__26(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__27(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__28(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__29(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__30(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__31(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__32(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__33(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__34(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_comb__TOP__0(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__35(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_comb__TOP__1(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_comb__TOP__2(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_comb__TOP__3(Vleaf_tb___024root* vlSelf);

void Vleaf_tb___024root___eval_nba(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_sequent__TOP__0(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__3(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__4(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__5(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__6(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__7(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__8(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__9(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__10(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__11(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__12(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__13(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__14(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__15(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__16(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__17(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__18(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__19(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__20(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__21(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__22(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__23(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__24(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__25(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__26(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__27(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__28(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__29(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__30(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__31(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__32(vlSelf);
        Vleaf_tb___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_comb__TOP__1(vlSelf);
        Vleaf_tb___024root___nba_comb__TOP__2(vlSelf);
        Vleaf_tb___024root___nba_comb__TOP__3(vlSelf);
        Vleaf_tb___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vleaf_tb___024root___timing_resume(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h625605a6__0.resume("@(negedge leaf_tb.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h625605e3__0.resume("@(posedge leaf_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vleaf_tb___024root___timing_commit(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h625605a6__0.commit("@(negedge leaf_tb.clk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h625605e3__0.commit("@(posedge leaf_tb.clk)");
    }
}

void Vleaf_tb___024root___eval_triggers__act(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___eval_act(Vleaf_tb___024root* vlSelf);

bool Vleaf_tb___024root___eval_phase__act(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vleaf_tb___024root___eval_triggers__act(vlSelf);
    Vleaf_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vleaf_tb___024root___timing_resume(vlSelf);
        Vleaf_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vleaf_tb___024root___eval_phase__nba(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vleaf_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__nba(Vleaf_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__act(Vleaf_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vleaf_tb___024root___eval(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vleaf_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vleaf_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vleaf_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vleaf_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vleaf_tb___024root___eval_debug_assertions(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
