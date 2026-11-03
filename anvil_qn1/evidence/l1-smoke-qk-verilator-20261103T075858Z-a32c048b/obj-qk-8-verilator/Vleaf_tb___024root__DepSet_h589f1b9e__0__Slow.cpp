// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___eval_static__TOP(Vleaf_tb___024root* vlSelf);

VL_ATTR_COLD void Vleaf_tb___024root___eval_static(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_static\n"); );
    // Body
    Vleaf_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vleaf_tb___024root___eval_static__TOP(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->leaf_tb__DOT__clk = 0U;
    vlSelf->leaf_tb__DOT__flush = 0U;
    vlSelf->leaf_tb__DOT__in_valid = 0U;
    vlSelf->leaf_tb__DOT__in_is_key = 0U;
    vlSelf->leaf_tb__DOT__out_ready = 0U;
    vlSelf->leaf_tb__DOT__in_head = 0U;
    vlSelf->leaf_tb__DOT__in_layer = 0U;
    vlSelf->leaf_tb__DOT__in_pos = 0U;
    vlSelf->leaf_tb__DOT__in_data[0U] = 0U;
    vlSelf->leaf_tb__DOT__in_data[1U] = 0U;
    vlSelf->leaf_tb__DOT__in_data[2U] = 0U;
    vlSelf->leaf_tb__DOT__in_data[3U] = 0U;
    vlSelf->leaf_tb__DOT__in_gamma[0U] = 0U;
    vlSelf->leaf_tb__DOT__in_gamma[1U] = 0U;
    vlSelf->leaf_tb__DOT__in_gamma[2U] = 0U;
    vlSelf->leaf_tb__DOT__in_gamma[3U] = 0U;
    vlSelf->leaf_tb__DOT__in_cos = 0ULL;
    vlSelf->leaf_tb__DOT__in_sin = 0ULL;
    vlSelf->leaf_tb__DOT__case_id = 0U;
}

VL_ATTR_COLD void Vleaf_tb___024root___eval_initial__TOP(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_initial__TOP\n"); );
    // Init
    CData/*5:0*/ __Vfunc_leading_zero32__89__Vfuncout;
    __Vfunc_leading_zero32__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__89__part;
    __Vfunc_leading_zero32__89__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__89__count;
    __Vfunc_leading_zero32__89__count = 0;
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__shift_a 
        = (0x3fU & (([&]() {
                    __Vfunc_leading_zero32__89__part = 0x800000U;
                    __Vfunc_leading_zero32__89__count = 0U;
                    __Vfunc_leading_zero32__89__count 
                        = (0x3fU & ((IData)(8U) + (IData)(__Vfunc_leading_zero32__89__count)));
                    __Vfunc_leading_zero32__89__part 
                        = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__89__part, 8U);
                    if ((0U == (__Vfunc_leading_zero32__89__part 
                                >> 0x1cU))) {
                        __Vfunc_leading_zero32__89__count 
                            = (0x3fU & ((IData)(4U) 
                                        + (IData)(__Vfunc_leading_zero32__89__count)));
                        __Vfunc_leading_zero32__89__part 
                            = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__89__part, 4U);
                    }
                    if ((0U == (__Vfunc_leading_zero32__89__part 
                                >> 0x1eU))) {
                        __Vfunc_leading_zero32__89__count 
                            = (0x3fU & ((IData)(2U) 
                                        + (IData)(__Vfunc_leading_zero32__89__count)));
                        __Vfunc_leading_zero32__89__part 
                            = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__89__part, 2U);
                    }
                    if ((1U & (~ (__Vfunc_leading_zero32__89__part 
                                  >> 0x1fU)))) {
                        __Vfunc_leading_zero32__89__count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(__Vfunc_leading_zero32__89__count)));
                    }
                    __Vfunc_leading_zero32__89__Vfuncout 
                        = __Vfunc_leading_zero32__89__count;
                }(), (IData)(__Vfunc_leading_zero32__89__Vfuncout)) 
                    - (IData)(8U)));
}

