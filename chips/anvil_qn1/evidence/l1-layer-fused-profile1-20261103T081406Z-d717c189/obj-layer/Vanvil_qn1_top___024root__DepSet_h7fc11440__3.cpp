// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top__Syms.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__86(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__86\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__completed 
        = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.out_valid) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__waiting));
    if ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op = 2U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b = 0x3f317218U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__exponent32;
    } else if ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__x;
    } else if ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op = 2U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__r;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term;
    } else if ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op = 3U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__order32;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__temporary;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op = 0U;
        if ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__term;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__sum;
        } else {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__b = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__a = 0U;
        }
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) 
           | (0x12U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush)) 
           & (IData)(vlSelf->rst_n));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0) 
           & (0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0) 
           & (7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0) 
           & (0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exp_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0) 
           & (8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__alu_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT____VdfgTmp_h0890133b__0) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__waiting)) 
              & ((2U <= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state)) 
                 & (6U >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state)))));
}

void Vanvil_qn1_top___024root___nba_sequent__TOP__0(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__1(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__2(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__3(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__4(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__5(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__6(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__7(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__8(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__9(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__10(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__11(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__12(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__13(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__14(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__15(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__16(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__17(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__18(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__19(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__20(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__21(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__22(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__23(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__24(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__25(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__26(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__27(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__28(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__29(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__30(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__31(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__32(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__33(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__34(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__35(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__36(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__37(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__38(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__39(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__40(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__41(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__42(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__43(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__44(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__45(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__46(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__47(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__48(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__49(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__50(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__51(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__52(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__53(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__54(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__55(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__56(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__57(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__58(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__59(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__60(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__61(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__62(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__63(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__64(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__65(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__66(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__67(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__68(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__69(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__70(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__71(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__72(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__73(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__74(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__75(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__76(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__77(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__78(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__79(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__80(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__81(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__82(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__83(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__84(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__85(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__1(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0(Vanvil_qn1_top_anvil_qn1_scalar* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__87(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__0(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_sequent__TOP__5(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__2(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___ico_comb__TOP__1(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_sequent__TOP__12(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_sequent__TOP__13(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_sequent__TOP__14(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_sequent__TOP__15(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_sequent__TOP__88(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__2(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__3(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__10(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__11(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__12(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__8(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__15(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__16(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__16(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__14(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__18(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__19(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___act_comb__TOP__20(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___ico_comb__TOP__6(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__22(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___nba_comb__TOP__23(Vanvil_qn1_top___024root* vlSelf);

void Vanvil_qn1_top___024root___eval_nba(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___eval_nba\n"); );
    // Body
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add));
        Vanvil_qn1_top___024root___nba_sequent__TOP__1(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__2(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__3(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__4(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__5(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__6(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__7(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__8(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__9(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__10(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__11(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__12(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__13(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__14(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__15(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__16(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__17(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__18(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__19(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__20(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__21(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__22(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__23(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__24(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__25(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__26(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__27(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__28(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__29(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__30(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__31(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__32(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__33(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__34(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__35(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__36(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__37(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__38(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__39(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__40(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__41(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__42(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__43(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__44(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__45(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__46(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__47(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__48(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__49(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__50(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__51(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__52(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__53(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__54(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__55(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__56(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__57(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__58(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__59(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__60(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__61(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__62(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__63(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__64(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__65(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__66(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__67(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__68(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__69(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__70(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__71(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__72(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__73(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__74(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__75(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__76(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__77(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__78(vlSelf);
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__1((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add));
        Vanvil_qn1_top___024root___nba_sequent__TOP__79(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__80(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__81(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__82(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__83(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__84(vlSelf);
        Vanvil_qn1_top___024root___nba_sequent__TOP__85(vlSelf);
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition__1((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic__1((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic__1((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___nba_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic__1((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add));
        Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic));
        Vanvil_qn1_top___024root___nba_sequent__TOP__86(vlSelf);
        Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply));
        Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic));
        Vanvil_qn1_top_anvil_qn1_scalar___ico_sequent__TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply__0((&vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic));
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_sequent__TOP__87(vlSelf);
    }
    if ((0x2020000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x2080000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x6000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x2010000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x2800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_sequent__TOP__12(vlSelf);
        Vanvil_qn1_top___024root___act_sequent__TOP__13(vlSelf);
        Vanvil_qn1_top___024root___act_sequent__TOP__14(vlSelf);
        Vanvil_qn1_top___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_sequent__TOP__88(vlSelf);
    }
    if ((0x2120000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x2220000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x2020400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x2020800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x2021000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x2420000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x2b28000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x2821c00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x24a0000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x2421c04ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x2421c05ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x2f29c05ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x2c21c05ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x2c25c05ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x2f2dc05ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x6f2dc05ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_top___024root___nba_comb__TOP__23(vlSelf);
    }
}
