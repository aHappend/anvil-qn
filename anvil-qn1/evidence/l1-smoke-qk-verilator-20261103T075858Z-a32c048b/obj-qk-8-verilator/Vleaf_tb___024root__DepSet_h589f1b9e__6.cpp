// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

void Vleaf_tb___024root___nba_sequent__TOP__0(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__1(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__2(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__3(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__4(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__5(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__6(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__7(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_comb__TOP__0(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_sequent__TOP__8(Vleaf_tb___024root* vlSelf);
void Vleaf_tb___024root___nba_comb__TOP__1(Vleaf_tb___024root* vlSelf);

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
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vleaf_tb___024root___nba_comb__TOP__1(vlSelf);
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
            VL_FATAL_MT("evidence/l1-smoke-qk-verilator-20261103T075858Z-a32c048b/qk_tb.sv", 2, "", "NBA region did not converge.");
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
                VL_FATAL_MT("evidence/l1-smoke-qk-verilator-20261103T075858Z-a32c048b/qk_tb.sv", 2, "", "Active region did not converge.");
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