VL_ATTR_COLD void Vleaf_tb___024root___eval_final(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__stl(Vleaf_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vleaf_tb___024root___eval_phase__stl(Vleaf_tb___024root* vlSelf);

VL_ATTR_COLD void Vleaf_tb___024root___eval_settle(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vleaf_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-smoke-qk-verilator-20261103T075858Z-a32c048b/qk_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vleaf_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__stl(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__0(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vfunc_bf16_invalid__7__Vfuncout;
    __Vfunc_bf16_invalid__7__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__7__value;
    __Vfunc_bf16_invalid__7__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__8__Vfuncout;
    __Vfunc_bf16_invalid__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__8__value;
    __Vfunc_bf16_invalid__8__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__9__Vfuncout;
    __Vfunc_bf16_invalid__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__9__value;
    __Vfunc_bf16_invalid__9__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__10__Vfuncout;
    __Vfunc_bf16_invalid__10__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__10__value;
    __Vfunc_bf16_invalid__10__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__11__Vfuncout;
    __Vfunc_bf16_invalid__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__11__value;
    __Vfunc_bf16_invalid__11__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__12__Vfuncout;
    __Vfunc_bf16_invalid__12__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__12__value;
    __Vfunc_bf16_invalid__12__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__13__Vfuncout;
    __Vfunc_bf16_invalid__13__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__13__value;
    __Vfunc_bf16_invalid__13__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__14__Vfuncout;
    __Vfunc_bf16_invalid__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__14__value;
    __Vfunc_bf16_invalid__14__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__15__Vfuncout;
    __Vfunc_bf16_invalid__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__15__value;
    __Vfunc_bf16_invalid__15__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__16__Vfuncout;
    __Vfunc_bf16_invalid__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__16__value;
    __Vfunc_bf16_invalid__16__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__17__Vfuncout;
    __Vfunc_bf16_invalid__17__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__17__value;
    __Vfunc_bf16_invalid__17__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__18__Vfuncout;
    __Vfunc_bf16_invalid__18__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__18__value;
    __Vfunc_bf16_invalid__18__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__19__Vfuncout;
    __Vfunc_bf16_invalid__19__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__19__value;
    __Vfunc_bf16_invalid__19__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__20__Vfuncout;
    __Vfunc_bf16_invalid__20__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__20__value;
    __Vfunc_bf16_invalid__20__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__21__Vfuncout;
    __Vfunc_bf16_invalid__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__21__value;
    __Vfunc_bf16_invalid__21__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__22__Vfuncout;
    __Vfunc_bf16_invalid__22__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__22__value;
    __Vfunc_bf16_invalid__22__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__55__Vfuncout;
    __Vfunc_bf16_invalid__55__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__55__value;
    __Vfunc_bf16_invalid__55__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__56__Vfuncout;
    __Vfunc_bf16_invalid__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__56__value;
    __Vfunc_bf16_invalid__56__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__61__Vfuncout;
    __Vfunc_bf16_invalid__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__61__value;
    __Vfunc_bf16_invalid__61__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__62__Vfuncout;
    __Vfunc_bf16_invalid__62__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__62__value;
    __Vfunc_bf16_invalid__62__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__67__Vfuncout;
    __Vfunc_bf16_invalid__67__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__67__value;
    __Vfunc_bf16_invalid__67__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__68__Vfuncout;
    __Vfunc_bf16_invalid__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__68__value;
    __Vfunc_bf16_invalid__68__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__73__Vfuncout;
    __Vfunc_bf16_invalid__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__73__value;
    __Vfunc_bf16_invalid__73__value = 0;
    CData/*0:0*/ __Vfunc_bf16_invalid__74__Vfuncout;
    __Vfunc_bf16_invalid__74__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bf16_invalid__74__value;
    __Vfunc_bf16_invalid__74__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__80__Vfuncout;
    __Vfunc_round_pack32__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__80__negative;
    __Vfunc_round_pack32__80__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__80__exponent;
    __Vfunc_round_pack32__80__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__80__significand;
    __Vfunc_round_pack32__80__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__80__shifted;
    __Vfunc_round_pack32__80__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__80__rounded;
    __Vfunc_round_pack32__80__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__80__adjusted;
    __Vfunc_round_pack32__80__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__80__biased;
    __Vfunc_round_pack32__80__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__97__Vfuncout;
    __Vfunc_round_pack32__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__97__negative;
    __Vfunc_round_pack32__97__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__97__exponent;
    __Vfunc_round_pack32__97__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__97__significand;
    __Vfunc_round_pack32__97__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__97__shifted;
    __Vfunc_round_pack32__97__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__97__rounded;
    __Vfunc_round_pack32__97__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__97__adjusted;
    __Vfunc_round_pack32__97__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__97__biased;
    __Vfunc_round_pack32__97__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__103__Vfuncout;
    __Vfunc_round_pack32__103__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__103__negative;
    __Vfunc_round_pack32__103__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__103__exponent;
    __Vfunc_round_pack32__103__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__103__significand;
    __Vfunc_round_pack32__103__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__103__shifted;
    __Vfunc_round_pack32__103__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__103__rounded;
    __Vfunc_round_pack32__103__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__103__adjusted;
    __Vfunc_round_pack32__103__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__103__biased;
    __Vfunc_round_pack32__103__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__109__Vfuncout;
    __Vfunc_round_pack32__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__109__negative;
    __Vfunc_round_pack32__109__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__109__exponent;
    __Vfunc_round_pack32__109__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__109__significand;
    __Vfunc_round_pack32__109__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__109__shifted;
    __Vfunc_round_pack32__109__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__109__rounded;
    __Vfunc_round_pack32__109__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__109__adjusted;
    __Vfunc_round_pack32__109__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__109__biased;
    __Vfunc_round_pack32__109__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__115__Vfuncout;
    __Vfunc_round_pack32__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__115__negative;
    __Vfunc_round_pack32__115__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__115__exponent;
    __Vfunc_round_pack32__115__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__115__significand;
    __Vfunc_round_pack32__115__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__115__shifted;
    __Vfunc_round_pack32__115__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__115__rounded;
    __Vfunc_round_pack32__115__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__115__adjusted;
    __Vfunc_round_pack32__115__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__115__biased;
    __Vfunc_round_pack32__115__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__121__Vfuncout;
    __Vfunc_round_pack32__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__121__negative;
    __Vfunc_round_pack32__121__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__121__exponent;
    __Vfunc_round_pack32__121__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__121__significand;
    __Vfunc_round_pack32__121__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__121__shifted;
    __Vfunc_round_pack32__121__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__121__rounded;
    __Vfunc_round_pack32__121__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__121__adjusted;
    __Vfunc_round_pack32__121__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__121__biased;
    __Vfunc_round_pack32__121__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__127__Vfuncout;
    __Vfunc_round_pack32__127__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__127__negative;
    __Vfunc_round_pack32__127__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__127__exponent;
    __Vfunc_round_pack32__127__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__127__significand;
    __Vfunc_round_pack32__127__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__127__shifted;
    __Vfunc_round_pack32__127__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__127__rounded;
    __Vfunc_round_pack32__127__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__127__adjusted;
    __Vfunc_round_pack32__127__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__127__biased;
    __Vfunc_round_pack32__127__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__133__Vfuncout;
    __Vfunc_round_pack32__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__133__negative;
    __Vfunc_round_pack32__133__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__133__exponent;
    __Vfunc_round_pack32__133__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__133__significand;
    __Vfunc_round_pack32__133__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__133__shifted;
    __Vfunc_round_pack32__133__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__133__rounded;
    __Vfunc_round_pack32__133__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__133__adjusted;
    __Vfunc_round_pack32__133__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__133__biased;
    __Vfunc_round_pack32__133__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__139__Vfuncout;
    __Vfunc_round_pack32__139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__139__negative;
    __Vfunc_round_pack32__139__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__139__exponent;
    __Vfunc_round_pack32__139__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__139__significand;
    __Vfunc_round_pack32__139__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__139__shifted;
    __Vfunc_round_pack32__139__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__139__rounded;
    __Vfunc_round_pack32__139__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__139__adjusted;
    __Vfunc_round_pack32__139__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__139__biased;
    __Vfunc_round_pack32__139__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__144__Vfuncout;
    __Vfunc_round_pack32__144__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__144__negative;
    __Vfunc_round_pack32__144__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__144__exponent;
    __Vfunc_round_pack32__144__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__144__significand;
    __Vfunc_round_pack32__144__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__144__shifted;
    __Vfunc_round_pack32__144__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__144__rounded;
    __Vfunc_round_pack32__144__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__144__adjusted;
    __Vfunc_round_pack32__144__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__144__biased;
    __Vfunc_round_pack32__144__biased = 0;
    SData/*11:0*/ __Vfunc_round_pack32__150__exponent;
    __Vfunc_round_pack32__150__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__150__shifted;
    __Vfunc_round_pack32__150__shifted = 0;
    // Body
    if ((0x358637bdU <= (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean))) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small_value = 0x358637bdU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 = 0x6bU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        >> 0x17U));
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_value = 0x358637bdU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        >> 0x17U));
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 = 0x6bU;
    }
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__pair_failed 
        = (IData)((0U != (0x11U & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__pair_failed 
        = (IData)((0U != (0x22U & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__pair_failed 
        = (IData)((0U != (0x44U & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__pair_failed 
        = (IData)((0U != (0x88U & (IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed))));
    vlSelf->__VdfgTmp_h817ebf30__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h82c5b7b3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1fd61e76__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9cb924e4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcda41025__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha4abb9be__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h12b1b04d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h11aa6129__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf4eab645__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 7U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 7U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd4053547__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 0x17U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 0x17U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h85e0c953__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 0x27U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 0x27U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h922851d8__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                         >> 0x37U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                                                  >> 0x37U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9cae445e__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 7U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 7U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha96271f0__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 0x17U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 0x17U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb3169a5e__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 0x27U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 0x27U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he4d8cc52__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                         >> 0x37U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                                                  >> 0x37U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h45e627dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf157bcc7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdcfe23de__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5a759a1d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he7e1c4f5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hed2d9fd6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb63c1596__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hba05e26a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__take_bit 
        = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__remainder 
            << 1U) >= vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__divisor);
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__79__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__79__part 
                            = vlSelf->__Vfunc_leading_zero32__79__value;
                        vlSelf->__Vfunc_leading_zero32__79__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__79__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                            vlSelf->__Vfunc_leading_zero32__79__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__79__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__79__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__79__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__79__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__79__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__79__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__79__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__79__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__143__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__143__part 
                            = vlSelf->__Vfunc_leading_zero32__143__value;
                        vlSelf->__Vfunc_leading_zero32__143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__143__count)));
                            vlSelf->__Vfunc_leading_zero32__143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__143__count)));
                            vlSelf->__Vfunc_leading_zero32__143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__143__count)));
                            vlSelf->__Vfunc_leading_zero32__143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__143__count)));
                            vlSelf->__Vfunc_leading_zero32__143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__143__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__149__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__149__part 
                            = vlSelf->__Vfunc_leading_zero32__149__value;
                        vlSelf->__Vfunc_leading_zero32__149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__149__count)));
                            vlSelf->__Vfunc_leading_zero32__149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__149__count)));
                            vlSelf->__Vfunc_leading_zero32__149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__149__count)));
                            vlSelf->__Vfunc_leading_zero32__149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__149__count)));
                            vlSelf->__Vfunc_leading_zero32__149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__149__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__155__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__155__part 
                            = vlSelf->__Vfunc_leading_zero32__155__value;
                        vlSelf->__Vfunc_leading_zero32__155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__155__count)));
                            vlSelf->__Vfunc_leading_zero32__155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__155__count)));
                            vlSelf->__Vfunc_leading_zero32__155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__155__count)));
                            vlSelf->__Vfunc_leading_zero32__155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__155__count)));
                            vlSelf->__Vfunc_leading_zero32__155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__155__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__161__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__161__part 
                            = vlSelf->__Vfunc_leading_zero32__161__value;
                        vlSelf->__Vfunc_leading_zero32__161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                            vlSelf->__Vfunc_leading_zero32__161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__161__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__167__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__167__part 
                            = vlSelf->__Vfunc_leading_zero32__167__value;
                        vlSelf->__Vfunc_leading_zero32__167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                            vlSelf->__Vfunc_leading_zero32__167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__167__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__173__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__173__part 
                            = vlSelf->__Vfunc_leading_zero32__173__value;
                        vlSelf->__Vfunc_leading_zero32__173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__173__count)));
                            vlSelf->__Vfunc_leading_zero32__173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__173__count)));
                            vlSelf->__Vfunc_leading_zero32__173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__173__count)));
                            vlSelf->__Vfunc_leading_zero32__173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__173__count)));
                            vlSelf->__Vfunc_leading_zero32__173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__173__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__179__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__179__part 
                            = vlSelf->__Vfunc_leading_zero32__179__value;
                        vlSelf->__Vfunc_leading_zero32__179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__179__count)));
                            vlSelf->__Vfunc_leading_zero32__179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__179__count)));
                            vlSelf->__Vfunc_leading_zero32__179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__179__count)));
                            vlSelf->__Vfunc_leading_zero32__179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__179__count)));
                            vlSelf->__Vfunc_leading_zero32__179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__179__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__185__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__185__part 
                            = vlSelf->__Vfunc_leading_zero32__185__value;
                        vlSelf->__Vfunc_leading_zero32__185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__185__count)));
                            vlSelf->__Vfunc_leading_zero32__185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__185__count)));
                            vlSelf->__Vfunc_leading_zero32__185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__185__count)));
                            vlSelf->__Vfunc_leading_zero32__185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__185__count)));
                            vlSelf->__Vfunc_leading_zero32__185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__185__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__191__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__191__part 
                            = vlSelf->__Vfunc_leading_zero32__191__value;
                        vlSelf->__Vfunc_leading_zero32__191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__191__count)));
                            vlSelf->__Vfunc_leading_zero32__191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__191__count)));
                            vlSelf->__Vfunc_leading_zero32__191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__191__count)));
                            vlSelf->__Vfunc_leading_zero32__191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__191__count)));
                            vlSelf->__Vfunc_leading_zero32__191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__191__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__197__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__197__part 
                            = vlSelf->__Vfunc_leading_zero32__197__value;
                        vlSelf->__Vfunc_leading_zero32__197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__197__count)));
                            vlSelf->__Vfunc_leading_zero32__197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__197__count)));
                            vlSelf->__Vfunc_leading_zero32__197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__197__count)));
                            vlSelf->__Vfunc_leading_zero32__197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__197__count)));
                            vlSelf->__Vfunc_leading_zero32__197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__197__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__203__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__203__part 
                            = vlSelf->__Vfunc_leading_zero32__203__value;
                        vlSelf->__Vfunc_leading_zero32__203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__203__count)));
                            vlSelf->__Vfunc_leading_zero32__203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__203__count)));
                            vlSelf->__Vfunc_leading_zero32__203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__203__count)));
                            vlSelf->__Vfunc_leading_zero32__203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__203__count)));
                            vlSelf->__Vfunc_leading_zero32__203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__203__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__209__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__209__part 
                            = vlSelf->__Vfunc_leading_zero32__209__value;
                        vlSelf->__Vfunc_leading_zero32__209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__209__count)));
                            vlSelf->__Vfunc_leading_zero32__209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__209__count)));
                            vlSelf->__Vfunc_leading_zero32__209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__209__count)));
                            vlSelf->__Vfunc_leading_zero32__209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__209__count)));
                            vlSelf->__Vfunc_leading_zero32__209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__209__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__215__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__215__part 
                            = vlSelf->__Vfunc_leading_zero32__215__value;
                        vlSelf->__Vfunc_leading_zero32__215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__215__count)));
                            vlSelf->__Vfunc_leading_zero32__215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__215__count)));
                            vlSelf->__Vfunc_leading_zero32__215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__215__count)));
                            vlSelf->__Vfunc_leading_zero32__215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__215__count)));
                            vlSelf->__Vfunc_leading_zero32__215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__215__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__221__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__221__part 
                            = vlSelf->__Vfunc_leading_zero32__221__value;
                        vlSelf->__Vfunc_leading_zero32__221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__221__count)));
                            vlSelf->__Vfunc_leading_zero32__221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__221__count)));
                            vlSelf->__Vfunc_leading_zero32__221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__221__count)));
                            vlSelf->__Vfunc_leading_zero32__221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__221__count)));
                            vlSelf->__Vfunc_leading_zero32__221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__221__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__227__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__227__part 
                            = vlSelf->__Vfunc_leading_zero32__227__value;
                        vlSelf->__Vfunc_leading_zero32__227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__227__count)));
                            vlSelf->__Vfunc_leading_zero32__227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__227__count)));
                            vlSelf->__Vfunc_leading_zero32__227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__227__count)));
                            vlSelf->__Vfunc_leading_zero32__227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__227__count)));
                            vlSelf->__Vfunc_leading_zero32__227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__227__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__233__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__233__part 
                            = vlSelf->__Vfunc_leading_zero32__233__value;
                        vlSelf->__Vfunc_leading_zero32__233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__233__count)));
                            vlSelf->__Vfunc_leading_zero32__233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__233__count)));
                            vlSelf->__Vfunc_leading_zero32__233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__233__count)));
                            vlSelf->__Vfunc_leading_zero32__233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__233__count)));
                            vlSelf->__Vfunc_leading_zero32__233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__233__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__239__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__239__part 
                            = vlSelf->__Vfunc_leading_zero32__239__value;
                        vlSelf->__Vfunc_leading_zero32__239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__239__count)));
                            vlSelf->__Vfunc_leading_zero32__239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__239__count)));
                            vlSelf->__Vfunc_leading_zero32__239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__239__count)));
                            vlSelf->__Vfunc_leading_zero32__239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__239__count)));
                            vlSelf->__Vfunc_leading_zero32__239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__239__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__245__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__245__part 
                            = vlSelf->__Vfunc_leading_zero32__245__value;
                        vlSelf->__Vfunc_leading_zero32__245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__245__count)));
                            vlSelf->__Vfunc_leading_zero32__245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__245__count)));
                            vlSelf->__Vfunc_leading_zero32__245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__245__count)));
                            vlSelf->__Vfunc_leading_zero32__245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__245__count)));
                            vlSelf->__Vfunc_leading_zero32__245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__245__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__251__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__251__part 
                            = vlSelf->__Vfunc_leading_zero32__251__value;
                        vlSelf->__Vfunc_leading_zero32__251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__251__count)));
                            vlSelf->__Vfunc_leading_zero32__251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__251__count)));
                            vlSelf->__Vfunc_leading_zero32__251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__251__count)));
                            vlSelf->__Vfunc_leading_zero32__251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__251__count)));
                            vlSelf->__Vfunc_leading_zero32__251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__251__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__257__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__257__part 
                            = vlSelf->__Vfunc_leading_zero32__257__value;
                        vlSelf->__Vfunc_leading_zero32__257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__257__count)));
                            vlSelf->__Vfunc_leading_zero32__257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__257__count)));
                            vlSelf->__Vfunc_leading_zero32__257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__257__count)));
                            vlSelf->__Vfunc_leading_zero32__257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__257__count)));
                            vlSelf->__Vfunc_leading_zero32__257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__257__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__263__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__263__part 
                            = vlSelf->__Vfunc_leading_zero32__263__value;
                        vlSelf->__Vfunc_leading_zero32__263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__263__count)));
                            vlSelf->__Vfunc_leading_zero32__263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__263__count)));
                            vlSelf->__Vfunc_leading_zero32__263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__263__count)));
                            vlSelf->__Vfunc_leading_zero32__263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__263__count)));
                            vlSelf->__Vfunc_leading_zero32__263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__263__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__269__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__269__part 
                            = vlSelf->__Vfunc_leading_zero32__269__value;
                        vlSelf->__Vfunc_leading_zero32__269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__269__count)));
                            vlSelf->__Vfunc_leading_zero32__269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__269__count)));
                            vlSelf->__Vfunc_leading_zero32__269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__269__count)));
                            vlSelf->__Vfunc_leading_zero32__269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__269__count)));
                            vlSelf->__Vfunc_leading_zero32__269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__269__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__275__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__275__part 
                            = vlSelf->__Vfunc_leading_zero32__275__value;
                        vlSelf->__Vfunc_leading_zero32__275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__275__count)));
                            vlSelf->__Vfunc_leading_zero32__275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__275__count)));
                            vlSelf->__Vfunc_leading_zero32__275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__275__count)));
                            vlSelf->__Vfunc_leading_zero32__275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__275__count)));
                            vlSelf->__Vfunc_leading_zero32__275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__275__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__281__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__281__part 
                            = vlSelf->__Vfunc_leading_zero32__281__value;
                        vlSelf->__Vfunc_leading_zero32__281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__281__count)));
                            vlSelf->__Vfunc_leading_zero32__281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__281__count)));
                            vlSelf->__Vfunc_leading_zero32__281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__281__count)));
                            vlSelf->__Vfunc_leading_zero32__281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__281__count)));
                            vlSelf->__Vfunc_leading_zero32__281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__281__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__287__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__287__part 
                            = vlSelf->__Vfunc_leading_zero32__287__value;
                        vlSelf->__Vfunc_leading_zero32__287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__287__count)));
                            vlSelf->__Vfunc_leading_zero32__287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__287__count)));
                            vlSelf->__Vfunc_leading_zero32__287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__287__count)));
                            vlSelf->__Vfunc_leading_zero32__287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__287__count)));
                            vlSelf->__Vfunc_leading_zero32__287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__287__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__293__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__293__part 
                            = vlSelf->__Vfunc_leading_zero32__293__value;
                        vlSelf->__Vfunc_leading_zero32__293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__293__count)));
                            vlSelf->__Vfunc_leading_zero32__293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__293__count)));
                            vlSelf->__Vfunc_leading_zero32__293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__293__count)));
                            vlSelf->__Vfunc_leading_zero32__293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__293__count)));
                            vlSelf->__Vfunc_leading_zero32__293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__293__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__299__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__299__part 
                            = vlSelf->__Vfunc_leading_zero32__299__value;
                        vlSelf->__Vfunc_leading_zero32__299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__299__count)));
                            vlSelf->__Vfunc_leading_zero32__299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__299__count)));
                            vlSelf->__Vfunc_leading_zero32__299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__299__count)));
                            vlSelf->__Vfunc_leading_zero32__299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__299__count)));
                            vlSelf->__Vfunc_leading_zero32__299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__299__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__305__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__305__part 
                            = vlSelf->__Vfunc_leading_zero32__305__value;
                        vlSelf->__Vfunc_leading_zero32__305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__305__count)));
                            vlSelf->__Vfunc_leading_zero32__305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__305__count)));
                            vlSelf->__Vfunc_leading_zero32__305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__305__count)));
                            vlSelf->__Vfunc_leading_zero32__305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__305__count)));
                            vlSelf->__Vfunc_leading_zero32__305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__305__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__311__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__311__part 
                            = vlSelf->__Vfunc_leading_zero32__311__value;
                        vlSelf->__Vfunc_leading_zero32__311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__311__count)));
                            vlSelf->__Vfunc_leading_zero32__311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__311__count)));
                            vlSelf->__Vfunc_leading_zero32__311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__311__count)));
                            vlSelf->__Vfunc_leading_zero32__311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__311__count)));
                            vlSelf->__Vfunc_leading_zero32__311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__311__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__317__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__317__part 
                            = vlSelf->__Vfunc_leading_zero32__317__value;
                        vlSelf->__Vfunc_leading_zero32__317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__317__count)));
                            vlSelf->__Vfunc_leading_zero32__317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__317__count)));
                            vlSelf->__Vfunc_leading_zero32__317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__317__count)));
                            vlSelf->__Vfunc_leading_zero32__317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__317__count)));
                            vlSelf->__Vfunc_leading_zero32__317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__317__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__323__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__323__part 
                            = vlSelf->__Vfunc_leading_zero32__323__value;
                        vlSelf->__Vfunc_leading_zero32__323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__323__count)));
                            vlSelf->__Vfunc_leading_zero32__323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__323__count)));
                            vlSelf->__Vfunc_leading_zero32__323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__323__count)));
                            vlSelf->__Vfunc_leading_zero32__323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__323__count)));
                            vlSelf->__Vfunc_leading_zero32__323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__323__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__329__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__329__part 
                            = vlSelf->__Vfunc_leading_zero32__329__value;
                        vlSelf->__Vfunc_leading_zero32__329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__329__count)));
                            vlSelf->__Vfunc_leading_zero32__329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__329__count)));
                            vlSelf->__Vfunc_leading_zero32__329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__329__count)));
                            vlSelf->__Vfunc_leading_zero32__329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__329__count)));
                            vlSelf->__Vfunc_leading_zero32__329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__329__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__335__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__335__part 
                            = vlSelf->__Vfunc_leading_zero32__335__value;
                        vlSelf->__Vfunc_leading_zero32__335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__335__count)));
                            vlSelf->__Vfunc_leading_zero32__335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__335__count)));
                            vlSelf->__Vfunc_leading_zero32__335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__335__count)));
                            vlSelf->__Vfunc_leading_zero32__335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__335__count)));
                            vlSelf->__Vfunc_leading_zero32__335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__335__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__341__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__341__part 
                            = vlSelf->__Vfunc_leading_zero32__341__value;
                        vlSelf->__Vfunc_leading_zero32__341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__341__count)));
                            vlSelf->__Vfunc_leading_zero32__341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__341__count)));
                            vlSelf->__Vfunc_leading_zero32__341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__341__count)));
                            vlSelf->__Vfunc_leading_zero32__341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__341__count)));
                            vlSelf->__Vfunc_leading_zero32__341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__341__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__347__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__347__part 
                            = vlSelf->__Vfunc_leading_zero32__347__value;
                        vlSelf->__Vfunc_leading_zero32__347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__347__count)));
                            vlSelf->__Vfunc_leading_zero32__347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__347__count)));
                            vlSelf->__Vfunc_leading_zero32__347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__347__count)));
                            vlSelf->__Vfunc_leading_zero32__347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__347__count)));
                            vlSelf->__Vfunc_leading_zero32__347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__347__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__353__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__353__part 
                            = vlSelf->__Vfunc_leading_zero32__353__value;
                        vlSelf->__Vfunc_leading_zero32__353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__353__count)));
                            vlSelf->__Vfunc_leading_zero32__353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__353__count)));
                            vlSelf->__Vfunc_leading_zero32__353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__353__count)));
                            vlSelf->__Vfunc_leading_zero32__353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__353__count)));
                            vlSelf->__Vfunc_leading_zero32__353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__353__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__359__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__359__part 
                            = vlSelf->__Vfunc_leading_zero32__359__value;
                        vlSelf->__Vfunc_leading_zero32__359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__359__count)));
                            vlSelf->__Vfunc_leading_zero32__359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__359__count)));
                            vlSelf->__Vfunc_leading_zero32__359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__359__count)));
                            vlSelf->__Vfunc_leading_zero32__359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__359__count)));
                            vlSelf->__Vfunc_leading_zero32__359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__359__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__365__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__365__part 
                            = vlSelf->__Vfunc_leading_zero32__365__value;
                        vlSelf->__Vfunc_leading_zero32__365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__365__count)));
                            vlSelf->__Vfunc_leading_zero32__365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__365__count)));
                            vlSelf->__Vfunc_leading_zero32__365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__365__count)));
                            vlSelf->__Vfunc_leading_zero32__365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__365__count)));
                            vlSelf->__Vfunc_leading_zero32__365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__365__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__371__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__371__part 
                            = vlSelf->__Vfunc_leading_zero32__371__value;
                        vlSelf->__Vfunc_leading_zero32__371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__371__count)));
                            vlSelf->__Vfunc_leading_zero32__371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__371__count)));
                            vlSelf->__Vfunc_leading_zero32__371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__371__count)));
                            vlSelf->__Vfunc_leading_zero32__371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__371__count)));
                            vlSelf->__Vfunc_leading_zero32__371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__371__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__377__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__377__part 
                            = vlSelf->__Vfunc_leading_zero32__377__value;
                        vlSelf->__Vfunc_leading_zero32__377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__377__count)));
                            vlSelf->__Vfunc_leading_zero32__377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__377__count)));
                            vlSelf->__Vfunc_leading_zero32__377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__377__count)));
                            vlSelf->__Vfunc_leading_zero32__377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__377__count)));
                            vlSelf->__Vfunc_leading_zero32__377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__377__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__383__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__383__part 
                            = vlSelf->__Vfunc_leading_zero32__383__value;
                        vlSelf->__Vfunc_leading_zero32__383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__383__count)));
                            vlSelf->__Vfunc_leading_zero32__383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__383__count)));
                            vlSelf->__Vfunc_leading_zero32__383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__383__count)));
                            vlSelf->__Vfunc_leading_zero32__383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__383__count)));
                            vlSelf->__Vfunc_leading_zero32__383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__383__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__389__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__389__part 
                            = vlSelf->__Vfunc_leading_zero32__389__value;
                        vlSelf->__Vfunc_leading_zero32__389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__389__count)));
                            vlSelf->__Vfunc_leading_zero32__389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__389__count)));
                            vlSelf->__Vfunc_leading_zero32__389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__389__count)));
                            vlSelf->__Vfunc_leading_zero32__389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__389__count)));
                            vlSelf->__Vfunc_leading_zero32__389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__389__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__395__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__395__part 
                            = vlSelf->__Vfunc_leading_zero32__395__value;
                        vlSelf->__Vfunc_leading_zero32__395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__395__count)));
                            vlSelf->__Vfunc_leading_zero32__395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__395__count)));
                            vlSelf->__Vfunc_leading_zero32__395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__395__count)));
                            vlSelf->__Vfunc_leading_zero32__395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__395__count)));
                            vlSelf->__Vfunc_leading_zero32__395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__395__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__401__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__401__part 
                            = vlSelf->__Vfunc_leading_zero32__401__value;
                        vlSelf->__Vfunc_leading_zero32__401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__401__count)));
                            vlSelf->__Vfunc_leading_zero32__401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__401__count)));
                            vlSelf->__Vfunc_leading_zero32__401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__401__count)));
                            vlSelf->__Vfunc_leading_zero32__401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__401__count)));
                            vlSelf->__Vfunc_leading_zero32__401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__401__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__407__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__407__part 
                            = vlSelf->__Vfunc_leading_zero32__407__value;
                        vlSelf->__Vfunc_leading_zero32__407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__407__count)));
                            vlSelf->__Vfunc_leading_zero32__407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__407__count)));
                            vlSelf->__Vfunc_leading_zero32__407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__407__count)));
                            vlSelf->__Vfunc_leading_zero32__407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__407__count)));
                            vlSelf->__Vfunc_leading_zero32__407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__407__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__413__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__413__part 
                            = vlSelf->__Vfunc_leading_zero32__413__value;
                        vlSelf->__Vfunc_leading_zero32__413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__413__count)));
                            vlSelf->__Vfunc_leading_zero32__413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__413__count)));
                            vlSelf->__Vfunc_leading_zero32__413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__413__count)));
                            vlSelf->__Vfunc_leading_zero32__413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__413__count)));
                            vlSelf->__Vfunc_leading_zero32__413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__413__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__419__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__419__part 
                            = vlSelf->__Vfunc_leading_zero32__419__value;
                        vlSelf->__Vfunc_leading_zero32__419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__419__count)));
                            vlSelf->__Vfunc_leading_zero32__419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__419__count)));
                            vlSelf->__Vfunc_leading_zero32__419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__419__count)));
                            vlSelf->__Vfunc_leading_zero32__419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__419__count)));
                            vlSelf->__Vfunc_leading_zero32__419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__419__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__425__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__425__part 
                            = vlSelf->__Vfunc_leading_zero32__425__value;
                        vlSelf->__Vfunc_leading_zero32__425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__425__count)));
                            vlSelf->__Vfunc_leading_zero32__425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__425__count)));
                            vlSelf->__Vfunc_leading_zero32__425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__425__count)));
                            vlSelf->__Vfunc_leading_zero32__425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__425__count)));
                            vlSelf->__Vfunc_leading_zero32__425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__425__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__431__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__431__part 
                            = vlSelf->__Vfunc_leading_zero32__431__value;
                        vlSelf->__Vfunc_leading_zero32__431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__431__count)));
                            vlSelf->__Vfunc_leading_zero32__431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__431__count)));
                            vlSelf->__Vfunc_leading_zero32__431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__431__count)));
                            vlSelf->__Vfunc_leading_zero32__431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__431__count)));
                            vlSelf->__Vfunc_leading_zero32__431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__431__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__437__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__437__part 
                            = vlSelf->__Vfunc_leading_zero32__437__value;
                        vlSelf->__Vfunc_leading_zero32__437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__437__count)));
                            vlSelf->__Vfunc_leading_zero32__437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__437__count)));
                            vlSelf->__Vfunc_leading_zero32__437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__437__count)));
                            vlSelf->__Vfunc_leading_zero32__437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__437__count)));
                            vlSelf->__Vfunc_leading_zero32__437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__437__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__443__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__443__part 
                            = vlSelf->__Vfunc_leading_zero32__443__value;
                        vlSelf->__Vfunc_leading_zero32__443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__443__count)));
                            vlSelf->__Vfunc_leading_zero32__443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__443__count)));
                            vlSelf->__Vfunc_leading_zero32__443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__443__count)));
                            vlSelf->__Vfunc_leading_zero32__443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__443__count)));
                            vlSelf->__Vfunc_leading_zero32__443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__443__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__449__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__449__part 
                            = vlSelf->__Vfunc_leading_zero32__449__value;
                        vlSelf->__Vfunc_leading_zero32__449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__449__count)));
                            vlSelf->__Vfunc_leading_zero32__449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__449__count)));
                            vlSelf->__Vfunc_leading_zero32__449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__449__count)));
                            vlSelf->__Vfunc_leading_zero32__449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__449__count)));
                            vlSelf->__Vfunc_leading_zero32__449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__449__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__455__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__455__part 
                            = vlSelf->__Vfunc_leading_zero32__455__value;
                        vlSelf->__Vfunc_leading_zero32__455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__455__count)));
                            vlSelf->__Vfunc_leading_zero32__455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__455__count)));
                            vlSelf->__Vfunc_leading_zero32__455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__455__count)));
                            vlSelf->__Vfunc_leading_zero32__455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__455__count)));
                            vlSelf->__Vfunc_leading_zero32__455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__455__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__461__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__461__part 
                            = vlSelf->__Vfunc_leading_zero32__461__value;
                        vlSelf->__Vfunc_leading_zero32__461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__461__count)));
                            vlSelf->__Vfunc_leading_zero32__461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__461__count)));
                            vlSelf->__Vfunc_leading_zero32__461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__461__count)));
                            vlSelf->__Vfunc_leading_zero32__461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__461__count)));
                            vlSelf->__Vfunc_leading_zero32__461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__461__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__467__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__467__part 
                            = vlSelf->__Vfunc_leading_zero32__467__value;
                        vlSelf->__Vfunc_leading_zero32__467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__467__count)));
                            vlSelf->__Vfunc_leading_zero32__467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__467__count)));
                            vlSelf->__Vfunc_leading_zero32__467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__467__count)));
                            vlSelf->__Vfunc_leading_zero32__467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__467__count)));
                            vlSelf->__Vfunc_leading_zero32__467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__467__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__473__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__473__part 
                            = vlSelf->__Vfunc_leading_zero32__473__value;
                        vlSelf->__Vfunc_leading_zero32__473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__473__count)));
                            vlSelf->__Vfunc_leading_zero32__473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__473__count)));
                            vlSelf->__Vfunc_leading_zero32__473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__473__count)));
                            vlSelf->__Vfunc_leading_zero32__473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__473__count)));
                            vlSelf->__Vfunc_leading_zero32__473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__473__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__479__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__479__part 
                            = vlSelf->__Vfunc_leading_zero32__479__value;
                        vlSelf->__Vfunc_leading_zero32__479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__479__count)));
                            vlSelf->__Vfunc_leading_zero32__479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__479__count)));
                            vlSelf->__Vfunc_leading_zero32__479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__479__count)));
                            vlSelf->__Vfunc_leading_zero32__479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__479__count)));
                            vlSelf->__Vfunc_leading_zero32__479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__479__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__485__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__485__part 
                            = vlSelf->__Vfunc_leading_zero32__485__value;
                        vlSelf->__Vfunc_leading_zero32__485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__485__count)));
                            vlSelf->__Vfunc_leading_zero32__485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__485__count)));
                            vlSelf->__Vfunc_leading_zero32__485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__485__count)));
                            vlSelf->__Vfunc_leading_zero32__485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__485__count)));
                            vlSelf->__Vfunc_leading_zero32__485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__485__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__491__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__491__part 
                            = vlSelf->__Vfunc_leading_zero32__491__value;
                        vlSelf->__Vfunc_leading_zero32__491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__491__count)));
                            vlSelf->__Vfunc_leading_zero32__491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__491__count)));
                            vlSelf->__Vfunc_leading_zero32__491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__491__count)));
                            vlSelf->__Vfunc_leading_zero32__491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__491__count)));
                            vlSelf->__Vfunc_leading_zero32__491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__491__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__497__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__497__part 
                            = vlSelf->__Vfunc_leading_zero32__497__value;
                        vlSelf->__Vfunc_leading_zero32__497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__497__count)));
                            vlSelf->__Vfunc_leading_zero32__497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__497__count)));
                            vlSelf->__Vfunc_leading_zero32__497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__497__count)));
                            vlSelf->__Vfunc_leading_zero32__497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__497__count)));
                            vlSelf->__Vfunc_leading_zero32__497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__497__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__503__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__503__part 
                            = vlSelf->__Vfunc_leading_zero32__503__value;
                        vlSelf->__Vfunc_leading_zero32__503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__503__count)));
                            vlSelf->__Vfunc_leading_zero32__503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__503__count)));
                            vlSelf->__Vfunc_leading_zero32__503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__503__count)));
                            vlSelf->__Vfunc_leading_zero32__503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__503__count)));
                            vlSelf->__Vfunc_leading_zero32__503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__503__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__509__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__509__part 
                            = vlSelf->__Vfunc_leading_zero32__509__value;
                        vlSelf->__Vfunc_leading_zero32__509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__509__count)));
                            vlSelf->__Vfunc_leading_zero32__509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__509__count)));
                            vlSelf->__Vfunc_leading_zero32__509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__509__count)));
                            vlSelf->__Vfunc_leading_zero32__509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__509__count)));
                            vlSelf->__Vfunc_leading_zero32__509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__509__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__515__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__515__part 
                            = vlSelf->__Vfunc_leading_zero32__515__value;
                        vlSelf->__Vfunc_leading_zero32__515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__515__count)));
                            vlSelf->__Vfunc_leading_zero32__515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__515__count)));
                            vlSelf->__Vfunc_leading_zero32__515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__515__count)));
                            vlSelf->__Vfunc_leading_zero32__515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__515__count)));
                            vlSelf->__Vfunc_leading_zero32__515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__515__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__521__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__521__part 
                            = vlSelf->__Vfunc_leading_zero32__521__value;
                        vlSelf->__Vfunc_leading_zero32__521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__521__count)));
                            vlSelf->__Vfunc_leading_zero32__521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__521__count)));
                            vlSelf->__Vfunc_leading_zero32__521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__521__count)));
                            vlSelf->__Vfunc_leading_zero32__521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__521__count)));
                            vlSelf->__Vfunc_leading_zero32__521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__521__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__527__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__527__part 
                            = vlSelf->__Vfunc_leading_zero32__527__value;
                        vlSelf->__Vfunc_leading_zero32__527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__527__count)));
                            vlSelf->__Vfunc_leading_zero32__527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__527__count)));
                            vlSelf->__Vfunc_leading_zero32__527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__527__count)));
                            vlSelf->__Vfunc_leading_zero32__527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__527__count)));
                            vlSelf->__Vfunc_leading_zero32__527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__527__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__533__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__533__part 
                            = vlSelf->__Vfunc_leading_zero32__533__value;
                        vlSelf->__Vfunc_leading_zero32__533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__533__count)));
                            vlSelf->__Vfunc_leading_zero32__533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__533__count)));
                            vlSelf->__Vfunc_leading_zero32__533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__533__count)));
                            vlSelf->__Vfunc_leading_zero32__533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__533__count)));
                            vlSelf->__Vfunc_leading_zero32__533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__533__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__539__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__539__part 
                            = vlSelf->__Vfunc_leading_zero32__539__value;
                        vlSelf->__Vfunc_leading_zero32__539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__539__count)));
                            vlSelf->__Vfunc_leading_zero32__539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__539__count)));
                            vlSelf->__Vfunc_leading_zero32__539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__539__count)));
                            vlSelf->__Vfunc_leading_zero32__539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__539__count)));
                            vlSelf->__Vfunc_leading_zero32__539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__539__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__545__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__545__part 
                            = vlSelf->__Vfunc_leading_zero32__545__value;
                        vlSelf->__Vfunc_leading_zero32__545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__545__count)));
                            vlSelf->__Vfunc_leading_zero32__545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__545__count)));
                            vlSelf->__Vfunc_leading_zero32__545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__545__count)));
                            vlSelf->__Vfunc_leading_zero32__545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__545__count)));
                            vlSelf->__Vfunc_leading_zero32__545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__545__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__551__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__551__part 
                            = vlSelf->__Vfunc_leading_zero32__551__value;
                        vlSelf->__Vfunc_leading_zero32__551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__551__count)));
                            vlSelf->__Vfunc_leading_zero32__551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__551__count)));
                            vlSelf->__Vfunc_leading_zero32__551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__551__count)));
                            vlSelf->__Vfunc_leading_zero32__551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__551__count)));
                            vlSelf->__Vfunc_leading_zero32__551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__551__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__557__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__557__part 
                            = vlSelf->__Vfunc_leading_zero32__557__value;
                        vlSelf->__Vfunc_leading_zero32__557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__557__count)));
                            vlSelf->__Vfunc_leading_zero32__557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__557__count)));
                            vlSelf->__Vfunc_leading_zero32__557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__557__count)));
                            vlSelf->__Vfunc_leading_zero32__557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__557__count)));
                            vlSelf->__Vfunc_leading_zero32__557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__557__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__563__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__563__part 
                            = vlSelf->__Vfunc_leading_zero32__563__value;
                        vlSelf->__Vfunc_leading_zero32__563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__563__count)));
                            vlSelf->__Vfunc_leading_zero32__563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__563__count)));
                            vlSelf->__Vfunc_leading_zero32__563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__563__count)));
                            vlSelf->__Vfunc_leading_zero32__563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__563__count)));
                            vlSelf->__Vfunc_leading_zero32__563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__563__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__569__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__569__part 
                            = vlSelf->__Vfunc_leading_zero32__569__value;
                        vlSelf->__Vfunc_leading_zero32__569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__569__count)));
                            vlSelf->__Vfunc_leading_zero32__569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__569__count)));
                            vlSelf->__Vfunc_leading_zero32__569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__569__count)));
                            vlSelf->__Vfunc_leading_zero32__569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__569__count)));
                            vlSelf->__Vfunc_leading_zero32__569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__569__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__575__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__575__part 
                            = vlSelf->__Vfunc_leading_zero32__575__value;
                        vlSelf->__Vfunc_leading_zero32__575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__575__count)));
                            vlSelf->__Vfunc_leading_zero32__575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__575__count)));
                            vlSelf->__Vfunc_leading_zero32__575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__575__count)));
                            vlSelf->__Vfunc_leading_zero32__575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__575__count)));
                            vlSelf->__Vfunc_leading_zero32__575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__575__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__581__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__581__part 
                            = vlSelf->__Vfunc_leading_zero32__581__value;
                        vlSelf->__Vfunc_leading_zero32__581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__581__count)));
                            vlSelf->__Vfunc_leading_zero32__581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__581__count)));
                            vlSelf->__Vfunc_leading_zero32__581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__581__count)));
                            vlSelf->__Vfunc_leading_zero32__581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__581__count)));
                            vlSelf->__Vfunc_leading_zero32__581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__581__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__587__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__587__part 
                            = vlSelf->__Vfunc_leading_zero32__587__value;
                        vlSelf->__Vfunc_leading_zero32__587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__587__count)));
                            vlSelf->__Vfunc_leading_zero32__587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__587__count)));
                            vlSelf->__Vfunc_leading_zero32__587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__587__count)));
                            vlSelf->__Vfunc_leading_zero32__587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__587__count)));
                            vlSelf->__Vfunc_leading_zero32__587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__587__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__593__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__593__part 
                            = vlSelf->__Vfunc_leading_zero32__593__value;
                        vlSelf->__Vfunc_leading_zero32__593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__593__count)));
                            vlSelf->__Vfunc_leading_zero32__593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__593__count)));
                            vlSelf->__Vfunc_leading_zero32__593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__593__count)));
                            vlSelf->__Vfunc_leading_zero32__593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__593__count)));
                            vlSelf->__Vfunc_leading_zero32__593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__593__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__599__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__599__part 
                            = vlSelf->__Vfunc_leading_zero32__599__value;
                        vlSelf->__Vfunc_leading_zero32__599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__599__count)));
                            vlSelf->__Vfunc_leading_zero32__599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__599__count)));
                            vlSelf->__Vfunc_leading_zero32__599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__599__count)));
                            vlSelf->__Vfunc_leading_zero32__599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__599__count)));
                            vlSelf->__Vfunc_leading_zero32__599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__599__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__605__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__605__part 
                            = vlSelf->__Vfunc_leading_zero32__605__value;
                        vlSelf->__Vfunc_leading_zero32__605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__605__count)));
                            vlSelf->__Vfunc_leading_zero32__605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__605__count)));
                            vlSelf->__Vfunc_leading_zero32__605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__605__count)));
                            vlSelf->__Vfunc_leading_zero32__605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__605__count)));
                            vlSelf->__Vfunc_leading_zero32__605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__605__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__611__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__611__part 
                            = vlSelf->__Vfunc_leading_zero32__611__value;
                        vlSelf->__Vfunc_leading_zero32__611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__611__count)));
                            vlSelf->__Vfunc_leading_zero32__611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__611__count)));
                            vlSelf->__Vfunc_leading_zero32__611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__611__count)));
                            vlSelf->__Vfunc_leading_zero32__611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__611__count)));
                            vlSelf->__Vfunc_leading_zero32__611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__611__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__617__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__617__part 
                            = vlSelf->__Vfunc_leading_zero32__617__value;
                        vlSelf->__Vfunc_leading_zero32__617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__617__count)));
                            vlSelf->__Vfunc_leading_zero32__617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__617__count)));
                            vlSelf->__Vfunc_leading_zero32__617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__617__count)));
                            vlSelf->__Vfunc_leading_zero32__617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__617__count)));
                            vlSelf->__Vfunc_leading_zero32__617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__617__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__623__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__623__part 
                            = vlSelf->__Vfunc_leading_zero32__623__value;
                        vlSelf->__Vfunc_leading_zero32__623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__623__count)));
                            vlSelf->__Vfunc_leading_zero32__623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__623__count)));
                            vlSelf->__Vfunc_leading_zero32__623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__623__count)));
                            vlSelf->__Vfunc_leading_zero32__623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__623__count)));
                            vlSelf->__Vfunc_leading_zero32__623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__623__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__629__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__629__part 
                            = vlSelf->__Vfunc_leading_zero32__629__value;
                        vlSelf->__Vfunc_leading_zero32__629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__629__count)));
                            vlSelf->__Vfunc_leading_zero32__629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__629__count)));
                            vlSelf->__Vfunc_leading_zero32__629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__629__count)));
                            vlSelf->__Vfunc_leading_zero32__629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__629__count)));
                            vlSelf->__Vfunc_leading_zero32__629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__629__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__635__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__635__part 
                            = vlSelf->__Vfunc_leading_zero32__635__value;
                        vlSelf->__Vfunc_leading_zero32__635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__635__count)));
                            vlSelf->__Vfunc_leading_zero32__635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__635__count)));
                            vlSelf->__Vfunc_leading_zero32__635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__635__count)));
                            vlSelf->__Vfunc_leading_zero32__635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__635__count)));
                            vlSelf->__Vfunc_leading_zero32__635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__635__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__641__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__641__part 
                            = vlSelf->__Vfunc_leading_zero32__641__value;
                        vlSelf->__Vfunc_leading_zero32__641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__641__count)));
                            vlSelf->__Vfunc_leading_zero32__641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__641__count)));
                            vlSelf->__Vfunc_leading_zero32__641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__641__count)));
                            vlSelf->__Vfunc_leading_zero32__641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__641__count)));
                            vlSelf->__Vfunc_leading_zero32__641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__641__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__647__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__647__part 
                            = vlSelf->__Vfunc_leading_zero32__647__value;
                        vlSelf->__Vfunc_leading_zero32__647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__647__count)));
                            vlSelf->__Vfunc_leading_zero32__647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__647__count)));
                            vlSelf->__Vfunc_leading_zero32__647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__647__count)));
                            vlSelf->__Vfunc_leading_zero32__647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__647__count)));
                            vlSelf->__Vfunc_leading_zero32__647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__647__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__653__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__653__part 
                            = vlSelf->__Vfunc_leading_zero32__653__value;
                        vlSelf->__Vfunc_leading_zero32__653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__653__count)));
                            vlSelf->__Vfunc_leading_zero32__653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__653__count)));
                            vlSelf->__Vfunc_leading_zero32__653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__653__count)));
                            vlSelf->__Vfunc_leading_zero32__653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__653__count)));
                            vlSelf->__Vfunc_leading_zero32__653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__653__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__659__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__659__part 
                            = vlSelf->__Vfunc_leading_zero32__659__value;
                        vlSelf->__Vfunc_leading_zero32__659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__659__count)));
                            vlSelf->__Vfunc_leading_zero32__659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__659__count)));
                            vlSelf->__Vfunc_leading_zero32__659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__659__count)));
                            vlSelf->__Vfunc_leading_zero32__659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__659__count)));
                            vlSelf->__Vfunc_leading_zero32__659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__659__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__665__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__665__part 
                            = vlSelf->__Vfunc_leading_zero32__665__value;
                        vlSelf->__Vfunc_leading_zero32__665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__665__count)));
                            vlSelf->__Vfunc_leading_zero32__665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__665__count)));
                            vlSelf->__Vfunc_leading_zero32__665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__665__count)));
                            vlSelf->__Vfunc_leading_zero32__665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__665__count)));
                            vlSelf->__Vfunc_leading_zero32__665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__665__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__671__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__671__part 
                            = vlSelf->__Vfunc_leading_zero32__671__value;
                        vlSelf->__Vfunc_leading_zero32__671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__671__count)));
                            vlSelf->__Vfunc_leading_zero32__671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__671__count)));
                            vlSelf->__Vfunc_leading_zero32__671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__671__count)));
                            vlSelf->__Vfunc_leading_zero32__671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__671__count)));
                            vlSelf->__Vfunc_leading_zero32__671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__671__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__677__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__677__part 
                            = vlSelf->__Vfunc_leading_zero32__677__value;
                        vlSelf->__Vfunc_leading_zero32__677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__677__count)));
                            vlSelf->__Vfunc_leading_zero32__677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__677__count)));
                            vlSelf->__Vfunc_leading_zero32__677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__677__count)));
                            vlSelf->__Vfunc_leading_zero32__677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__677__count)));
                            vlSelf->__Vfunc_leading_zero32__677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__677__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__683__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__683__part 
                            = vlSelf->__Vfunc_leading_zero32__683__value;
                        vlSelf->__Vfunc_leading_zero32__683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__683__count)));
                            vlSelf->__Vfunc_leading_zero32__683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__683__count)));
                            vlSelf->__Vfunc_leading_zero32__683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__683__count)));
                            vlSelf->__Vfunc_leading_zero32__683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__683__count)));
                            vlSelf->__Vfunc_leading_zero32__683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__683__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__689__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__689__part 
                            = vlSelf->__Vfunc_leading_zero32__689__value;
                        vlSelf->__Vfunc_leading_zero32__689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__689__count)));
                            vlSelf->__Vfunc_leading_zero32__689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__689__count)));
                            vlSelf->__Vfunc_leading_zero32__689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__689__count)));
                            vlSelf->__Vfunc_leading_zero32__689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__689__count)));
                            vlSelf->__Vfunc_leading_zero32__689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__689__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__695__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__695__part 
                            = vlSelf->__Vfunc_leading_zero32__695__value;
                        vlSelf->__Vfunc_leading_zero32__695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__695__count)));
                            vlSelf->__Vfunc_leading_zero32__695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__695__count)));
                            vlSelf->__Vfunc_leading_zero32__695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__695__count)));
                            vlSelf->__Vfunc_leading_zero32__695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__695__count)));
                            vlSelf->__Vfunc_leading_zero32__695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__695__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__701__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__701__part 
                            = vlSelf->__Vfunc_leading_zero32__701__value;
                        vlSelf->__Vfunc_leading_zero32__701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__701__count)));
                            vlSelf->__Vfunc_leading_zero32__701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__701__count)));
                            vlSelf->__Vfunc_leading_zero32__701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__701__count)));
                            vlSelf->__Vfunc_leading_zero32__701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__701__count)));
                            vlSelf->__Vfunc_leading_zero32__701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__701__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__707__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__707__part 
                            = vlSelf->__Vfunc_leading_zero32__707__value;
                        vlSelf->__Vfunc_leading_zero32__707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__707__count)));
                            vlSelf->__Vfunc_leading_zero32__707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__707__count)));
                            vlSelf->__Vfunc_leading_zero32__707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__707__count)));
                            vlSelf->__Vfunc_leading_zero32__707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__707__count)));
                            vlSelf->__Vfunc_leading_zero32__707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__707__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__713__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__713__part 
                            = vlSelf->__Vfunc_leading_zero32__713__value;
                        vlSelf->__Vfunc_leading_zero32__713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__713__count)));
                            vlSelf->__Vfunc_leading_zero32__713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__713__count)));
                            vlSelf->__Vfunc_leading_zero32__713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__713__count)));
                            vlSelf->__Vfunc_leading_zero32__713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__713__count)));
                            vlSelf->__Vfunc_leading_zero32__713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__713__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__719__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__719__part 
                            = vlSelf->__Vfunc_leading_zero32__719__value;
                        vlSelf->__Vfunc_leading_zero32__719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__719__count)));
                            vlSelf->__Vfunc_leading_zero32__719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__719__count)));
                            vlSelf->__Vfunc_leading_zero32__719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__719__count)));
                            vlSelf->__Vfunc_leading_zero32__719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__719__count)));
                            vlSelf->__Vfunc_leading_zero32__719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__719__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__725__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__725__part 
                            = vlSelf->__Vfunc_leading_zero32__725__value;
                        vlSelf->__Vfunc_leading_zero32__725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__725__count)));
                            vlSelf->__Vfunc_leading_zero32__725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__725__count)));
                            vlSelf->__Vfunc_leading_zero32__725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__725__count)));
                            vlSelf->__Vfunc_leading_zero32__725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__725__count)));
                            vlSelf->__Vfunc_leading_zero32__725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__725__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__731__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__731__part 
                            = vlSelf->__Vfunc_leading_zero32__731__value;
                        vlSelf->__Vfunc_leading_zero32__731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__731__count)));
                            vlSelf->__Vfunc_leading_zero32__731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__731__count)));
                            vlSelf->__Vfunc_leading_zero32__731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__731__count)));
                            vlSelf->__Vfunc_leading_zero32__731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__731__count)));
                            vlSelf->__Vfunc_leading_zero32__731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__731__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__737__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__737__part 
                            = vlSelf->__Vfunc_leading_zero32__737__value;
                        vlSelf->__Vfunc_leading_zero32__737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__737__count)));
                            vlSelf->__Vfunc_leading_zero32__737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__737__count)));
                            vlSelf->__Vfunc_leading_zero32__737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__737__count)));
                            vlSelf->__Vfunc_leading_zero32__737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__737__count)));
                            vlSelf->__Vfunc_leading_zero32__737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__737__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__743__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__743__part 
                            = vlSelf->__Vfunc_leading_zero32__743__value;
                        vlSelf->__Vfunc_leading_zero32__743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__743__count)));
                            vlSelf->__Vfunc_leading_zero32__743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__743__count)));
                            vlSelf->__Vfunc_leading_zero32__743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__743__count)));
                            vlSelf->__Vfunc_leading_zero32__743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__743__count)));
                            vlSelf->__Vfunc_leading_zero32__743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__743__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__749__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__749__part 
                            = vlSelf->__Vfunc_leading_zero32__749__value;
                        vlSelf->__Vfunc_leading_zero32__749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__749__count)));
                            vlSelf->__Vfunc_leading_zero32__749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__749__count)));
                            vlSelf->__Vfunc_leading_zero32__749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__749__count)));
                            vlSelf->__Vfunc_leading_zero32__749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__749__count)));
                            vlSelf->__Vfunc_leading_zero32__749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__749__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__755__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__755__part 
                            = vlSelf->__Vfunc_leading_zero32__755__value;
                        vlSelf->__Vfunc_leading_zero32__755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__755__count)));
                            vlSelf->__Vfunc_leading_zero32__755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__755__count)));
                            vlSelf->__Vfunc_leading_zero32__755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__755__count)));
                            vlSelf->__Vfunc_leading_zero32__755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__755__count)));
                            vlSelf->__Vfunc_leading_zero32__755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__755__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__761__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__761__part 
                            = vlSelf->__Vfunc_leading_zero32__761__value;
                        vlSelf->__Vfunc_leading_zero32__761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__761__count)));
                            vlSelf->__Vfunc_leading_zero32__761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__761__count)));
                            vlSelf->__Vfunc_leading_zero32__761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__761__count)));
                            vlSelf->__Vfunc_leading_zero32__761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__761__count)));
                            vlSelf->__Vfunc_leading_zero32__761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__761__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__767__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__767__part 
                            = vlSelf->__Vfunc_leading_zero32__767__value;
                        vlSelf->__Vfunc_leading_zero32__767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__767__count)));
                            vlSelf->__Vfunc_leading_zero32__767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__767__count)));
                            vlSelf->__Vfunc_leading_zero32__767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__767__count)));
                            vlSelf->__Vfunc_leading_zero32__767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__767__count)));
                            vlSelf->__Vfunc_leading_zero32__767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__767__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__773__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__773__part 
                            = vlSelf->__Vfunc_leading_zero32__773__value;
                        vlSelf->__Vfunc_leading_zero32__773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__773__count)));
                            vlSelf->__Vfunc_leading_zero32__773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__773__count)));
                            vlSelf->__Vfunc_leading_zero32__773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__773__count)));
                            vlSelf->__Vfunc_leading_zero32__773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__773__count)));
                            vlSelf->__Vfunc_leading_zero32__773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__773__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__779__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__779__part 
                            = vlSelf->__Vfunc_leading_zero32__779__value;
                        vlSelf->__Vfunc_leading_zero32__779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__779__count)));
                            vlSelf->__Vfunc_leading_zero32__779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__779__count)));
                            vlSelf->__Vfunc_leading_zero32__779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__779__count)));
                            vlSelf->__Vfunc_leading_zero32__779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__779__count)));
                            vlSelf->__Vfunc_leading_zero32__779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__779__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__785__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__785__part 
                            = vlSelf->__Vfunc_leading_zero32__785__value;
                        vlSelf->__Vfunc_leading_zero32__785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__785__count)));
                            vlSelf->__Vfunc_leading_zero32__785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__785__count)));
                            vlSelf->__Vfunc_leading_zero32__785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__785__count)));
                            vlSelf->__Vfunc_leading_zero32__785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__785__count)));
                            vlSelf->__Vfunc_leading_zero32__785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__785__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__791__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__791__part 
                            = vlSelf->__Vfunc_leading_zero32__791__value;
                        vlSelf->__Vfunc_leading_zero32__791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__791__count)));
                            vlSelf->__Vfunc_leading_zero32__791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__791__count)));
                            vlSelf->__Vfunc_leading_zero32__791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__791__count)));
                            vlSelf->__Vfunc_leading_zero32__791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__791__count)));
                            vlSelf->__Vfunc_leading_zero32__791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__791__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__797__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__797__part 
                            = vlSelf->__Vfunc_leading_zero32__797__value;
                        vlSelf->__Vfunc_leading_zero32__797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__797__count)));
                            vlSelf->__Vfunc_leading_zero32__797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__797__count)));
                            vlSelf->__Vfunc_leading_zero32__797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__797__count)));
                            vlSelf->__Vfunc_leading_zero32__797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__797__count)));
                            vlSelf->__Vfunc_leading_zero32__797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__797__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__803__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__803__part 
                            = vlSelf->__Vfunc_leading_zero32__803__value;
                        vlSelf->__Vfunc_leading_zero32__803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__803__count)));
                            vlSelf->__Vfunc_leading_zero32__803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__803__count)));
                            vlSelf->__Vfunc_leading_zero32__803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__803__count)));
                            vlSelf->__Vfunc_leading_zero32__803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__803__count)));
                            vlSelf->__Vfunc_leading_zero32__803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__803__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__809__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__809__part 
                            = vlSelf->__Vfunc_leading_zero32__809__value;
                        vlSelf->__Vfunc_leading_zero32__809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__809__count)));
                            vlSelf->__Vfunc_leading_zero32__809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__809__count)));
                            vlSelf->__Vfunc_leading_zero32__809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__809__count)));
                            vlSelf->__Vfunc_leading_zero32__809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__809__count)));
                            vlSelf->__Vfunc_leading_zero32__809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__809__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__815__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__815__part 
                            = vlSelf->__Vfunc_leading_zero32__815__value;
                        vlSelf->__Vfunc_leading_zero32__815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__815__count)));
                            vlSelf->__Vfunc_leading_zero32__815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__815__count)));
                            vlSelf->__Vfunc_leading_zero32__815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__815__count)));
                            vlSelf->__Vfunc_leading_zero32__815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__815__count)));
                            vlSelf->__Vfunc_leading_zero32__815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__815__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__821__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__821__part 
                            = vlSelf->__Vfunc_leading_zero32__821__value;
                        vlSelf->__Vfunc_leading_zero32__821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__821__count)));
                            vlSelf->__Vfunc_leading_zero32__821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__821__count)));
                            vlSelf->__Vfunc_leading_zero32__821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__821__count)));
                            vlSelf->__Vfunc_leading_zero32__821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__821__count)));
                            vlSelf->__Vfunc_leading_zero32__821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__821__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__827__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__827__part 
                            = vlSelf->__Vfunc_leading_zero32__827__value;
                        vlSelf->__Vfunc_leading_zero32__827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__827__count)));
                            vlSelf->__Vfunc_leading_zero32__827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__827__count)));
                            vlSelf->__Vfunc_leading_zero32__827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__827__count)));
                            vlSelf->__Vfunc_leading_zero32__827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__827__count)));
                            vlSelf->__Vfunc_leading_zero32__827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__827__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__833__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__833__part 
                            = vlSelf->__Vfunc_leading_zero32__833__value;
                        vlSelf->__Vfunc_leading_zero32__833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__833__count)));
                            vlSelf->__Vfunc_leading_zero32__833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__833__count)));
                            vlSelf->__Vfunc_leading_zero32__833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__833__count)));
                            vlSelf->__Vfunc_leading_zero32__833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__833__count)));
                            vlSelf->__Vfunc_leading_zero32__833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__833__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__839__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__839__part 
                            = vlSelf->__Vfunc_leading_zero32__839__value;
                        vlSelf->__Vfunc_leading_zero32__839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__839__count)));
                            vlSelf->__Vfunc_leading_zero32__839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__839__count)));
                            vlSelf->__Vfunc_leading_zero32__839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__839__count)));
                            vlSelf->__Vfunc_leading_zero32__839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__839__count)));
                            vlSelf->__Vfunc_leading_zero32__839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__839__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__845__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__845__part 
                            = vlSelf->__Vfunc_leading_zero32__845__value;
                        vlSelf->__Vfunc_leading_zero32__845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__845__count)));
                            vlSelf->__Vfunc_leading_zero32__845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__845__count)));
                            vlSelf->__Vfunc_leading_zero32__845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__845__count)));
                            vlSelf->__Vfunc_leading_zero32__845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__845__count)));
                            vlSelf->__Vfunc_leading_zero32__845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__845__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__851__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__851__part 
                            = vlSelf->__Vfunc_leading_zero32__851__value;
                        vlSelf->__Vfunc_leading_zero32__851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__851__count)));
                            vlSelf->__Vfunc_leading_zero32__851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__851__count)));
                            vlSelf->__Vfunc_leading_zero32__851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__851__count)));
                            vlSelf->__Vfunc_leading_zero32__851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__851__count)));
                            vlSelf->__Vfunc_leading_zero32__851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__851__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__857__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__857__part 
                            = vlSelf->__Vfunc_leading_zero32__857__value;
                        vlSelf->__Vfunc_leading_zero32__857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__857__count)));
                            vlSelf->__Vfunc_leading_zero32__857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__857__count)));
                            vlSelf->__Vfunc_leading_zero32__857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__857__count)));
                            vlSelf->__Vfunc_leading_zero32__857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__857__count)));
                            vlSelf->__Vfunc_leading_zero32__857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__857__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__863__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__863__part 
                            = vlSelf->__Vfunc_leading_zero32__863__value;
                        vlSelf->__Vfunc_leading_zero32__863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__863__count)));
                            vlSelf->__Vfunc_leading_zero32__863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__863__count)));
                            vlSelf->__Vfunc_leading_zero32__863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__863__count)));
                            vlSelf->__Vfunc_leading_zero32__863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__863__count)));
                            vlSelf->__Vfunc_leading_zero32__863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__863__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__869__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__869__part 
                            = vlSelf->__Vfunc_leading_zero32__869__value;
                        vlSelf->__Vfunc_leading_zero32__869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__869__count)));
                            vlSelf->__Vfunc_leading_zero32__869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__869__count)));
                            vlSelf->__Vfunc_leading_zero32__869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__869__count)));
                            vlSelf->__Vfunc_leading_zero32__869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__869__count)));
                            vlSelf->__Vfunc_leading_zero32__869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__869__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__875__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__875__part 
                            = vlSelf->__Vfunc_leading_zero32__875__value;
                        vlSelf->__Vfunc_leading_zero32__875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__875__count)));
                            vlSelf->__Vfunc_leading_zero32__875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__875__count)));
                            vlSelf->__Vfunc_leading_zero32__875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__875__count)));
                            vlSelf->__Vfunc_leading_zero32__875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__875__count)));
                            vlSelf->__Vfunc_leading_zero32__875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__875__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__881__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__881__part 
                            = vlSelf->__Vfunc_leading_zero32__881__value;
                        vlSelf->__Vfunc_leading_zero32__881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__881__count)));
                            vlSelf->__Vfunc_leading_zero32__881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__881__count)));
                            vlSelf->__Vfunc_leading_zero32__881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__881__count)));
                            vlSelf->__Vfunc_leading_zero32__881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__881__count)));
                            vlSelf->__Vfunc_leading_zero32__881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__881__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__887__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__887__part 
                            = vlSelf->__Vfunc_leading_zero32__887__value;
                        vlSelf->__Vfunc_leading_zero32__887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__887__count)));
                            vlSelf->__Vfunc_leading_zero32__887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__887__count)));
                            vlSelf->__Vfunc_leading_zero32__887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__887__count)));
                            vlSelf->__Vfunc_leading_zero32__887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__887__count)));
                            vlSelf->__Vfunc_leading_zero32__887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__887__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__893__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__893__part 
                            = vlSelf->__Vfunc_leading_zero32__893__value;
                        vlSelf->__Vfunc_leading_zero32__893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__893__count)));
                            vlSelf->__Vfunc_leading_zero32__893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__893__count)));
                            vlSelf->__Vfunc_leading_zero32__893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__893__count)));
                            vlSelf->__Vfunc_leading_zero32__893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__893__count)));
                            vlSelf->__Vfunc_leading_zero32__893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__893__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__899__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__899__part 
                            = vlSelf->__Vfunc_leading_zero32__899__value;
                        vlSelf->__Vfunc_leading_zero32__899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__899__count)));
                            vlSelf->__Vfunc_leading_zero32__899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__899__count)));
                            vlSelf->__Vfunc_leading_zero32__899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__899__count)));
                            vlSelf->__Vfunc_leading_zero32__899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__899__count)));
                            vlSelf->__Vfunc_leading_zero32__899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__899__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1025__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1025__part 
                            = vlSelf->__Vfunc_leading_zero32__1025__value;
                        vlSelf->__Vfunc_leading_zero32__1025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1025__count)));
                            vlSelf->__Vfunc_leading_zero32__1025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1025__count)));
                            vlSelf->__Vfunc_leading_zero32__1025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1025__count)));
                            vlSelf->__Vfunc_leading_zero32__1025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1025__count)));
                            vlSelf->__Vfunc_leading_zero32__1025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1025__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1031__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1031__part 
                            = vlSelf->__Vfunc_leading_zero32__1031__value;
                        vlSelf->__Vfunc_leading_zero32__1031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1031__count)));
                            vlSelf->__Vfunc_leading_zero32__1031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1031__count)));
                            vlSelf->__Vfunc_leading_zero32__1031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1031__count)));
                            vlSelf->__Vfunc_leading_zero32__1031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1031__count)));
                            vlSelf->__Vfunc_leading_zero32__1031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1031__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1061__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1061__part 
                            = vlSelf->__Vfunc_leading_zero32__1061__value;
                        vlSelf->__Vfunc_leading_zero32__1061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1061__count)));
                            vlSelf->__Vfunc_leading_zero32__1061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1061__count)));
                            vlSelf->__Vfunc_leading_zero32__1061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1061__count)));
                            vlSelf->__Vfunc_leading_zero32__1061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1061__count)));
                            vlSelf->__Vfunc_leading_zero32__1061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1061__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1067__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1067__part 
                            = vlSelf->__Vfunc_leading_zero32__1067__value;
                        vlSelf->__Vfunc_leading_zero32__1067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1067__count)));
                            vlSelf->__Vfunc_leading_zero32__1067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1067__count)));
                            vlSelf->__Vfunc_leading_zero32__1067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1067__count)));
                            vlSelf->__Vfunc_leading_zero32__1067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1067__count)));
                            vlSelf->__Vfunc_leading_zero32__1067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1067__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1097__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1097__part 
                            = vlSelf->__Vfunc_leading_zero32__1097__value;
                        vlSelf->__Vfunc_leading_zero32__1097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1097__count)));
                            vlSelf->__Vfunc_leading_zero32__1097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1097__count)));
                            vlSelf->__Vfunc_leading_zero32__1097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1097__count)));
                            vlSelf->__Vfunc_leading_zero32__1097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1097__count)));
                            vlSelf->__Vfunc_leading_zero32__1097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1097__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1103__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1103__part 
                            = vlSelf->__Vfunc_leading_zero32__1103__value;
                        vlSelf->__Vfunc_leading_zero32__1103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1103__count)));
                            vlSelf->__Vfunc_leading_zero32__1103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1103__count)));
                            vlSelf->__Vfunc_leading_zero32__1103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1103__count)));
                            vlSelf->__Vfunc_leading_zero32__1103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1103__count)));
                            vlSelf->__Vfunc_leading_zero32__1103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1103__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1133__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1133__part 
                            = vlSelf->__Vfunc_leading_zero32__1133__value;
                        vlSelf->__Vfunc_leading_zero32__1133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1133__count)));
                            vlSelf->__Vfunc_leading_zero32__1133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1133__count)));
                            vlSelf->__Vfunc_leading_zero32__1133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1133__count)));
                            vlSelf->__Vfunc_leading_zero32__1133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1133__count)));
                            vlSelf->__Vfunc_leading_zero32__1133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1133__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1139__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1139__part 
                            = vlSelf->__Vfunc_leading_zero32__1139__value;
                        vlSelf->__Vfunc_leading_zero32__1139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1139__count)));
                            vlSelf->__Vfunc_leading_zero32__1139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1139__count)));
                            vlSelf->__Vfunc_leading_zero32__1139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1139__count)));
                            vlSelf->__Vfunc_leading_zero32__1139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1139__count)));
                            vlSelf->__Vfunc_leading_zero32__1139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1139__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__unit_vector[3U]));
    VL_ASSIGNBIT_II(0U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    __Vfunc_bf16_invalid__55__value 
                        = (0xffffU & (IData)(vlSelf->leaf_tb__DOT__in_cos));
                    __Vfunc_bf16_invalid__55__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__55__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__55__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__56__value 
                        = (0xffffU & (IData)(vlSelf->leaf_tb__DOT__in_sin));
                    __Vfunc_bf16_invalid__56__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__56__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__56__Vfuncout))));
    VL_ASSIGNBIT_II(1U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    __Vfunc_bf16_invalid__61__value 
                        = (0xffffU & (IData)((vlSelf->leaf_tb__DOT__in_cos 
                                              >> 0x10U)));
                    __Vfunc_bf16_invalid__61__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__61__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__61__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__62__value 
                        = (0xffffU & (IData)((vlSelf->leaf_tb__DOT__in_sin 
                                              >> 0x10U)));
                    __Vfunc_bf16_invalid__62__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__62__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__62__Vfuncout))));
    VL_ASSIGNBIT_II(2U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    __Vfunc_bf16_invalid__67__value 
                        = (0xffffU & (IData)((vlSelf->leaf_tb__DOT__in_cos 
                                              >> 0x20U)));
                    __Vfunc_bf16_invalid__67__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__67__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__67__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__68__value 
                        = (0xffffU & (IData)((vlSelf->leaf_tb__DOT__in_sin 
                                              >> 0x20U)));
                    __Vfunc_bf16_invalid__68__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__68__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__68__Vfuncout))));
    VL_ASSIGNBIT_II(3U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_coefficient, 
                    (([&]() {
                    __Vfunc_bf16_invalid__73__value 
                        = (0xffffU & (IData)((vlSelf->leaf_tb__DOT__in_cos 
                                              >> 0x30U)));
                    __Vfunc_bf16_invalid__73__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__73__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__73__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__74__value 
                        = (0xffffU & (IData)((vlSelf->leaf_tb__DOT__in_sin 
                                              >> 0x30U)));
                    __Vfunc_bf16_invalid__74__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__74__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__74__Vfuncout))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
        = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__remainder 
            << 2U) | (3U & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__square_root__DOT__pairs 
                                    >> 0x34U))));
    VL_ASSIGNBIT_II(0U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__7__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_data[0U]);
                    __Vfunc_bf16_invalid__7__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__7__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__7__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__8__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_gamma[0U]);
                    __Vfunc_bf16_invalid__8__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__8__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__8__Vfuncout))));
    VL_ASSIGNBIT_II(1U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__9__value 
                        = (vlSelf->leaf_tb__DOT__in_data[0U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__9__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__9__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__9__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__10__value 
                        = (vlSelf->leaf_tb__DOT__in_gamma[0U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__10__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__10__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__10__Vfuncout))));
    VL_ASSIGNBIT_II(2U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__11__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_data[1U]);
                    __Vfunc_bf16_invalid__11__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__11__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__11__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__12__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_gamma[1U]);
                    __Vfunc_bf16_invalid__12__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__12__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__12__Vfuncout))));
    VL_ASSIGNBIT_II(3U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__13__value 
                        = (vlSelf->leaf_tb__DOT__in_data[1U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__13__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__13__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__13__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__14__value 
                        = (vlSelf->leaf_tb__DOT__in_gamma[1U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__14__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__14__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__14__Vfuncout))));
    VL_ASSIGNBIT_II(4U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__15__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_data[2U]);
                    __Vfunc_bf16_invalid__15__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__15__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__15__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__16__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_gamma[2U]);
                    __Vfunc_bf16_invalid__16__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__16__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__16__Vfuncout))));
    VL_ASSIGNBIT_II(5U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__17__value 
                        = (vlSelf->leaf_tb__DOT__in_data[2U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__17__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__17__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__17__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__18__value 
                        = (vlSelf->leaf_tb__DOT__in_gamma[2U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__18__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__18__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__18__Vfuncout))));
    VL_ASSIGNBIT_II(6U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__19__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_data[3U]);
                    __Vfunc_bf16_invalid__19__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__19__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__19__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__20__value 
                        = (0xffffU & vlSelf->leaf_tb__DOT__in_gamma[3U]);
                    __Vfunc_bf16_invalid__20__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__20__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__20__Vfuncout))));
    VL_ASSIGNBIT_II(7U, vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__invalid_element, 
                    (([&]() {
                    __Vfunc_bf16_invalid__21__value 
                        = (vlSelf->leaf_tb__DOT__in_data[3U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__21__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__21__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__21__Vfuncout)) 
                     | ([&]() {
                    __Vfunc_bf16_invalid__22__value 
                        = (vlSelf->leaf_tb__DOT__in_gamma[3U] 
                           >> 0x10U);
                    __Vfunc_bf16_invalid__22__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(__Vfunc_bf16_invalid__22__value) 
                                              >> 7U)));
                }(), (IData)(__Vfunc_bf16_invalid__22__Vfuncout))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 7U)))) << 0x17U) 
           | (0x7f0000U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine) 
                           << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                    >> 0x10U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 0x27U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                    >> 0x20U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                     >> 0x37U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine 
                                    >> 0x30U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 7U)))) << 0x17U) 
           | (0x7f0000U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine) 
                           << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                    >> 0x10U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 0x27U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                    >> 0x20U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b 
        = (((0U != (0xffU & (IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                     >> 0x37U)))) << 0x17U) 
           | (0x7f0000U & ((IData)((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine 
                                    >> 0x30U)) << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U]));
    __Vfunc_round_pack32__80__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__significand4;
    __Vfunc_round_pack32__80__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__exponent4;
    __Vfunc_round_pack32__80__negative = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__negative4;
    __Vfunc_round_pack32__80__adjusted = __Vfunc_round_pack32__80__exponent;
    __Vfunc_round_pack32__80__shifted = __Vfunc_round_pack32__80__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__80__exponent))) {
        vlSelf->__Vfunc_shift_jam27__81__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__80__exponent)));
        vlSelf->__Vfunc_shift_jam27__81__value = __Vfunc_round_pack32__80__significand;
        __Vfunc_round_pack32__80__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__81__distance))) {
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__81__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__81__distance))) {
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__81__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__81__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__81__value, (IData)(vlSelf->__Vfunc_shift_jam27__81__distance)));
            vlSelf->__Vfunc_shift_jam27__81__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__81__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__81__distance)))));
            vlSelf->__Vfunc_shift_jam27__81__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__81__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__81__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__81__discarded))));
        }
        __Vfunc_round_pack32__80__shifted = vlSelf->__Vfunc_shift_jam27__81__Vfuncout;
    }
    __Vfunc_round_pack32__80__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__80__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__80__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__80__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__80__rounded)) {
        __Vfunc_round_pack32__80__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__80__rounded, 1U));
        __Vfunc_round_pack32__80__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__80__adjusted)));
    }
    __Vfunc_round_pack32__80__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__80__rounded)) {
        __Vfunc_round_pack32__80__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__80__adjusted)));
    }
    __Vfunc_round_pack32__80__Vfuncout = (((0U == __Vfunc_round_pack32__80__significand) 
                                           | (0U == __Vfunc_round_pack32__80__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__80__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__80__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__80__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__80__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__80__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__packed5 
        = __Vfunc_round_pack32__80__Vfuncout;
    __Vfunc_round_pack32__97__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__97__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__97__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__97__adjusted = __Vfunc_round_pack32__97__exponent;
    __Vfunc_round_pack32__97__shifted = __Vfunc_round_pack32__97__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__97__exponent))) {
        vlSelf->__Vfunc_shift_jam27__98__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__97__exponent)));
        vlSelf->__Vfunc_shift_jam27__98__value = __Vfunc_round_pack32__97__significand;
        __Vfunc_round_pack32__97__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__98__distance))) {
            vlSelf->__Vfunc_shift_jam27__98__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__98__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__98__distance))) {
            vlSelf->__Vfunc_shift_jam27__98__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__98__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__98__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__98__value, (IData)(vlSelf->__Vfunc_shift_jam27__98__distance)));
            vlSelf->__Vfunc_shift_jam27__98__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__98__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__98__distance)))));
            vlSelf->__Vfunc_shift_jam27__98__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__98__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__98__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__98__discarded))));
        }
        __Vfunc_round_pack32__97__shifted = vlSelf->__Vfunc_shift_jam27__98__Vfuncout;
    }
    __Vfunc_round_pack32__97__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__97__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__97__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__97__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__97__rounded)) {
        __Vfunc_round_pack32__97__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__97__rounded, 1U));
        __Vfunc_round_pack32__97__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__97__adjusted)));
    }
    __Vfunc_round_pack32__97__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__97__rounded)) {
        __Vfunc_round_pack32__97__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__97__adjusted)));
    }
    __Vfunc_round_pack32__97__Vfuncout = (((0U == __Vfunc_round_pack32__97__significand) 
                                           | (0U == __Vfunc_round_pack32__97__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__97__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__97__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__97__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__97__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__97__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__97__Vfuncout;
    __Vfunc_round_pack32__103__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__103__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__103__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__103__adjusted = __Vfunc_round_pack32__103__exponent;
    __Vfunc_round_pack32__103__shifted = __Vfunc_round_pack32__103__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__103__exponent))) {
        vlSelf->__Vfunc_shift_jam27__104__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__103__exponent)));
        vlSelf->__Vfunc_shift_jam27__104__value = __Vfunc_round_pack32__103__significand;
        __Vfunc_round_pack32__103__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__104__distance))) {
            vlSelf->__Vfunc_shift_jam27__104__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__104__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__104__distance))) {
            vlSelf->__Vfunc_shift_jam27__104__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__104__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__104__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__104__value, (IData)(vlSelf->__Vfunc_shift_jam27__104__distance)));
            vlSelf->__Vfunc_shift_jam27__104__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__104__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__104__distance)))));
            vlSelf->__Vfunc_shift_jam27__104__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__104__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__104__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__104__discarded))));
        }
        __Vfunc_round_pack32__103__shifted = vlSelf->__Vfunc_shift_jam27__104__Vfuncout;
    }
    __Vfunc_round_pack32__103__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__103__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__103__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__103__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__103__rounded)) {
        __Vfunc_round_pack32__103__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__103__rounded, 1U));
        __Vfunc_round_pack32__103__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__103__adjusted)));
    }
    __Vfunc_round_pack32__103__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__103__rounded)) {
        __Vfunc_round_pack32__103__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__103__adjusted)));
    }
    __Vfunc_round_pack32__103__Vfuncout = (((0U == __Vfunc_round_pack32__103__significand) 
                                            | (0U == __Vfunc_round_pack32__103__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__103__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__103__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__103__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__103__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__103__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__103__Vfuncout;
    __Vfunc_round_pack32__109__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__109__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__109__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__109__adjusted = __Vfunc_round_pack32__109__exponent;
    __Vfunc_round_pack32__109__shifted = __Vfunc_round_pack32__109__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__109__exponent))) {
        vlSelf->__Vfunc_shift_jam27__110__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__109__exponent)));
        vlSelf->__Vfunc_shift_jam27__110__value = __Vfunc_round_pack32__109__significand;
        __Vfunc_round_pack32__109__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__110__distance))) {
            vlSelf->__Vfunc_shift_jam27__110__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__110__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__110__distance))) {
            vlSelf->__Vfunc_shift_jam27__110__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__110__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__110__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__110__value, (IData)(vlSelf->__Vfunc_shift_jam27__110__distance)));
            vlSelf->__Vfunc_shift_jam27__110__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__110__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__110__distance)))));
            vlSelf->__Vfunc_shift_jam27__110__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__110__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__110__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__110__discarded))));
        }
        __Vfunc_round_pack32__109__shifted = vlSelf->__Vfunc_shift_jam27__110__Vfuncout;
    }
    __Vfunc_round_pack32__109__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__109__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__109__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__109__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__109__rounded)) {
        __Vfunc_round_pack32__109__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__109__rounded, 1U));
        __Vfunc_round_pack32__109__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__109__adjusted)));
    }
    __Vfunc_round_pack32__109__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__109__rounded)) {
        __Vfunc_round_pack32__109__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__109__adjusted)));
    }
    __Vfunc_round_pack32__109__Vfuncout = (((0U == __Vfunc_round_pack32__109__significand) 
                                            | (0U == __Vfunc_round_pack32__109__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__109__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__109__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__109__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__109__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__109__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__109__Vfuncout;
    __Vfunc_round_pack32__115__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__115__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__115__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__115__adjusted = __Vfunc_round_pack32__115__exponent;
    __Vfunc_round_pack32__115__shifted = __Vfunc_round_pack32__115__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__115__exponent))) {
        vlSelf->__Vfunc_shift_jam27__116__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__115__exponent)));
        vlSelf->__Vfunc_shift_jam27__116__value = __Vfunc_round_pack32__115__significand;
        __Vfunc_round_pack32__115__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__116__distance))) {
            vlSelf->__Vfunc_shift_jam27__116__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__116__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__116__distance))) {
            vlSelf->__Vfunc_shift_jam27__116__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__116__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__116__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__116__value, (IData)(vlSelf->__Vfunc_shift_jam27__116__distance)));
            vlSelf->__Vfunc_shift_jam27__116__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__116__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__116__distance)))));
            vlSelf->__Vfunc_shift_jam27__116__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__116__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__116__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__116__discarded))));
        }
        __Vfunc_round_pack32__115__shifted = vlSelf->__Vfunc_shift_jam27__116__Vfuncout;
    }
    __Vfunc_round_pack32__115__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__115__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__115__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__115__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__115__rounded)) {
        __Vfunc_round_pack32__115__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__115__rounded, 1U));
        __Vfunc_round_pack32__115__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__115__adjusted)));
    }
    __Vfunc_round_pack32__115__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__115__rounded)) {
        __Vfunc_round_pack32__115__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__115__adjusted)));
    }
    __Vfunc_round_pack32__115__Vfuncout = (((0U == __Vfunc_round_pack32__115__significand) 
                                            | (0U == __Vfunc_round_pack32__115__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__115__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__115__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__115__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__115__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__115__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__115__Vfuncout;
    __Vfunc_round_pack32__121__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__121__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__121__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__121__adjusted = __Vfunc_round_pack32__121__exponent;
    __Vfunc_round_pack32__121__shifted = __Vfunc_round_pack32__121__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__121__exponent))) {
        vlSelf->__Vfunc_shift_jam27__122__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__121__exponent)));
        vlSelf->__Vfunc_shift_jam27__122__value = __Vfunc_round_pack32__121__significand;
        __Vfunc_round_pack32__121__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__122__distance))) {
            vlSelf->__Vfunc_shift_jam27__122__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__122__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__122__distance))) {
            vlSelf->__Vfunc_shift_jam27__122__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__122__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__122__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__122__value, (IData)(vlSelf->__Vfunc_shift_jam27__122__distance)));
            vlSelf->__Vfunc_shift_jam27__122__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__122__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__122__distance)))));
            vlSelf->__Vfunc_shift_jam27__122__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__122__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__122__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__122__discarded))));
        }
        __Vfunc_round_pack32__121__shifted = vlSelf->__Vfunc_shift_jam27__122__Vfuncout;
    }
    __Vfunc_round_pack32__121__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__121__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__121__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__121__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__121__rounded)) {
        __Vfunc_round_pack32__121__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__121__rounded, 1U));
        __Vfunc_round_pack32__121__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__121__adjusted)));
    }
    __Vfunc_round_pack32__121__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__121__rounded)) {
        __Vfunc_round_pack32__121__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__121__adjusted)));
    }
    __Vfunc_round_pack32__121__Vfuncout = (((0U == __Vfunc_round_pack32__121__significand) 
                                            | (0U == __Vfunc_round_pack32__121__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__121__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__121__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__121__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__121__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__121__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__121__Vfuncout;
    __Vfunc_round_pack32__127__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__127__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__127__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__127__adjusted = __Vfunc_round_pack32__127__exponent;
    __Vfunc_round_pack32__127__shifted = __Vfunc_round_pack32__127__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__127__exponent))) {
        vlSelf->__Vfunc_shift_jam27__128__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__127__exponent)));
        vlSelf->__Vfunc_shift_jam27__128__value = __Vfunc_round_pack32__127__significand;
        __Vfunc_round_pack32__127__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__128__distance))) {
            vlSelf->__Vfunc_shift_jam27__128__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__128__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__128__distance))) {
            vlSelf->__Vfunc_shift_jam27__128__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__128__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__128__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__128__value, (IData)(vlSelf->__Vfunc_shift_jam27__128__distance)));
            vlSelf->__Vfunc_shift_jam27__128__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__128__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__128__distance)))));
            vlSelf->__Vfunc_shift_jam27__128__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__128__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__128__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__128__discarded))));
        }
        __Vfunc_round_pack32__127__shifted = vlSelf->__Vfunc_shift_jam27__128__Vfuncout;
    }
    __Vfunc_round_pack32__127__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__127__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__127__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__127__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__127__rounded)) {
        __Vfunc_round_pack32__127__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__127__rounded, 1U));
        __Vfunc_round_pack32__127__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__127__adjusted)));
    }
    __Vfunc_round_pack32__127__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__127__rounded)) {
        __Vfunc_round_pack32__127__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__127__adjusted)));
    }
    __Vfunc_round_pack32__127__Vfuncout = (((0U == __Vfunc_round_pack32__127__significand) 
                                            | (0U == __Vfunc_round_pack32__127__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__127__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__127__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__127__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__127__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__127__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__127__Vfuncout;
    __Vfunc_round_pack32__133__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__133__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__133__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__133__adjusted = __Vfunc_round_pack32__133__exponent;
    __Vfunc_round_pack32__133__shifted = __Vfunc_round_pack32__133__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__133__exponent))) {
        vlSelf->__Vfunc_shift_jam27__134__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__133__exponent)));
        vlSelf->__Vfunc_shift_jam27__134__value = __Vfunc_round_pack32__133__significand;
        __Vfunc_round_pack32__133__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__134__distance))) {
            vlSelf->__Vfunc_shift_jam27__134__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__134__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__134__distance))) {
            vlSelf->__Vfunc_shift_jam27__134__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__134__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__134__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__134__value, (IData)(vlSelf->__Vfunc_shift_jam27__134__distance)));
            vlSelf->__Vfunc_shift_jam27__134__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__134__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__134__distance)))));
            vlSelf->__Vfunc_shift_jam27__134__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__134__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__134__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__134__discarded))));
        }
        __Vfunc_round_pack32__133__shifted = vlSelf->__Vfunc_shift_jam27__134__Vfuncout;
    }
    __Vfunc_round_pack32__133__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__133__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__133__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__133__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__133__rounded)) {
        __Vfunc_round_pack32__133__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__133__rounded, 1U));
        __Vfunc_round_pack32__133__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__133__adjusted)));
    }
    __Vfunc_round_pack32__133__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__133__rounded)) {
        __Vfunc_round_pack32__133__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__133__adjusted)));
    }
    __Vfunc_round_pack32__133__Vfuncout = (((0U == __Vfunc_round_pack32__133__significand) 
                                            | (0U == __Vfunc_round_pack32__133__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__133__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__133__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__133__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__133__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__133__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__133__Vfuncout;
    __Vfunc_round_pack32__139__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__139__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__139__negative = (1U & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__139__adjusted = __Vfunc_round_pack32__139__exponent;
    __Vfunc_round_pack32__139__shifted = __Vfunc_round_pack32__139__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__139__exponent))) {
        vlSelf->__Vfunc_shift_jam27__140__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__139__exponent)));
        vlSelf->__Vfunc_shift_jam27__140__value = __Vfunc_round_pack32__139__significand;
        __Vfunc_round_pack32__139__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__140__distance))) {
            vlSelf->__Vfunc_shift_jam27__140__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__140__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__140__distance))) {
            vlSelf->__Vfunc_shift_jam27__140__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__140__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__140__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__140__value, (IData)(vlSelf->__Vfunc_shift_jam27__140__distance)));
            vlSelf->__Vfunc_shift_jam27__140__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__140__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__140__distance)))));
            vlSelf->__Vfunc_shift_jam27__140__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__140__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__140__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__140__discarded))));
        }
        __Vfunc_round_pack32__139__shifted = vlSelf->__Vfunc_shift_jam27__140__Vfuncout;
    }
    __Vfunc_round_pack32__139__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__139__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__139__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__139__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__139__rounded)) {
        __Vfunc_round_pack32__139__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__139__rounded, 1U));
        __Vfunc_round_pack32__139__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__139__adjusted)));
    }
    __Vfunc_round_pack32__139__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__139__rounded)) {
        __Vfunc_round_pack32__139__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__139__adjusted)));
    }
    __Vfunc_round_pack32__139__Vfuncout = (((0U == __Vfunc_round_pack32__139__significand) 
                                            | (0U == __Vfunc_round_pack32__139__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__139__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__139__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__139__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__139__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__139__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__139__Vfuncout;
    __Vfunc_round_pack32__144__significand = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__144__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__144__negative = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__144__adjusted = __Vfunc_round_pack32__144__exponent;
    __Vfunc_round_pack32__144__shifted = __Vfunc_round_pack32__144__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__144__exponent))) {
        vlSelf->__Vfunc_shift_jam27__145__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__144__exponent)));
        vlSelf->__Vfunc_shift_jam27__145__value = __Vfunc_round_pack32__144__significand;
        __Vfunc_round_pack32__144__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__145__distance))) {
            vlSelf->__Vfunc_shift_jam27__145__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__145__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__145__distance))) {
            vlSelf->__Vfunc_shift_jam27__145__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__145__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__145__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__145__value, (IData)(vlSelf->__Vfunc_shift_jam27__145__distance)));
            vlSelf->__Vfunc_shift_jam27__145__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__145__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__145__distance)))));
            vlSelf->__Vfunc_shift_jam27__145__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__145__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__145__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__145__discarded))));
        }
        __Vfunc_round_pack32__144__shifted = vlSelf->__Vfunc_shift_jam27__145__Vfuncout;
    }
    __Vfunc_round_pack32__144__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__144__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__144__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__144__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__144__rounded)) {
        __Vfunc_round_pack32__144__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__144__rounded, 1U));
        __Vfunc_round_pack32__144__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__144__adjusted)));
    }
    __Vfunc_round_pack32__144__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__144__rounded)) {
        __Vfunc_round_pack32__144__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__144__adjusted)));
    }
    __Vfunc_round_pack32__144__Vfuncout = (((0U == __Vfunc_round_pack32__144__significand) 
                                            | (0U == __Vfunc_round_pack32__144__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__144__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__144__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__144__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__144__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__144__rounded)))))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__144__Vfuncout;
    vlSelf->__Vfunc_round_pack32__150__significand 
        = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__150__exponent = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__exponent4;
    vlSelf->__Vfunc_round_pack32__150__negative = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__negative4;
    vlSelf->__Vfunc_round_pack32__150__adjusted = __Vfunc_round_pack32__150__exponent;
    __Vfunc_round_pack32__150__shifted = vlSelf->__Vfunc_round_pack32__150__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__150__exponent))) {
        vlSelf->__Vfunc_shift_jam27__151__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__150__exponent)));
        vlSelf->__Vfunc_shift_jam27__151__value = vlSelf->__Vfunc_round_pack32__150__significand;
        vlSelf->__Vfunc_round_pack32__150__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__151__distance))) {
            vlSelf->__Vfunc_shift_jam27__151__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__151__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__151__distance))) {
            vlSelf->__Vfunc_shift_jam27__151__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__151__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__151__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__151__value, (IData)(vlSelf->__Vfunc_shift_jam27__151__distance)));
            vlSelf->__Vfunc_shift_jam27__151__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__151__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__151__distance)))));
            vlSelf->__Vfunc_shift_jam27__151__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__151__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__151__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__151__discarded))));
        }
        __Vfunc_round_pack32__150__shifted = vlSelf->__Vfunc_shift_jam27__151__Vfuncout;
    }
    vlSelf->__Vfunc_round_pack32__150__rounded = (0x1ffffffU 
                                                  & ((0xffffffU 
                                                      & (__Vfunc_round_pack32__150__shifted 
                                                         >> 3U)) 
                                                     + 
                                                     (1U 
                                                      & ((__Vfunc_round_pack32__150__shifted 
                                                          >> 2U) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xbU 
                                                                     & __Vfunc_round_pack32__150__shifted)))))));
    if ((0x1000000U & vlSelf->__Vfunc_round_pack32__150__rounded)) {
        vlSelf->__Vfunc_round_pack32__150__rounded 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__150__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__150__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__150__adjusted)));
    }
    vlSelf->__Vfunc_round_pack32__150__biased = 0U;
}
