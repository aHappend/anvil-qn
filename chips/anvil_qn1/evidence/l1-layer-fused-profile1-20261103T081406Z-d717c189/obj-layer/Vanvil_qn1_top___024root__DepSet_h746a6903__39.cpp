// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

extern const VlWide<32>/*1023:0*/ Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__30(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__30\n"); );
    // Init
    IData/*31:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate = 0;
    IData/*31:0*/ __Vilp;
    QData/*32:0*/ __Vfunc_round_pack32__38__Vfuncout;
    __Vfunc_round_pack32__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__38__negative;
    __Vfunc_round_pack32__38__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__38__exponent;
    __Vfunc_round_pack32__38__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__38__significand;
    __Vfunc_round_pack32__38__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__38__shifted;
    __Vfunc_round_pack32__38__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__38__rounded;
    __Vfunc_round_pack32__38__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__38__adjusted;
    __Vfunc_round_pack32__38__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__38__biased;
    __Vfunc_round_pack32__38__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__44__Vfuncout;
    __Vfunc_round_pack32__44__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__44__negative;
    __Vfunc_round_pack32__44__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__44__exponent;
    __Vfunc_round_pack32__44__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__44__significand;
    __Vfunc_round_pack32__44__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__44__shifted;
    __Vfunc_round_pack32__44__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__44__rounded;
    __Vfunc_round_pack32__44__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__44__adjusted;
    __Vfunc_round_pack32__44__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__44__biased;
    __Vfunc_round_pack32__44__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__50__Vfuncout;
    __Vfunc_round_pack32__50__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__50__negative;
    __Vfunc_round_pack32__50__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__50__exponent;
    __Vfunc_round_pack32__50__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__50__significand;
    __Vfunc_round_pack32__50__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__50__shifted;
    __Vfunc_round_pack32__50__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__50__rounded;
    __Vfunc_round_pack32__50__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__50__adjusted;
    __Vfunc_round_pack32__50__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__50__biased;
    __Vfunc_round_pack32__50__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__56__Vfuncout;
    __Vfunc_round_pack32__56__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__56__negative;
    __Vfunc_round_pack32__56__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__56__exponent;
    __Vfunc_round_pack32__56__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__56__significand;
    __Vfunc_round_pack32__56__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__56__shifted;
    __Vfunc_round_pack32__56__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__56__rounded;
    __Vfunc_round_pack32__56__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__56__adjusted;
    __Vfunc_round_pack32__56__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__56__biased;
    __Vfunc_round_pack32__56__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__62__Vfuncout;
    __Vfunc_round_pack32__62__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__62__negative;
    __Vfunc_round_pack32__62__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__62__exponent;
    __Vfunc_round_pack32__62__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__62__significand;
    __Vfunc_round_pack32__62__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__62__shifted;
    __Vfunc_round_pack32__62__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__62__rounded;
    __Vfunc_round_pack32__62__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__62__adjusted;
    __Vfunc_round_pack32__62__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__62__biased;
    __Vfunc_round_pack32__62__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__68__Vfuncout;
    __Vfunc_round_pack32__68__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__68__negative;
    __Vfunc_round_pack32__68__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__68__exponent;
    __Vfunc_round_pack32__68__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__68__significand;
    __Vfunc_round_pack32__68__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__68__shifted;
    __Vfunc_round_pack32__68__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__68__rounded;
    __Vfunc_round_pack32__68__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__68__adjusted;
    __Vfunc_round_pack32__68__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__68__biased;
    __Vfunc_round_pack32__68__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__74__Vfuncout;
    __Vfunc_round_pack32__74__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__74__negative;
    __Vfunc_round_pack32__74__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__74__exponent;
    __Vfunc_round_pack32__74__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__74__significand;
    __Vfunc_round_pack32__74__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__74__shifted;
    __Vfunc_round_pack32__74__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__74__rounded;
    __Vfunc_round_pack32__74__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__74__adjusted;
    __Vfunc_round_pack32__74__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__74__biased;
    __Vfunc_round_pack32__74__biased = 0;
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
    QData/*32:0*/ __Vfunc_round_pack32__86__Vfuncout;
    __Vfunc_round_pack32__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__86__negative;
    __Vfunc_round_pack32__86__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__86__exponent;
    __Vfunc_round_pack32__86__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__86__significand;
    __Vfunc_round_pack32__86__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__86__shifted;
    __Vfunc_round_pack32__86__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__86__rounded;
    __Vfunc_round_pack32__86__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__86__adjusted;
    __Vfunc_round_pack32__86__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__86__biased;
    __Vfunc_round_pack32__86__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__92__Vfuncout;
    __Vfunc_round_pack32__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__92__negative;
    __Vfunc_round_pack32__92__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__92__exponent;
    __Vfunc_round_pack32__92__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__92__significand;
    __Vfunc_round_pack32__92__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__92__shifted;
    __Vfunc_round_pack32__92__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__92__rounded;
    __Vfunc_round_pack32__92__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__92__adjusted;
    __Vfunc_round_pack32__92__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__92__biased;
    __Vfunc_round_pack32__92__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__98__Vfuncout;
    __Vfunc_round_pack32__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__98__negative;
    __Vfunc_round_pack32__98__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__98__exponent;
    __Vfunc_round_pack32__98__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__98__significand;
    __Vfunc_round_pack32__98__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__98__shifted;
    __Vfunc_round_pack32__98__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__98__rounded;
    __Vfunc_round_pack32__98__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__98__adjusted;
    __Vfunc_round_pack32__98__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__98__biased;
    __Vfunc_round_pack32__98__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__104__Vfuncout;
    __Vfunc_round_pack32__104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__104__negative;
    __Vfunc_round_pack32__104__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__104__exponent;
    __Vfunc_round_pack32__104__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__104__significand;
    __Vfunc_round_pack32__104__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__104__shifted;
    __Vfunc_round_pack32__104__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__104__rounded;
    __Vfunc_round_pack32__104__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__104__adjusted;
    __Vfunc_round_pack32__104__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__104__biased;
    __Vfunc_round_pack32__104__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__110__Vfuncout;
    __Vfunc_round_pack32__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__110__negative;
    __Vfunc_round_pack32__110__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__110__exponent;
    __Vfunc_round_pack32__110__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__110__significand;
    __Vfunc_round_pack32__110__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__110__shifted;
    __Vfunc_round_pack32__110__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__110__rounded;
    __Vfunc_round_pack32__110__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__110__adjusted;
    __Vfunc_round_pack32__110__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__110__biased;
    __Vfunc_round_pack32__110__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__116__Vfuncout;
    __Vfunc_round_pack32__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__116__negative;
    __Vfunc_round_pack32__116__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__116__exponent;
    __Vfunc_round_pack32__116__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__116__significand;
    __Vfunc_round_pack32__116__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__116__shifted;
    __Vfunc_round_pack32__116__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__116__rounded;
    __Vfunc_round_pack32__116__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__116__adjusted;
    __Vfunc_round_pack32__116__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__116__biased;
    __Vfunc_round_pack32__116__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__122__Vfuncout;
    __Vfunc_round_pack32__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__122__negative;
    __Vfunc_round_pack32__122__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__122__exponent;
    __Vfunc_round_pack32__122__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__122__significand;
    __Vfunc_round_pack32__122__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__122__shifted;
    __Vfunc_round_pack32__122__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__122__rounded;
    __Vfunc_round_pack32__122__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__122__adjusted;
    __Vfunc_round_pack32__122__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__122__biased;
    __Vfunc_round_pack32__122__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__128__Vfuncout;
    __Vfunc_round_pack32__128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__128__negative;
    __Vfunc_round_pack32__128__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__128__exponent;
    __Vfunc_round_pack32__128__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__128__significand;
    __Vfunc_round_pack32__128__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__128__shifted;
    __Vfunc_round_pack32__128__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__128__rounded;
    __Vfunc_round_pack32__128__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__128__adjusted;
    __Vfunc_round_pack32__128__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__128__biased;
    __Vfunc_round_pack32__128__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__134__Vfuncout;
    __Vfunc_round_pack32__134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__134__negative;
    __Vfunc_round_pack32__134__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__134__exponent;
    __Vfunc_round_pack32__134__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__134__significand;
    __Vfunc_round_pack32__134__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__134__shifted;
    __Vfunc_round_pack32__134__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__134__rounded;
    __Vfunc_round_pack32__134__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__134__adjusted;
    __Vfunc_round_pack32__134__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__134__biased;
    __Vfunc_round_pack32__134__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__140__Vfuncout;
    __Vfunc_round_pack32__140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__140__negative;
    __Vfunc_round_pack32__140__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__140__exponent;
    __Vfunc_round_pack32__140__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__140__significand;
    __Vfunc_round_pack32__140__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__140__shifted;
    __Vfunc_round_pack32__140__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__140__rounded;
    __Vfunc_round_pack32__140__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__140__adjusted;
    __Vfunc_round_pack32__140__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__140__biased;
    __Vfunc_round_pack32__140__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__146__Vfuncout;
    __Vfunc_round_pack32__146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__146__negative;
    __Vfunc_round_pack32__146__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__146__exponent;
    __Vfunc_round_pack32__146__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__146__significand;
    __Vfunc_round_pack32__146__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__146__shifted;
    __Vfunc_round_pack32__146__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__146__rounded;
    __Vfunc_round_pack32__146__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__146__adjusted;
    __Vfunc_round_pack32__146__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__146__biased;
    __Vfunc_round_pack32__146__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__152__Vfuncout;
    __Vfunc_round_pack32__152__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__152__negative;
    __Vfunc_round_pack32__152__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__152__exponent;
    __Vfunc_round_pack32__152__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__152__significand;
    __Vfunc_round_pack32__152__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__152__shifted;
    __Vfunc_round_pack32__152__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__152__rounded;
    __Vfunc_round_pack32__152__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__152__adjusted;
    __Vfunc_round_pack32__152__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__152__biased;
    __Vfunc_round_pack32__152__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__158__Vfuncout;
    __Vfunc_round_pack32__158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__158__negative;
    __Vfunc_round_pack32__158__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__158__exponent;
    __Vfunc_round_pack32__158__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__158__significand;
    __Vfunc_round_pack32__158__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__158__shifted;
    __Vfunc_round_pack32__158__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__158__rounded;
    __Vfunc_round_pack32__158__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__158__adjusted;
    __Vfunc_round_pack32__158__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__158__biased;
    __Vfunc_round_pack32__158__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__164__Vfuncout;
    __Vfunc_round_pack32__164__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__164__negative;
    __Vfunc_round_pack32__164__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__164__exponent;
    __Vfunc_round_pack32__164__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__164__significand;
    __Vfunc_round_pack32__164__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__164__shifted;
    __Vfunc_round_pack32__164__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__164__rounded;
    __Vfunc_round_pack32__164__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__164__adjusted;
    __Vfunc_round_pack32__164__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__164__biased;
    __Vfunc_round_pack32__164__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__170__Vfuncout;
    __Vfunc_round_pack32__170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__170__negative;
    __Vfunc_round_pack32__170__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__170__exponent;
    __Vfunc_round_pack32__170__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__170__significand;
    __Vfunc_round_pack32__170__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__170__shifted;
    __Vfunc_round_pack32__170__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__170__rounded;
    __Vfunc_round_pack32__170__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__170__adjusted;
    __Vfunc_round_pack32__170__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__170__biased;
    __Vfunc_round_pack32__170__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__176__Vfuncout;
    __Vfunc_round_pack32__176__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__176__negative;
    __Vfunc_round_pack32__176__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__176__exponent;
    __Vfunc_round_pack32__176__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__176__significand;
    __Vfunc_round_pack32__176__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__176__shifted;
    __Vfunc_round_pack32__176__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__176__rounded;
    __Vfunc_round_pack32__176__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__176__adjusted;
    __Vfunc_round_pack32__176__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__176__biased;
    __Vfunc_round_pack32__176__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__182__Vfuncout;
    __Vfunc_round_pack32__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__182__negative;
    __Vfunc_round_pack32__182__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__182__exponent;
    __Vfunc_round_pack32__182__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__182__significand;
    __Vfunc_round_pack32__182__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__182__shifted;
    __Vfunc_round_pack32__182__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__182__rounded;
    __Vfunc_round_pack32__182__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__182__adjusted;
    __Vfunc_round_pack32__182__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__182__biased;
    __Vfunc_round_pack32__182__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__188__Vfuncout;
    __Vfunc_round_pack32__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__188__negative;
    __Vfunc_round_pack32__188__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__188__exponent;
    __Vfunc_round_pack32__188__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__188__significand;
    __Vfunc_round_pack32__188__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__188__shifted;
    __Vfunc_round_pack32__188__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__188__rounded;
    __Vfunc_round_pack32__188__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__188__adjusted;
    __Vfunc_round_pack32__188__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__188__biased;
    __Vfunc_round_pack32__188__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__194__Vfuncout;
    __Vfunc_round_pack32__194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__194__negative;
    __Vfunc_round_pack32__194__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__194__exponent;
    __Vfunc_round_pack32__194__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__194__significand;
    __Vfunc_round_pack32__194__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__194__shifted;
    __Vfunc_round_pack32__194__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__194__rounded;
    __Vfunc_round_pack32__194__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__194__adjusted;
    __Vfunc_round_pack32__194__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__194__biased;
    __Vfunc_round_pack32__194__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__200__Vfuncout;
    __Vfunc_round_pack32__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__200__negative;
    __Vfunc_round_pack32__200__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__200__exponent;
    __Vfunc_round_pack32__200__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__200__significand;
    __Vfunc_round_pack32__200__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__200__shifted;
    __Vfunc_round_pack32__200__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__200__rounded;
    __Vfunc_round_pack32__200__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__200__adjusted;
    __Vfunc_round_pack32__200__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__200__biased;
    __Vfunc_round_pack32__200__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__206__Vfuncout;
    __Vfunc_round_pack32__206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__206__negative;
    __Vfunc_round_pack32__206__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__206__exponent;
    __Vfunc_round_pack32__206__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__206__significand;
    __Vfunc_round_pack32__206__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__206__shifted;
    __Vfunc_round_pack32__206__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__206__rounded;
    __Vfunc_round_pack32__206__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__206__adjusted;
    __Vfunc_round_pack32__206__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__206__biased;
    __Vfunc_round_pack32__206__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__212__Vfuncout;
    __Vfunc_round_pack32__212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__212__negative;
    __Vfunc_round_pack32__212__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__212__exponent;
    __Vfunc_round_pack32__212__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__212__significand;
    __Vfunc_round_pack32__212__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__212__shifted;
    __Vfunc_round_pack32__212__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__212__rounded;
    __Vfunc_round_pack32__212__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__212__adjusted;
    __Vfunc_round_pack32__212__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__212__biased;
    __Vfunc_round_pack32__212__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__218__Vfuncout;
    __Vfunc_round_pack32__218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__218__negative;
    __Vfunc_round_pack32__218__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__218__exponent;
    __Vfunc_round_pack32__218__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__218__significand;
    __Vfunc_round_pack32__218__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__218__shifted;
    __Vfunc_round_pack32__218__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__218__rounded;
    __Vfunc_round_pack32__218__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__218__adjusted;
    __Vfunc_round_pack32__218__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__218__biased;
    __Vfunc_round_pack32__218__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__224__Vfuncout;
    __Vfunc_round_pack32__224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__224__negative;
    __Vfunc_round_pack32__224__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__224__exponent;
    __Vfunc_round_pack32__224__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__224__significand;
    __Vfunc_round_pack32__224__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__224__shifted;
    __Vfunc_round_pack32__224__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__224__rounded;
    __Vfunc_round_pack32__224__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__224__adjusted;
    __Vfunc_round_pack32__224__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__224__biased;
    __Vfunc_round_pack32__224__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__230__Vfuncout;
    __Vfunc_round_pack32__230__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__230__negative;
    __Vfunc_round_pack32__230__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__230__exponent;
    __Vfunc_round_pack32__230__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__230__significand;
    __Vfunc_round_pack32__230__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__230__shifted;
    __Vfunc_round_pack32__230__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__230__rounded;
    __Vfunc_round_pack32__230__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__230__adjusted;
    __Vfunc_round_pack32__230__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__230__biased;
    __Vfunc_round_pack32__230__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__236__Vfuncout;
    __Vfunc_round_pack32__236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__236__negative;
    __Vfunc_round_pack32__236__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__236__exponent;
    __Vfunc_round_pack32__236__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__236__significand;
    __Vfunc_round_pack32__236__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__236__shifted;
    __Vfunc_round_pack32__236__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__236__rounded;
    __Vfunc_round_pack32__236__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__236__adjusted;
    __Vfunc_round_pack32__236__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__236__biased;
    __Vfunc_round_pack32__236__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__242__Vfuncout;
    __Vfunc_round_pack32__242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__242__negative;
    __Vfunc_round_pack32__242__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__242__exponent;
    __Vfunc_round_pack32__242__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__242__significand;
    __Vfunc_round_pack32__242__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__242__shifted;
    __Vfunc_round_pack32__242__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__242__rounded;
    __Vfunc_round_pack32__242__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__242__adjusted;
    __Vfunc_round_pack32__242__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__242__biased;
    __Vfunc_round_pack32__242__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__248__Vfuncout;
    __Vfunc_round_pack32__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__248__negative;
    __Vfunc_round_pack32__248__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__248__exponent;
    __Vfunc_round_pack32__248__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__248__significand;
    __Vfunc_round_pack32__248__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__248__shifted;
    __Vfunc_round_pack32__248__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__248__rounded;
    __Vfunc_round_pack32__248__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__248__adjusted;
    __Vfunc_round_pack32__248__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__248__biased;
    __Vfunc_round_pack32__248__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__254__Vfuncout;
    __Vfunc_round_pack32__254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__254__negative;
    __Vfunc_round_pack32__254__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__254__exponent;
    __Vfunc_round_pack32__254__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__254__significand;
    __Vfunc_round_pack32__254__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__254__shifted;
    __Vfunc_round_pack32__254__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__254__rounded;
    __Vfunc_round_pack32__254__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__254__adjusted;
    __Vfunc_round_pack32__254__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__254__biased;
    __Vfunc_round_pack32__254__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__260__Vfuncout;
    __Vfunc_round_pack32__260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__260__negative;
    __Vfunc_round_pack32__260__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__260__exponent;
    __Vfunc_round_pack32__260__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__260__significand;
    __Vfunc_round_pack32__260__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__260__shifted;
    __Vfunc_round_pack32__260__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__260__rounded;
    __Vfunc_round_pack32__260__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__260__adjusted;
    __Vfunc_round_pack32__260__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__260__biased;
    __Vfunc_round_pack32__260__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__266__Vfuncout;
    __Vfunc_round_pack32__266__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__266__negative;
    __Vfunc_round_pack32__266__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__266__exponent;
    __Vfunc_round_pack32__266__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__266__significand;
    __Vfunc_round_pack32__266__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__266__shifted;
    __Vfunc_round_pack32__266__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__266__rounded;
    __Vfunc_round_pack32__266__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__266__adjusted;
    __Vfunc_round_pack32__266__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__266__biased;
    __Vfunc_round_pack32__266__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__272__Vfuncout;
    __Vfunc_round_pack32__272__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__272__negative;
    __Vfunc_round_pack32__272__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__272__exponent;
    __Vfunc_round_pack32__272__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__272__significand;
    __Vfunc_round_pack32__272__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__272__shifted;
    __Vfunc_round_pack32__272__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__272__rounded;
    __Vfunc_round_pack32__272__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__272__adjusted;
    __Vfunc_round_pack32__272__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__272__biased;
    __Vfunc_round_pack32__272__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__278__Vfuncout;
    __Vfunc_round_pack32__278__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__278__negative;
    __Vfunc_round_pack32__278__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__278__exponent;
    __Vfunc_round_pack32__278__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__278__significand;
    __Vfunc_round_pack32__278__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__278__shifted;
    __Vfunc_round_pack32__278__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__278__rounded;
    __Vfunc_round_pack32__278__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__278__adjusted;
    __Vfunc_round_pack32__278__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__278__biased;
    __Vfunc_round_pack32__278__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__284__Vfuncout;
    __Vfunc_round_pack32__284__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__284__negative;
    __Vfunc_round_pack32__284__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__284__exponent;
    __Vfunc_round_pack32__284__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__284__significand;
    __Vfunc_round_pack32__284__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__284__shifted;
    __Vfunc_round_pack32__284__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__284__rounded;
    __Vfunc_round_pack32__284__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__284__adjusted;
    __Vfunc_round_pack32__284__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__284__biased;
    __Vfunc_round_pack32__284__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__290__Vfuncout;
    __Vfunc_round_pack32__290__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__290__exponent;
    __Vfunc_round_pack32__290__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__290__shifted;
    __Vfunc_round_pack32__290__shifted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__290__biased;
    __Vfunc_round_pack32__290__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__296__Vfuncout;
    __Vfunc_round_pack32__296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__296__negative;
    __Vfunc_round_pack32__296__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__296__exponent;
    __Vfunc_round_pack32__296__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__296__significand;
    __Vfunc_round_pack32__296__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__296__shifted;
    __Vfunc_round_pack32__296__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__296__rounded;
    __Vfunc_round_pack32__296__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__296__adjusted;
    __Vfunc_round_pack32__296__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__296__biased;
    __Vfunc_round_pack32__296__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__302__Vfuncout;
    __Vfunc_round_pack32__302__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__302__negative;
    __Vfunc_round_pack32__302__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__302__exponent;
    __Vfunc_round_pack32__302__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__302__significand;
    __Vfunc_round_pack32__302__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__302__shifted;
    __Vfunc_round_pack32__302__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__302__rounded;
    __Vfunc_round_pack32__302__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__302__adjusted;
    __Vfunc_round_pack32__302__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__302__biased;
    __Vfunc_round_pack32__302__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__308__Vfuncout;
    __Vfunc_round_pack32__308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__308__negative;
    __Vfunc_round_pack32__308__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__308__exponent;
    __Vfunc_round_pack32__308__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__308__significand;
    __Vfunc_round_pack32__308__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__308__shifted;
    __Vfunc_round_pack32__308__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__308__rounded;
    __Vfunc_round_pack32__308__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__308__adjusted;
    __Vfunc_round_pack32__308__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__308__biased;
    __Vfunc_round_pack32__308__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__314__Vfuncout;
    __Vfunc_round_pack32__314__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__314__negative;
    __Vfunc_round_pack32__314__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__314__exponent;
    __Vfunc_round_pack32__314__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__314__significand;
    __Vfunc_round_pack32__314__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__314__shifted;
    __Vfunc_round_pack32__314__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__314__rounded;
    __Vfunc_round_pack32__314__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__314__adjusted;
    __Vfunc_round_pack32__314__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__314__biased;
    __Vfunc_round_pack32__314__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__320__Vfuncout;
    __Vfunc_round_pack32__320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__320__negative;
    __Vfunc_round_pack32__320__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__320__exponent;
    __Vfunc_round_pack32__320__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__320__significand;
    __Vfunc_round_pack32__320__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__320__shifted;
    __Vfunc_round_pack32__320__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__320__rounded;
    __Vfunc_round_pack32__320__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__320__adjusted;
    __Vfunc_round_pack32__320__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__320__biased;
    __Vfunc_round_pack32__320__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__326__Vfuncout;
    __Vfunc_round_pack32__326__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__326__negative;
    __Vfunc_round_pack32__326__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__326__exponent;
    __Vfunc_round_pack32__326__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__326__significand;
    __Vfunc_round_pack32__326__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__326__shifted;
    __Vfunc_round_pack32__326__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__326__rounded;
    __Vfunc_round_pack32__326__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__326__adjusted;
    __Vfunc_round_pack32__326__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__326__biased;
    __Vfunc_round_pack32__326__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__332__Vfuncout;
    __Vfunc_round_pack32__332__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__332__negative;
    __Vfunc_round_pack32__332__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__332__exponent;
    __Vfunc_round_pack32__332__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__332__significand;
    __Vfunc_round_pack32__332__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__332__shifted;
    __Vfunc_round_pack32__332__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__332__rounded;
    __Vfunc_round_pack32__332__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__332__adjusted;
    __Vfunc_round_pack32__332__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__332__biased;
    __Vfunc_round_pack32__332__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__338__Vfuncout;
    __Vfunc_round_pack32__338__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__338__negative;
    __Vfunc_round_pack32__338__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__338__exponent;
    __Vfunc_round_pack32__338__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__338__significand;
    __Vfunc_round_pack32__338__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__338__shifted;
    __Vfunc_round_pack32__338__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__338__rounded;
    __Vfunc_round_pack32__338__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__338__adjusted;
    __Vfunc_round_pack32__338__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__338__biased;
    __Vfunc_round_pack32__338__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__344__Vfuncout;
    __Vfunc_round_pack32__344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__344__negative;
    __Vfunc_round_pack32__344__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__344__exponent;
    __Vfunc_round_pack32__344__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__344__significand;
    __Vfunc_round_pack32__344__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__344__shifted;
    __Vfunc_round_pack32__344__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__344__rounded;
    __Vfunc_round_pack32__344__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__344__adjusted;
    __Vfunc_round_pack32__344__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__344__biased;
    __Vfunc_round_pack32__344__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__350__Vfuncout;
    __Vfunc_round_pack32__350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__350__negative;
    __Vfunc_round_pack32__350__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__350__exponent;
    __Vfunc_round_pack32__350__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__350__significand;
    __Vfunc_round_pack32__350__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__350__shifted;
    __Vfunc_round_pack32__350__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__350__rounded;
    __Vfunc_round_pack32__350__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__350__adjusted;
    __Vfunc_round_pack32__350__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__350__biased;
    __Vfunc_round_pack32__350__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__356__Vfuncout;
    __Vfunc_round_pack32__356__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__356__negative;
    __Vfunc_round_pack32__356__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__356__exponent;
    __Vfunc_round_pack32__356__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__356__significand;
    __Vfunc_round_pack32__356__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__356__shifted;
    __Vfunc_round_pack32__356__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__356__rounded;
    __Vfunc_round_pack32__356__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__356__adjusted;
    __Vfunc_round_pack32__356__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__356__biased;
    __Vfunc_round_pack32__356__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__362__Vfuncout;
    __Vfunc_round_pack32__362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__362__negative;
    __Vfunc_round_pack32__362__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__362__exponent;
    __Vfunc_round_pack32__362__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__362__significand;
    __Vfunc_round_pack32__362__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__362__shifted;
    __Vfunc_round_pack32__362__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__362__rounded;
    __Vfunc_round_pack32__362__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__362__adjusted;
    __Vfunc_round_pack32__362__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__362__biased;
    __Vfunc_round_pack32__362__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__368__Vfuncout;
    __Vfunc_round_pack32__368__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__368__negative;
    __Vfunc_round_pack32__368__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__368__exponent;
    __Vfunc_round_pack32__368__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__368__significand;
    __Vfunc_round_pack32__368__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__368__shifted;
    __Vfunc_round_pack32__368__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__368__rounded;
    __Vfunc_round_pack32__368__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__368__adjusted;
    __Vfunc_round_pack32__368__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__368__biased;
    __Vfunc_round_pack32__368__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__374__Vfuncout;
    __Vfunc_round_pack32__374__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_round_pack32__374__rounded;
    __Vfunc_round_pack32__374__rounded = 0;
    CData/*7:0*/ __Vfunc_round_pack32__374__biased;
    __Vfunc_round_pack32__374__biased = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11383__negative;
    __Vfunc_round_pack32__11383__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11383__exponent;
    __Vfunc_round_pack32__11383__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11383__significand;
    __Vfunc_round_pack32__11383__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11383__shifted;
    __Vfunc_round_pack32__11383__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11383__rounded;
    __Vfunc_round_pack32__11383__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11383__adjusted;
    __Vfunc_round_pack32__11383__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11383__biased;
    __Vfunc_round_pack32__11383__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11395__Vfuncout;
    __Vfunc_round_pack32__11395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11395__negative;
    __Vfunc_round_pack32__11395__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11395__exponent;
    __Vfunc_round_pack32__11395__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11395__significand;
    __Vfunc_round_pack32__11395__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11395__shifted;
    __Vfunc_round_pack32__11395__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11395__rounded;
    __Vfunc_round_pack32__11395__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11395__adjusted;
    __Vfunc_round_pack32__11395__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11395__biased;
    __Vfunc_round_pack32__11395__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11407__Vfuncout;
    __Vfunc_round_pack32__11407__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11407__negative;
    __Vfunc_round_pack32__11407__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11407__exponent;
    __Vfunc_round_pack32__11407__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11407__significand;
    __Vfunc_round_pack32__11407__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11407__shifted;
    __Vfunc_round_pack32__11407__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11407__rounded;
    __Vfunc_round_pack32__11407__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11407__adjusted;
    __Vfunc_round_pack32__11407__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11407__biased;
    __Vfunc_round_pack32__11407__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11419__Vfuncout;
    __Vfunc_round_pack32__11419__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11419__negative;
    __Vfunc_round_pack32__11419__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11419__exponent;
    __Vfunc_round_pack32__11419__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11419__significand;
    __Vfunc_round_pack32__11419__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11419__shifted;
    __Vfunc_round_pack32__11419__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11419__rounded;
    __Vfunc_round_pack32__11419__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11419__adjusted;
    __Vfunc_round_pack32__11419__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11419__biased;
    __Vfunc_round_pack32__11419__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11431__Vfuncout;
    __Vfunc_round_pack32__11431__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11431__negative;
    __Vfunc_round_pack32__11431__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11431__exponent;
    __Vfunc_round_pack32__11431__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11431__significand;
    __Vfunc_round_pack32__11431__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11431__shifted;
    __Vfunc_round_pack32__11431__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11431__rounded;
    __Vfunc_round_pack32__11431__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11431__adjusted;
    __Vfunc_round_pack32__11431__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11431__biased;
    __Vfunc_round_pack32__11431__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11443__Vfuncout;
    __Vfunc_round_pack32__11443__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11443__negative;
    __Vfunc_round_pack32__11443__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11443__exponent;
    __Vfunc_round_pack32__11443__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11443__significand;
    __Vfunc_round_pack32__11443__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11443__shifted;
    __Vfunc_round_pack32__11443__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11443__rounded;
    __Vfunc_round_pack32__11443__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11443__adjusted;
    __Vfunc_round_pack32__11443__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11443__biased;
    __Vfunc_round_pack32__11443__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11455__Vfuncout;
    __Vfunc_round_pack32__11455__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11455__negative;
    __Vfunc_round_pack32__11455__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11455__exponent;
    __Vfunc_round_pack32__11455__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11455__significand;
    __Vfunc_round_pack32__11455__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11455__shifted;
    __Vfunc_round_pack32__11455__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11455__rounded;
    __Vfunc_round_pack32__11455__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11455__adjusted;
    __Vfunc_round_pack32__11455__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11455__biased;
    __Vfunc_round_pack32__11455__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11467__Vfuncout;
    __Vfunc_round_pack32__11467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11467__negative;
    __Vfunc_round_pack32__11467__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11467__exponent;
    __Vfunc_round_pack32__11467__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11467__significand;
    __Vfunc_round_pack32__11467__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11467__shifted;
    __Vfunc_round_pack32__11467__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11467__rounded;
    __Vfunc_round_pack32__11467__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11467__adjusted;
    __Vfunc_round_pack32__11467__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11467__biased;
    __Vfunc_round_pack32__11467__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11479__Vfuncout;
    __Vfunc_round_pack32__11479__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11479__negative;
    __Vfunc_round_pack32__11479__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11479__exponent;
    __Vfunc_round_pack32__11479__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11479__significand;
    __Vfunc_round_pack32__11479__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11479__shifted;
    __Vfunc_round_pack32__11479__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11479__rounded;
    __Vfunc_round_pack32__11479__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11479__adjusted;
    __Vfunc_round_pack32__11479__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11479__biased;
    __Vfunc_round_pack32__11479__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11491__Vfuncout;
    __Vfunc_round_pack32__11491__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11491__negative;
    __Vfunc_round_pack32__11491__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11491__exponent;
    __Vfunc_round_pack32__11491__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11491__significand;
    __Vfunc_round_pack32__11491__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11491__shifted;
    __Vfunc_round_pack32__11491__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11491__rounded;
    __Vfunc_round_pack32__11491__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11491__adjusted;
    __Vfunc_round_pack32__11491__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11491__biased;
    __Vfunc_round_pack32__11491__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11503__Vfuncout;
    __Vfunc_round_pack32__11503__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11503__negative;
    __Vfunc_round_pack32__11503__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11503__exponent;
    __Vfunc_round_pack32__11503__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11503__significand;
    __Vfunc_round_pack32__11503__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11503__shifted;
    __Vfunc_round_pack32__11503__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11503__rounded;
    __Vfunc_round_pack32__11503__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11503__adjusted;
    __Vfunc_round_pack32__11503__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11503__biased;
    __Vfunc_round_pack32__11503__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11515__Vfuncout;
    __Vfunc_round_pack32__11515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11515__negative;
    __Vfunc_round_pack32__11515__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11515__exponent;
    __Vfunc_round_pack32__11515__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11515__significand;
    __Vfunc_round_pack32__11515__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11515__shifted;
    __Vfunc_round_pack32__11515__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11515__rounded;
    __Vfunc_round_pack32__11515__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11515__adjusted;
    __Vfunc_round_pack32__11515__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11515__biased;
    __Vfunc_round_pack32__11515__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11527__Vfuncout;
    __Vfunc_round_pack32__11527__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11527__negative;
    __Vfunc_round_pack32__11527__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11527__exponent;
    __Vfunc_round_pack32__11527__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11527__significand;
    __Vfunc_round_pack32__11527__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11527__shifted;
    __Vfunc_round_pack32__11527__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11527__rounded;
    __Vfunc_round_pack32__11527__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11527__adjusted;
    __Vfunc_round_pack32__11527__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11527__biased;
    __Vfunc_round_pack32__11527__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11539__Vfuncout;
    __Vfunc_round_pack32__11539__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11539__negative;
    __Vfunc_round_pack32__11539__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11539__exponent;
    __Vfunc_round_pack32__11539__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11539__significand;
    __Vfunc_round_pack32__11539__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11539__shifted;
    __Vfunc_round_pack32__11539__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11539__rounded;
    __Vfunc_round_pack32__11539__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11539__adjusted;
    __Vfunc_round_pack32__11539__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11539__biased;
    __Vfunc_round_pack32__11539__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11551__Vfuncout;
    __Vfunc_round_pack32__11551__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11551__negative;
    __Vfunc_round_pack32__11551__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11551__exponent;
    __Vfunc_round_pack32__11551__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11551__significand;
    __Vfunc_round_pack32__11551__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11551__shifted;
    __Vfunc_round_pack32__11551__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11551__rounded;
    __Vfunc_round_pack32__11551__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11551__adjusted;
    __Vfunc_round_pack32__11551__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11551__biased;
    __Vfunc_round_pack32__11551__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11563__Vfuncout;
    __Vfunc_round_pack32__11563__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11563__negative;
    __Vfunc_round_pack32__11563__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11563__exponent;
    __Vfunc_round_pack32__11563__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11563__significand;
    __Vfunc_round_pack32__11563__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11563__shifted;
    __Vfunc_round_pack32__11563__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11563__rounded;
    __Vfunc_round_pack32__11563__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11563__adjusted;
    __Vfunc_round_pack32__11563__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11563__biased;
    __Vfunc_round_pack32__11563__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11575__Vfuncout;
    __Vfunc_round_pack32__11575__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11575__negative;
    __Vfunc_round_pack32__11575__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11575__exponent;
    __Vfunc_round_pack32__11575__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11575__significand;
    __Vfunc_round_pack32__11575__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11575__shifted;
    __Vfunc_round_pack32__11575__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11575__rounded;
    __Vfunc_round_pack32__11575__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11575__adjusted;
    __Vfunc_round_pack32__11575__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11575__biased;
    __Vfunc_round_pack32__11575__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11587__Vfuncout;
    __Vfunc_round_pack32__11587__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11587__negative;
    __Vfunc_round_pack32__11587__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11587__exponent;
    __Vfunc_round_pack32__11587__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11587__significand;
    __Vfunc_round_pack32__11587__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11587__shifted;
    __Vfunc_round_pack32__11587__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11587__rounded;
    __Vfunc_round_pack32__11587__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11587__adjusted;
    __Vfunc_round_pack32__11587__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11587__biased;
    __Vfunc_round_pack32__11587__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11599__Vfuncout;
    __Vfunc_round_pack32__11599__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11599__negative;
    __Vfunc_round_pack32__11599__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11599__exponent;
    __Vfunc_round_pack32__11599__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11599__significand;
    __Vfunc_round_pack32__11599__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11599__shifted;
    __Vfunc_round_pack32__11599__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11599__rounded;
    __Vfunc_round_pack32__11599__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11599__adjusted;
    __Vfunc_round_pack32__11599__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11599__biased;
    __Vfunc_round_pack32__11599__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11611__Vfuncout;
    __Vfunc_round_pack32__11611__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11611__negative;
    __Vfunc_round_pack32__11611__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11611__exponent;
    __Vfunc_round_pack32__11611__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11611__significand;
    __Vfunc_round_pack32__11611__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11611__shifted;
    __Vfunc_round_pack32__11611__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11611__rounded;
    __Vfunc_round_pack32__11611__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11611__adjusted;
    __Vfunc_round_pack32__11611__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11611__biased;
    __Vfunc_round_pack32__11611__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11623__Vfuncout;
    __Vfunc_round_pack32__11623__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11623__negative;
    __Vfunc_round_pack32__11623__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11623__exponent;
    __Vfunc_round_pack32__11623__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11623__significand;
    __Vfunc_round_pack32__11623__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11623__shifted;
    __Vfunc_round_pack32__11623__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11623__rounded;
    __Vfunc_round_pack32__11623__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11623__adjusted;
    __Vfunc_round_pack32__11623__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11623__biased;
    __Vfunc_round_pack32__11623__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11635__Vfuncout;
    __Vfunc_round_pack32__11635__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11635__negative;
    __Vfunc_round_pack32__11635__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11635__exponent;
    __Vfunc_round_pack32__11635__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11635__significand;
    __Vfunc_round_pack32__11635__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11635__shifted;
    __Vfunc_round_pack32__11635__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11635__rounded;
    __Vfunc_round_pack32__11635__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11635__adjusted;
    __Vfunc_round_pack32__11635__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11635__biased;
    __Vfunc_round_pack32__11635__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11647__Vfuncout;
    __Vfunc_round_pack32__11647__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11647__exponent;
    __Vfunc_round_pack32__11647__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11647__shifted;
    __Vfunc_round_pack32__11647__shifted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11647__biased;
    __Vfunc_round_pack32__11647__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11659__Vfuncout;
    __Vfunc_round_pack32__11659__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11659__negative;
    __Vfunc_round_pack32__11659__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11659__exponent;
    __Vfunc_round_pack32__11659__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11659__significand;
    __Vfunc_round_pack32__11659__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11659__shifted;
    __Vfunc_round_pack32__11659__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11659__rounded;
    __Vfunc_round_pack32__11659__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11659__adjusted;
    __Vfunc_round_pack32__11659__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11659__biased;
    __Vfunc_round_pack32__11659__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11671__Vfuncout;
    __Vfunc_round_pack32__11671__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11671__negative;
    __Vfunc_round_pack32__11671__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11671__exponent;
    __Vfunc_round_pack32__11671__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11671__significand;
    __Vfunc_round_pack32__11671__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11671__shifted;
    __Vfunc_round_pack32__11671__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11671__rounded;
    __Vfunc_round_pack32__11671__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11671__adjusted;
    __Vfunc_round_pack32__11671__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11671__biased;
    __Vfunc_round_pack32__11671__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11683__Vfuncout;
    __Vfunc_round_pack32__11683__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11683__negative;
    __Vfunc_round_pack32__11683__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11683__exponent;
    __Vfunc_round_pack32__11683__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11683__significand;
    __Vfunc_round_pack32__11683__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11683__shifted;
    __Vfunc_round_pack32__11683__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11683__rounded;
    __Vfunc_round_pack32__11683__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11683__adjusted;
    __Vfunc_round_pack32__11683__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11683__biased;
    __Vfunc_round_pack32__11683__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11695__Vfuncout;
    __Vfunc_round_pack32__11695__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11695__negative;
    __Vfunc_round_pack32__11695__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11695__exponent;
    __Vfunc_round_pack32__11695__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11695__significand;
    __Vfunc_round_pack32__11695__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11695__shifted;
    __Vfunc_round_pack32__11695__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11695__rounded;
    __Vfunc_round_pack32__11695__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11695__adjusted;
    __Vfunc_round_pack32__11695__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11695__biased;
    __Vfunc_round_pack32__11695__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11707__Vfuncout;
    __Vfunc_round_pack32__11707__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11707__negative;
    __Vfunc_round_pack32__11707__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11707__exponent;
    __Vfunc_round_pack32__11707__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11707__significand;
    __Vfunc_round_pack32__11707__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11707__shifted;
    __Vfunc_round_pack32__11707__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11707__rounded;
    __Vfunc_round_pack32__11707__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11707__adjusted;
    __Vfunc_round_pack32__11707__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11707__biased;
    __Vfunc_round_pack32__11707__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11719__Vfuncout;
    __Vfunc_round_pack32__11719__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11719__negative;
    __Vfunc_round_pack32__11719__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11719__exponent;
    __Vfunc_round_pack32__11719__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11719__significand;
    __Vfunc_round_pack32__11719__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11719__shifted;
    __Vfunc_round_pack32__11719__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11719__rounded;
    __Vfunc_round_pack32__11719__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11719__adjusted;
    __Vfunc_round_pack32__11719__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11719__biased;
    __Vfunc_round_pack32__11719__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11731__Vfuncout;
    __Vfunc_round_pack32__11731__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11731__negative;
    __Vfunc_round_pack32__11731__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11731__exponent;
    __Vfunc_round_pack32__11731__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11731__significand;
    __Vfunc_round_pack32__11731__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11731__shifted;
    __Vfunc_round_pack32__11731__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11731__rounded;
    __Vfunc_round_pack32__11731__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11731__adjusted;
    __Vfunc_round_pack32__11731__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11731__biased;
    __Vfunc_round_pack32__11731__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11743__Vfuncout;
    __Vfunc_round_pack32__11743__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11743__negative;
    __Vfunc_round_pack32__11743__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11743__exponent;
    __Vfunc_round_pack32__11743__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11743__significand;
    __Vfunc_round_pack32__11743__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11743__shifted;
    __Vfunc_round_pack32__11743__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11743__rounded;
    __Vfunc_round_pack32__11743__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11743__adjusted;
    __Vfunc_round_pack32__11743__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11743__biased;
    __Vfunc_round_pack32__11743__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11755__Vfuncout;
    __Vfunc_round_pack32__11755__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11755__negative;
    __Vfunc_round_pack32__11755__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11755__exponent;
    __Vfunc_round_pack32__11755__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11755__significand;
    __Vfunc_round_pack32__11755__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11755__shifted;
    __Vfunc_round_pack32__11755__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11755__rounded;
    __Vfunc_round_pack32__11755__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11755__adjusted;
    __Vfunc_round_pack32__11755__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11755__biased;
    __Vfunc_round_pack32__11755__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11767__Vfuncout;
    __Vfunc_round_pack32__11767__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11767__negative;
    __Vfunc_round_pack32__11767__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11767__exponent;
    __Vfunc_round_pack32__11767__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11767__significand;
    __Vfunc_round_pack32__11767__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11767__shifted;
    __Vfunc_round_pack32__11767__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11767__rounded;
    __Vfunc_round_pack32__11767__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11767__adjusted;
    __Vfunc_round_pack32__11767__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11767__biased;
    __Vfunc_round_pack32__11767__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11779__Vfuncout;
    __Vfunc_round_pack32__11779__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11779__negative;
    __Vfunc_round_pack32__11779__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11779__exponent;
    __Vfunc_round_pack32__11779__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11779__significand;
    __Vfunc_round_pack32__11779__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11779__shifted;
    __Vfunc_round_pack32__11779__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11779__rounded;
    __Vfunc_round_pack32__11779__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11779__adjusted;
    __Vfunc_round_pack32__11779__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11779__biased;
    __Vfunc_round_pack32__11779__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11791__Vfuncout;
    __Vfunc_round_pack32__11791__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11791__negative;
    __Vfunc_round_pack32__11791__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11791__exponent;
    __Vfunc_round_pack32__11791__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11791__significand;
    __Vfunc_round_pack32__11791__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11791__shifted;
    __Vfunc_round_pack32__11791__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11791__rounded;
    __Vfunc_round_pack32__11791__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11791__adjusted;
    __Vfunc_round_pack32__11791__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11791__biased;
    __Vfunc_round_pack32__11791__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11803__Vfuncout;
    __Vfunc_round_pack32__11803__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11803__negative;
    __Vfunc_round_pack32__11803__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11803__exponent;
    __Vfunc_round_pack32__11803__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11803__significand;
    __Vfunc_round_pack32__11803__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11803__shifted;
    __Vfunc_round_pack32__11803__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11803__rounded;
    __Vfunc_round_pack32__11803__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11803__adjusted;
    __Vfunc_round_pack32__11803__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11803__biased;
    __Vfunc_round_pack32__11803__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11815__Vfuncout;
    __Vfunc_round_pack32__11815__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11815__negative;
    __Vfunc_round_pack32__11815__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11815__exponent;
    __Vfunc_round_pack32__11815__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11815__significand;
    __Vfunc_round_pack32__11815__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11815__shifted;
    __Vfunc_round_pack32__11815__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11815__rounded;
    __Vfunc_round_pack32__11815__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11815__adjusted;
    __Vfunc_round_pack32__11815__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11815__biased;
    __Vfunc_round_pack32__11815__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11827__Vfuncout;
    __Vfunc_round_pack32__11827__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11827__negative;
    __Vfunc_round_pack32__11827__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11827__exponent;
    __Vfunc_round_pack32__11827__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11827__significand;
    __Vfunc_round_pack32__11827__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11827__shifted;
    __Vfunc_round_pack32__11827__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11827__rounded;
    __Vfunc_round_pack32__11827__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11827__adjusted;
    __Vfunc_round_pack32__11827__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11827__biased;
    __Vfunc_round_pack32__11827__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11839__Vfuncout;
    __Vfunc_round_pack32__11839__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11839__negative;
    __Vfunc_round_pack32__11839__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11839__exponent;
    __Vfunc_round_pack32__11839__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11839__significand;
    __Vfunc_round_pack32__11839__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11839__shifted;
    __Vfunc_round_pack32__11839__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11839__rounded;
    __Vfunc_round_pack32__11839__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11839__adjusted;
    __Vfunc_round_pack32__11839__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11839__biased;
    __Vfunc_round_pack32__11839__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11851__Vfuncout;
    __Vfunc_round_pack32__11851__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11851__negative;
    __Vfunc_round_pack32__11851__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11851__exponent;
    __Vfunc_round_pack32__11851__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11851__significand;
    __Vfunc_round_pack32__11851__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11851__shifted;
    __Vfunc_round_pack32__11851__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11851__rounded;
    __Vfunc_round_pack32__11851__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11851__adjusted;
    __Vfunc_round_pack32__11851__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11851__biased;
    __Vfunc_round_pack32__11851__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11863__Vfuncout;
    __Vfunc_round_pack32__11863__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11863__negative;
    __Vfunc_round_pack32__11863__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11863__exponent;
    __Vfunc_round_pack32__11863__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11863__significand;
    __Vfunc_round_pack32__11863__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11863__shifted;
    __Vfunc_round_pack32__11863__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11863__rounded;
    __Vfunc_round_pack32__11863__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11863__adjusted;
    __Vfunc_round_pack32__11863__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11863__biased;
    __Vfunc_round_pack32__11863__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11875__Vfuncout;
    __Vfunc_round_pack32__11875__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11875__negative;
    __Vfunc_round_pack32__11875__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11875__exponent;
    __Vfunc_round_pack32__11875__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11875__significand;
    __Vfunc_round_pack32__11875__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11875__shifted;
    __Vfunc_round_pack32__11875__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11875__rounded;
    __Vfunc_round_pack32__11875__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11875__adjusted;
    __Vfunc_round_pack32__11875__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11875__biased;
    __Vfunc_round_pack32__11875__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11887__Vfuncout;
    __Vfunc_round_pack32__11887__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11887__negative;
    __Vfunc_round_pack32__11887__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11887__exponent;
    __Vfunc_round_pack32__11887__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11887__significand;
    __Vfunc_round_pack32__11887__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11887__shifted;
    __Vfunc_round_pack32__11887__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11887__rounded;
    __Vfunc_round_pack32__11887__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11887__adjusted;
    __Vfunc_round_pack32__11887__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11887__biased;
    __Vfunc_round_pack32__11887__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11899__Vfuncout;
    __Vfunc_round_pack32__11899__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11899__negative;
    __Vfunc_round_pack32__11899__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11899__exponent;
    __Vfunc_round_pack32__11899__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11899__significand;
    __Vfunc_round_pack32__11899__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11899__shifted;
    __Vfunc_round_pack32__11899__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11899__rounded;
    __Vfunc_round_pack32__11899__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11899__adjusted;
    __Vfunc_round_pack32__11899__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11899__biased;
    __Vfunc_round_pack32__11899__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11911__Vfuncout;
    __Vfunc_round_pack32__11911__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11911__negative;
    __Vfunc_round_pack32__11911__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11911__exponent;
    __Vfunc_round_pack32__11911__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11911__significand;
    __Vfunc_round_pack32__11911__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11911__shifted;
    __Vfunc_round_pack32__11911__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11911__rounded;
    __Vfunc_round_pack32__11911__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11911__adjusted;
    __Vfunc_round_pack32__11911__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11911__biased;
    __Vfunc_round_pack32__11911__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11923__Vfuncout;
    __Vfunc_round_pack32__11923__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11923__negative;
    __Vfunc_round_pack32__11923__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11923__exponent;
    __Vfunc_round_pack32__11923__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11923__significand;
    __Vfunc_round_pack32__11923__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11923__shifted;
    __Vfunc_round_pack32__11923__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11923__rounded;
    __Vfunc_round_pack32__11923__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11923__adjusted;
    __Vfunc_round_pack32__11923__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11923__biased;
    __Vfunc_round_pack32__11923__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11935__Vfuncout;
    __Vfunc_round_pack32__11935__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11935__negative;
    __Vfunc_round_pack32__11935__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11935__exponent;
    __Vfunc_round_pack32__11935__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11935__significand;
    __Vfunc_round_pack32__11935__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11935__shifted;
    __Vfunc_round_pack32__11935__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11935__rounded;
    __Vfunc_round_pack32__11935__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11935__adjusted;
    __Vfunc_round_pack32__11935__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11935__biased;
    __Vfunc_round_pack32__11935__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11947__Vfuncout;
    __Vfunc_round_pack32__11947__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11947__negative;
    __Vfunc_round_pack32__11947__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11947__exponent;
    __Vfunc_round_pack32__11947__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11947__significand;
    __Vfunc_round_pack32__11947__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11947__shifted;
    __Vfunc_round_pack32__11947__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11947__rounded;
    __Vfunc_round_pack32__11947__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11947__adjusted;
    __Vfunc_round_pack32__11947__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11947__biased;
    __Vfunc_round_pack32__11947__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11959__Vfuncout;
    __Vfunc_round_pack32__11959__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11959__negative;
    __Vfunc_round_pack32__11959__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11959__exponent;
    __Vfunc_round_pack32__11959__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11959__significand;
    __Vfunc_round_pack32__11959__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11959__shifted;
    __Vfunc_round_pack32__11959__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11959__rounded;
    __Vfunc_round_pack32__11959__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11959__adjusted;
    __Vfunc_round_pack32__11959__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11959__biased;
    __Vfunc_round_pack32__11959__biased = 0;
    // Body
    __Vfunc_round_pack32__374__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (vlSelf->__Vfunc_round_pack32__374__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((vlSelf->__Vfunc_round_pack32__374__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & vlSelf->__Vfunc_round_pack32__374__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__374__rounded)) {
        __Vfunc_round_pack32__374__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__374__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__374__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__374__adjusted)));
    }
    __Vfunc_round_pack32__374__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__374__rounded)) {
        __Vfunc_round_pack32__374__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(vlSelf->__Vfunc_round_pack32__374__adjusted)));
    }
    __Vfunc_round_pack32__374__Vfuncout = (((0U == vlSelf->__Vfunc_round_pack32__374__significand) 
                                            | (0U == __Vfunc_round_pack32__374__rounded))
                                            ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__374__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__374__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(vlSelf->__Vfunc_round_pack32__374__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__374__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__374__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__374__Vfuncout;
    __Vfunc_round_pack32__368__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__368__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__368__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__368__adjusted = __Vfunc_round_pack32__368__exponent;
    __Vfunc_round_pack32__368__shifted = __Vfunc_round_pack32__368__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__368__exponent))) {
        vlSelf->__Vfunc_shift_jam27__369__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__368__exponent)));
        vlSelf->__Vfunc_shift_jam27__369__value = __Vfunc_round_pack32__368__significand;
        __Vfunc_round_pack32__368__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__369__distance))) {
            vlSelf->__Vfunc_shift_jam27__369__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__369__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__369__distance))) {
            vlSelf->__Vfunc_shift_jam27__369__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__369__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__369__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__369__value, (IData)(vlSelf->__Vfunc_shift_jam27__369__distance)));
            vlSelf->__Vfunc_shift_jam27__369__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__369__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__369__distance)))));
            vlSelf->__Vfunc_shift_jam27__369__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__369__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__369__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__369__discarded))));
        }
        __Vfunc_round_pack32__368__shifted = vlSelf->__Vfunc_shift_jam27__369__Vfuncout;
    }
    __Vfunc_round_pack32__368__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__368__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__368__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__368__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__368__rounded)) {
        __Vfunc_round_pack32__368__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__368__rounded, 1U));
        __Vfunc_round_pack32__368__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__368__adjusted)));
    }
    __Vfunc_round_pack32__368__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__368__rounded)) {
        __Vfunc_round_pack32__368__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__368__adjusted)));
    }
    __Vfunc_round_pack32__368__Vfuncout = (((0U == __Vfunc_round_pack32__368__significand) 
                                            | (0U == __Vfunc_round_pack32__368__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__368__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__368__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__368__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__368__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__368__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__368__Vfuncout;
    __Vfunc_round_pack32__362__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__362__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__362__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__362__adjusted = __Vfunc_round_pack32__362__exponent;
    __Vfunc_round_pack32__362__shifted = __Vfunc_round_pack32__362__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__362__exponent))) {
        vlSelf->__Vfunc_shift_jam27__363__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__362__exponent)));
        vlSelf->__Vfunc_shift_jam27__363__value = __Vfunc_round_pack32__362__significand;
        __Vfunc_round_pack32__362__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__363__distance))) {
            vlSelf->__Vfunc_shift_jam27__363__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__363__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__363__distance))) {
            vlSelf->__Vfunc_shift_jam27__363__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__363__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__363__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__363__value, (IData)(vlSelf->__Vfunc_shift_jam27__363__distance)));
            vlSelf->__Vfunc_shift_jam27__363__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__363__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__363__distance)))));
            vlSelf->__Vfunc_shift_jam27__363__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__363__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__363__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__363__discarded))));
        }
        __Vfunc_round_pack32__362__shifted = vlSelf->__Vfunc_shift_jam27__363__Vfuncout;
    }
    __Vfunc_round_pack32__362__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__362__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__362__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__362__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__362__rounded)) {
        __Vfunc_round_pack32__362__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__362__rounded, 1U));
        __Vfunc_round_pack32__362__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__362__adjusted)));
    }
    __Vfunc_round_pack32__362__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__362__rounded)) {
        __Vfunc_round_pack32__362__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__362__adjusted)));
    }
    __Vfunc_round_pack32__362__Vfuncout = (((0U == __Vfunc_round_pack32__362__significand) 
                                            | (0U == __Vfunc_round_pack32__362__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__362__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__362__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__362__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__362__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__362__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__362__Vfuncout;
    __Vfunc_round_pack32__356__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__356__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__356__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__356__adjusted = __Vfunc_round_pack32__356__exponent;
    __Vfunc_round_pack32__356__shifted = __Vfunc_round_pack32__356__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__356__exponent))) {
        vlSelf->__Vfunc_shift_jam27__357__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__356__exponent)));
        vlSelf->__Vfunc_shift_jam27__357__value = __Vfunc_round_pack32__356__significand;
        __Vfunc_round_pack32__356__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__357__distance))) {
            vlSelf->__Vfunc_shift_jam27__357__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__357__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__357__distance))) {
            vlSelf->__Vfunc_shift_jam27__357__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__357__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__357__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__357__value, (IData)(vlSelf->__Vfunc_shift_jam27__357__distance)));
            vlSelf->__Vfunc_shift_jam27__357__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__357__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__357__distance)))));
            vlSelf->__Vfunc_shift_jam27__357__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__357__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__357__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__357__discarded))));
        }
        __Vfunc_round_pack32__356__shifted = vlSelf->__Vfunc_shift_jam27__357__Vfuncout;
    }
    __Vfunc_round_pack32__356__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__356__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__356__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__356__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__356__rounded)) {
        __Vfunc_round_pack32__356__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__356__rounded, 1U));
        __Vfunc_round_pack32__356__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__356__adjusted)));
    }
    __Vfunc_round_pack32__356__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__356__rounded)) {
        __Vfunc_round_pack32__356__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__356__adjusted)));
    }
    __Vfunc_round_pack32__356__Vfuncout = (((0U == __Vfunc_round_pack32__356__significand) 
                                            | (0U == __Vfunc_round_pack32__356__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__356__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__356__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__356__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__356__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__356__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__356__Vfuncout;
    __Vfunc_round_pack32__350__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__350__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__350__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__350__adjusted = __Vfunc_round_pack32__350__exponent;
    __Vfunc_round_pack32__350__shifted = __Vfunc_round_pack32__350__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__350__exponent))) {
        vlSelf->__Vfunc_shift_jam27__351__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__350__exponent)));
        vlSelf->__Vfunc_shift_jam27__351__value = __Vfunc_round_pack32__350__significand;
        __Vfunc_round_pack32__350__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__351__distance))) {
            vlSelf->__Vfunc_shift_jam27__351__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__351__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__351__distance))) {
            vlSelf->__Vfunc_shift_jam27__351__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__351__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__351__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__351__value, (IData)(vlSelf->__Vfunc_shift_jam27__351__distance)));
            vlSelf->__Vfunc_shift_jam27__351__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__351__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__351__distance)))));
            vlSelf->__Vfunc_shift_jam27__351__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__351__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__351__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__351__discarded))));
        }
        __Vfunc_round_pack32__350__shifted = vlSelf->__Vfunc_shift_jam27__351__Vfuncout;
    }
    __Vfunc_round_pack32__350__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__350__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__350__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__350__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__350__rounded)) {
        __Vfunc_round_pack32__350__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__350__rounded, 1U));
        __Vfunc_round_pack32__350__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__350__adjusted)));
    }
    __Vfunc_round_pack32__350__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__350__rounded)) {
        __Vfunc_round_pack32__350__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__350__adjusted)));
    }
    __Vfunc_round_pack32__350__Vfuncout = (((0U == __Vfunc_round_pack32__350__significand) 
                                            | (0U == __Vfunc_round_pack32__350__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__350__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__350__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__350__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__350__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__350__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__350__Vfuncout;
    __Vfunc_round_pack32__344__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__344__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__344__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__344__adjusted = __Vfunc_round_pack32__344__exponent;
    __Vfunc_round_pack32__344__shifted = __Vfunc_round_pack32__344__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__344__exponent))) {
        vlSelf->__Vfunc_shift_jam27__345__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__344__exponent)));
        vlSelf->__Vfunc_shift_jam27__345__value = __Vfunc_round_pack32__344__significand;
        __Vfunc_round_pack32__344__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__345__distance))) {
            vlSelf->__Vfunc_shift_jam27__345__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__345__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__345__distance))) {
            vlSelf->__Vfunc_shift_jam27__345__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__345__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__345__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__345__value, (IData)(vlSelf->__Vfunc_shift_jam27__345__distance)));
            vlSelf->__Vfunc_shift_jam27__345__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__345__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__345__distance)))));
            vlSelf->__Vfunc_shift_jam27__345__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__345__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__345__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__345__discarded))));
        }
        __Vfunc_round_pack32__344__shifted = vlSelf->__Vfunc_shift_jam27__345__Vfuncout;
    }
    __Vfunc_round_pack32__344__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__344__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__344__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__344__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__344__rounded)) {
        __Vfunc_round_pack32__344__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__344__rounded, 1U));
        __Vfunc_round_pack32__344__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__344__adjusted)));
    }
    __Vfunc_round_pack32__344__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__344__rounded)) {
        __Vfunc_round_pack32__344__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__344__adjusted)));
    }
    __Vfunc_round_pack32__344__Vfuncout = (((0U == __Vfunc_round_pack32__344__significand) 
                                            | (0U == __Vfunc_round_pack32__344__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__344__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__344__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__344__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__344__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__344__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__344__Vfuncout;
    __Vfunc_round_pack32__338__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__338__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__338__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__338__adjusted = __Vfunc_round_pack32__338__exponent;
    __Vfunc_round_pack32__338__shifted = __Vfunc_round_pack32__338__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__338__exponent))) {
        vlSelf->__Vfunc_shift_jam27__339__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__338__exponent)));
        vlSelf->__Vfunc_shift_jam27__339__value = __Vfunc_round_pack32__338__significand;
        __Vfunc_round_pack32__338__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__339__distance))) {
            vlSelf->__Vfunc_shift_jam27__339__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__339__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__339__distance))) {
            vlSelf->__Vfunc_shift_jam27__339__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__339__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__339__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__339__value, (IData)(vlSelf->__Vfunc_shift_jam27__339__distance)));
            vlSelf->__Vfunc_shift_jam27__339__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__339__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__339__distance)))));
            vlSelf->__Vfunc_shift_jam27__339__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__339__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__339__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__339__discarded))));
        }
        __Vfunc_round_pack32__338__shifted = vlSelf->__Vfunc_shift_jam27__339__Vfuncout;
    }
    __Vfunc_round_pack32__338__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__338__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__338__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__338__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__338__rounded)) {
        __Vfunc_round_pack32__338__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__338__rounded, 1U));
        __Vfunc_round_pack32__338__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__338__adjusted)));
    }
    __Vfunc_round_pack32__338__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__338__rounded)) {
        __Vfunc_round_pack32__338__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__338__adjusted)));
    }
    __Vfunc_round_pack32__338__Vfuncout = (((0U == __Vfunc_round_pack32__338__significand) 
                                            | (0U == __Vfunc_round_pack32__338__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__338__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__338__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__338__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__338__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__338__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__338__Vfuncout;
    __Vfunc_round_pack32__332__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__332__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__332__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__332__adjusted = __Vfunc_round_pack32__332__exponent;
    __Vfunc_round_pack32__332__shifted = __Vfunc_round_pack32__332__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__332__exponent))) {
        vlSelf->__Vfunc_shift_jam27__333__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__332__exponent)));
        vlSelf->__Vfunc_shift_jam27__333__value = __Vfunc_round_pack32__332__significand;
        __Vfunc_round_pack32__332__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__333__distance))) {
            vlSelf->__Vfunc_shift_jam27__333__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__333__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__333__distance))) {
            vlSelf->__Vfunc_shift_jam27__333__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__333__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__333__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__333__value, (IData)(vlSelf->__Vfunc_shift_jam27__333__distance)));
            vlSelf->__Vfunc_shift_jam27__333__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__333__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__333__distance)))));
            vlSelf->__Vfunc_shift_jam27__333__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__333__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__333__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__333__discarded))));
        }
        __Vfunc_round_pack32__332__shifted = vlSelf->__Vfunc_shift_jam27__333__Vfuncout;
    }
    __Vfunc_round_pack32__332__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__332__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__332__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__332__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__332__rounded)) {
        __Vfunc_round_pack32__332__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__332__rounded, 1U));
        __Vfunc_round_pack32__332__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__332__adjusted)));
    }
    __Vfunc_round_pack32__332__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__332__rounded)) {
        __Vfunc_round_pack32__332__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__332__adjusted)));
    }
    __Vfunc_round_pack32__332__Vfuncout = (((0U == __Vfunc_round_pack32__332__significand) 
                                            | (0U == __Vfunc_round_pack32__332__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__332__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__332__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__332__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__332__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__332__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__332__Vfuncout;
    __Vfunc_round_pack32__326__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__326__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__326__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__326__adjusted = __Vfunc_round_pack32__326__exponent;
    __Vfunc_round_pack32__326__shifted = __Vfunc_round_pack32__326__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__326__exponent))) {
        vlSelf->__Vfunc_shift_jam27__327__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__326__exponent)));
        vlSelf->__Vfunc_shift_jam27__327__value = __Vfunc_round_pack32__326__significand;
        __Vfunc_round_pack32__326__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__327__distance))) {
            vlSelf->__Vfunc_shift_jam27__327__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__327__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__327__distance))) {
            vlSelf->__Vfunc_shift_jam27__327__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__327__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__327__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__327__value, (IData)(vlSelf->__Vfunc_shift_jam27__327__distance)));
            vlSelf->__Vfunc_shift_jam27__327__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__327__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__327__distance)))));
            vlSelf->__Vfunc_shift_jam27__327__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__327__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__327__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__327__discarded))));
        }
        __Vfunc_round_pack32__326__shifted = vlSelf->__Vfunc_shift_jam27__327__Vfuncout;
    }
    __Vfunc_round_pack32__326__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__326__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__326__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__326__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__326__rounded)) {
        __Vfunc_round_pack32__326__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__326__rounded, 1U));
        __Vfunc_round_pack32__326__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__326__adjusted)));
    }
    __Vfunc_round_pack32__326__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__326__rounded)) {
        __Vfunc_round_pack32__326__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__326__adjusted)));
    }
    __Vfunc_round_pack32__326__Vfuncout = (((0U == __Vfunc_round_pack32__326__significand) 
                                            | (0U == __Vfunc_round_pack32__326__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__326__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__326__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__326__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__326__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__326__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__326__Vfuncout;
    __Vfunc_round_pack32__320__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__320__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__320__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__320__adjusted = __Vfunc_round_pack32__320__exponent;
    __Vfunc_round_pack32__320__shifted = __Vfunc_round_pack32__320__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__320__exponent))) {
        vlSelf->__Vfunc_shift_jam27__321__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__320__exponent)));
        vlSelf->__Vfunc_shift_jam27__321__value = __Vfunc_round_pack32__320__significand;
        __Vfunc_round_pack32__320__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__321__distance))) {
            vlSelf->__Vfunc_shift_jam27__321__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__321__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__321__distance))) {
            vlSelf->__Vfunc_shift_jam27__321__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__321__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__321__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__321__value, (IData)(vlSelf->__Vfunc_shift_jam27__321__distance)));
            vlSelf->__Vfunc_shift_jam27__321__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__321__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__321__distance)))));
            vlSelf->__Vfunc_shift_jam27__321__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__321__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__321__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__321__discarded))));
        }
        __Vfunc_round_pack32__320__shifted = vlSelf->__Vfunc_shift_jam27__321__Vfuncout;
    }
    __Vfunc_round_pack32__320__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__320__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__320__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__320__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__320__rounded)) {
        __Vfunc_round_pack32__320__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__320__rounded, 1U));
        __Vfunc_round_pack32__320__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__320__adjusted)));
    }
    __Vfunc_round_pack32__320__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__320__rounded)) {
        __Vfunc_round_pack32__320__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__320__adjusted)));
    }
    __Vfunc_round_pack32__320__Vfuncout = (((0U == __Vfunc_round_pack32__320__significand) 
                                            | (0U == __Vfunc_round_pack32__320__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__320__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__320__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__320__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__320__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__320__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__320__Vfuncout;
    __Vfunc_round_pack32__314__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__314__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__314__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__314__adjusted = __Vfunc_round_pack32__314__exponent;
    __Vfunc_round_pack32__314__shifted = __Vfunc_round_pack32__314__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__314__exponent))) {
        vlSelf->__Vfunc_shift_jam27__315__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__314__exponent)));
        vlSelf->__Vfunc_shift_jam27__315__value = __Vfunc_round_pack32__314__significand;
        __Vfunc_round_pack32__314__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__315__distance))) {
            vlSelf->__Vfunc_shift_jam27__315__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__315__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__315__distance))) {
            vlSelf->__Vfunc_shift_jam27__315__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__315__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__315__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__315__value, (IData)(vlSelf->__Vfunc_shift_jam27__315__distance)));
            vlSelf->__Vfunc_shift_jam27__315__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__315__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__315__distance)))));
            vlSelf->__Vfunc_shift_jam27__315__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__315__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__315__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__315__discarded))));
        }
        __Vfunc_round_pack32__314__shifted = vlSelf->__Vfunc_shift_jam27__315__Vfuncout;
    }
    __Vfunc_round_pack32__314__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__314__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__314__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__314__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__314__rounded)) {
        __Vfunc_round_pack32__314__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__314__rounded, 1U));
        __Vfunc_round_pack32__314__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__314__adjusted)));
    }
    __Vfunc_round_pack32__314__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__314__rounded)) {
        __Vfunc_round_pack32__314__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__314__adjusted)));
    }
    __Vfunc_round_pack32__314__Vfuncout = (((0U == __Vfunc_round_pack32__314__significand) 
                                            | (0U == __Vfunc_round_pack32__314__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__314__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__314__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__314__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__314__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__314__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__314__Vfuncout;
    __Vfunc_round_pack32__308__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__308__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__308__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__308__adjusted = __Vfunc_round_pack32__308__exponent;
    __Vfunc_round_pack32__308__shifted = __Vfunc_round_pack32__308__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__308__exponent))) {
        vlSelf->__Vfunc_shift_jam27__309__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__308__exponent)));
        vlSelf->__Vfunc_shift_jam27__309__value = __Vfunc_round_pack32__308__significand;
        __Vfunc_round_pack32__308__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__309__distance))) {
            vlSelf->__Vfunc_shift_jam27__309__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__309__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__309__distance))) {
            vlSelf->__Vfunc_shift_jam27__309__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__309__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__309__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__309__value, (IData)(vlSelf->__Vfunc_shift_jam27__309__distance)));
            vlSelf->__Vfunc_shift_jam27__309__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__309__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__309__distance)))));
            vlSelf->__Vfunc_shift_jam27__309__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__309__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__309__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__309__discarded))));
        }
        __Vfunc_round_pack32__308__shifted = vlSelf->__Vfunc_shift_jam27__309__Vfuncout;
    }
    __Vfunc_round_pack32__308__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__308__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__308__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__308__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__308__rounded)) {
        __Vfunc_round_pack32__308__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__308__rounded, 1U));
        __Vfunc_round_pack32__308__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__308__adjusted)));
    }
    __Vfunc_round_pack32__308__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__308__rounded)) {
        __Vfunc_round_pack32__308__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__308__adjusted)));
    }
    __Vfunc_round_pack32__308__Vfuncout = (((0U == __Vfunc_round_pack32__308__significand) 
                                            | (0U == __Vfunc_round_pack32__308__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__308__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__308__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__308__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__308__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__308__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__308__Vfuncout;
    __Vfunc_round_pack32__302__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__302__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__302__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__302__adjusted = __Vfunc_round_pack32__302__exponent;
    __Vfunc_round_pack32__302__shifted = __Vfunc_round_pack32__302__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__302__exponent))) {
        vlSelf->__Vfunc_shift_jam27__303__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__302__exponent)));
        vlSelf->__Vfunc_shift_jam27__303__value = __Vfunc_round_pack32__302__significand;
        __Vfunc_round_pack32__302__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__303__distance))) {
            vlSelf->__Vfunc_shift_jam27__303__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__303__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__303__distance))) {
            vlSelf->__Vfunc_shift_jam27__303__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__303__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__303__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__303__value, (IData)(vlSelf->__Vfunc_shift_jam27__303__distance)));
            vlSelf->__Vfunc_shift_jam27__303__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__303__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__303__distance)))));
            vlSelf->__Vfunc_shift_jam27__303__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__303__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__303__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__303__discarded))));
        }
        __Vfunc_round_pack32__302__shifted = vlSelf->__Vfunc_shift_jam27__303__Vfuncout;
    }
    __Vfunc_round_pack32__302__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__302__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__302__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__302__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__302__rounded)) {
        __Vfunc_round_pack32__302__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__302__rounded, 1U));
        __Vfunc_round_pack32__302__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__302__adjusted)));
    }
    __Vfunc_round_pack32__302__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__302__rounded)) {
        __Vfunc_round_pack32__302__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__302__adjusted)));
    }
    __Vfunc_round_pack32__302__Vfuncout = (((0U == __Vfunc_round_pack32__302__significand) 
                                            | (0U == __Vfunc_round_pack32__302__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__302__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__302__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__302__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__302__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__302__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__302__Vfuncout;
    __Vfunc_round_pack32__296__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__296__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__296__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__296__adjusted = __Vfunc_round_pack32__296__exponent;
    __Vfunc_round_pack32__296__shifted = __Vfunc_round_pack32__296__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__296__exponent))) {
        vlSelf->__Vfunc_shift_jam27__297__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__296__exponent)));
        vlSelf->__Vfunc_shift_jam27__297__value = __Vfunc_round_pack32__296__significand;
        __Vfunc_round_pack32__296__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__297__distance))) {
            vlSelf->__Vfunc_shift_jam27__297__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__297__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__297__distance))) {
            vlSelf->__Vfunc_shift_jam27__297__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__297__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__297__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__297__value, (IData)(vlSelf->__Vfunc_shift_jam27__297__distance)));
            vlSelf->__Vfunc_shift_jam27__297__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__297__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__297__distance)))));
            vlSelf->__Vfunc_shift_jam27__297__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__297__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__297__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__297__discarded))));
        }
        __Vfunc_round_pack32__296__shifted = vlSelf->__Vfunc_shift_jam27__297__Vfuncout;
    }
    __Vfunc_round_pack32__296__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__296__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__296__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__296__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__296__rounded)) {
        __Vfunc_round_pack32__296__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__296__rounded, 1U));
        __Vfunc_round_pack32__296__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__296__adjusted)));
    }
    __Vfunc_round_pack32__296__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__296__rounded)) {
        __Vfunc_round_pack32__296__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__296__adjusted)));
    }
    __Vfunc_round_pack32__296__Vfuncout = (((0U == __Vfunc_round_pack32__296__significand) 
                                            | (0U == __Vfunc_round_pack32__296__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__296__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__296__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__296__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__296__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__296__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__296__Vfuncout;
    vlSelf->__Vfunc_round_pack32__290__significand 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__290__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__exponent3;
    vlSelf->__Vfunc_round_pack32__290__negative = (1U 
                                                   & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__negative) 
                                                      >> 2U));
    vlSelf->__Vfunc_round_pack32__290__adjusted = __Vfunc_round_pack32__290__exponent;
    __Vfunc_round_pack32__290__shifted = vlSelf->__Vfunc_round_pack32__290__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__290__exponent))) {
        vlSelf->__Vfunc_shift_jam27__291__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__290__exponent)));
        vlSelf->__Vfunc_shift_jam27__291__value = vlSelf->__Vfunc_round_pack32__290__significand;
        vlSelf->__Vfunc_round_pack32__290__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__291__distance))) {
            vlSelf->__Vfunc_shift_jam27__291__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__291__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__291__distance))) {
            vlSelf->__Vfunc_shift_jam27__291__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__291__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__291__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__291__value, (IData)(vlSelf->__Vfunc_shift_jam27__291__distance)));
            vlSelf->__Vfunc_shift_jam27__291__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__291__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__291__distance)))));
            vlSelf->__Vfunc_shift_jam27__291__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__291__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__291__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__291__discarded))));
        }
        __Vfunc_round_pack32__290__shifted = vlSelf->__Vfunc_shift_jam27__291__Vfuncout;
    }
    vlSelf->__Vfunc_round_pack32__290__rounded = (0x1ffffffU 
                                                  & ((0xffffffU 
                                                      & (__Vfunc_round_pack32__290__shifted 
                                                         >> 3U)) 
                                                     + 
                                                     (1U 
                                                      & ((__Vfunc_round_pack32__290__shifted 
                                                          >> 2U) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xbU 
                                                                     & __Vfunc_round_pack32__290__shifted)))))));
    if ((0x1000000U & vlSelf->__Vfunc_round_pack32__290__rounded)) {
        vlSelf->__Vfunc_round_pack32__290__rounded 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__290__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__290__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__290__adjusted)));
    }
    __Vfunc_round_pack32__290__biased = 0U;
    if ((0x800000U & vlSelf->__Vfunc_round_pack32__290__rounded)) {
        __Vfunc_round_pack32__290__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(vlSelf->__Vfunc_round_pack32__290__adjusted)));
    }
    __Vfunc_round_pack32__290__Vfuncout = (((0U == vlSelf->__Vfunc_round_pack32__290__significand) 
                                            | (0U == vlSelf->__Vfunc_round_pack32__290__rounded))
                                            ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__290__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__290__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(vlSelf->__Vfunc_round_pack32__290__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__290__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & vlSelf->__Vfunc_round_pack32__290__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__290__Vfuncout;
    __Vfunc_round_pack32__284__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__284__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__284__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__284__adjusted = __Vfunc_round_pack32__284__exponent;
    __Vfunc_round_pack32__284__shifted = __Vfunc_round_pack32__284__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__284__exponent))) {
        vlSelf->__Vfunc_shift_jam27__285__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__284__exponent)));
        vlSelf->__Vfunc_shift_jam27__285__value = __Vfunc_round_pack32__284__significand;
        __Vfunc_round_pack32__284__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__285__distance))) {
            vlSelf->__Vfunc_shift_jam27__285__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__285__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__285__distance))) {
            vlSelf->__Vfunc_shift_jam27__285__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__285__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__285__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__285__value, (IData)(vlSelf->__Vfunc_shift_jam27__285__distance)));
            vlSelf->__Vfunc_shift_jam27__285__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__285__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__285__distance)))));
            vlSelf->__Vfunc_shift_jam27__285__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__285__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__285__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__285__discarded))));
        }
        __Vfunc_round_pack32__284__shifted = vlSelf->__Vfunc_shift_jam27__285__Vfuncout;
    }
    __Vfunc_round_pack32__284__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__284__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__284__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__284__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__284__rounded)) {
        __Vfunc_round_pack32__284__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__284__rounded, 1U));
        __Vfunc_round_pack32__284__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__284__adjusted)));
    }
    __Vfunc_round_pack32__284__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__284__rounded)) {
        __Vfunc_round_pack32__284__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__284__adjusted)));
    }
    __Vfunc_round_pack32__284__Vfuncout = (((0U == __Vfunc_round_pack32__284__significand) 
                                            | (0U == __Vfunc_round_pack32__284__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__284__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__284__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__284__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__284__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__284__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__284__Vfuncout;
    __Vfunc_round_pack32__278__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__278__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__278__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__278__adjusted = __Vfunc_round_pack32__278__exponent;
    __Vfunc_round_pack32__278__shifted = __Vfunc_round_pack32__278__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__278__exponent))) {
        vlSelf->__Vfunc_shift_jam27__279__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__278__exponent)));
        vlSelf->__Vfunc_shift_jam27__279__value = __Vfunc_round_pack32__278__significand;
        __Vfunc_round_pack32__278__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__279__distance))) {
            vlSelf->__Vfunc_shift_jam27__279__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__279__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__279__distance))) {
            vlSelf->__Vfunc_shift_jam27__279__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__279__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__279__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__279__value, (IData)(vlSelf->__Vfunc_shift_jam27__279__distance)));
            vlSelf->__Vfunc_shift_jam27__279__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__279__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__279__distance)))));
            vlSelf->__Vfunc_shift_jam27__279__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__279__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__279__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__279__discarded))));
        }
        __Vfunc_round_pack32__278__shifted = vlSelf->__Vfunc_shift_jam27__279__Vfuncout;
    }
    __Vfunc_round_pack32__278__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__278__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__278__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__278__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__278__rounded)) {
        __Vfunc_round_pack32__278__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__278__rounded, 1U));
        __Vfunc_round_pack32__278__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__278__adjusted)));
    }
    __Vfunc_round_pack32__278__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__278__rounded)) {
        __Vfunc_round_pack32__278__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__278__adjusted)));
    }
    __Vfunc_round_pack32__278__Vfuncout = (((0U == __Vfunc_round_pack32__278__significand) 
                                            | (0U == __Vfunc_round_pack32__278__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__278__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__278__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__278__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__278__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__278__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__278__Vfuncout;
    __Vfunc_round_pack32__272__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__272__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__272__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__272__adjusted = __Vfunc_round_pack32__272__exponent;
    __Vfunc_round_pack32__272__shifted = __Vfunc_round_pack32__272__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__272__exponent))) {
        vlSelf->__Vfunc_shift_jam27__273__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__272__exponent)));
        vlSelf->__Vfunc_shift_jam27__273__value = __Vfunc_round_pack32__272__significand;
        __Vfunc_round_pack32__272__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__273__distance))) {
            vlSelf->__Vfunc_shift_jam27__273__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__273__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__273__distance))) {
            vlSelf->__Vfunc_shift_jam27__273__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__273__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__273__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__273__value, (IData)(vlSelf->__Vfunc_shift_jam27__273__distance)));
            vlSelf->__Vfunc_shift_jam27__273__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__273__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__273__distance)))));
            vlSelf->__Vfunc_shift_jam27__273__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__273__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__273__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__273__discarded))));
        }
        __Vfunc_round_pack32__272__shifted = vlSelf->__Vfunc_shift_jam27__273__Vfuncout;
    }
    __Vfunc_round_pack32__272__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__272__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__272__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__272__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__272__rounded)) {
        __Vfunc_round_pack32__272__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__272__rounded, 1U));
        __Vfunc_round_pack32__272__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__272__adjusted)));
    }
    __Vfunc_round_pack32__272__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__272__rounded)) {
        __Vfunc_round_pack32__272__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__272__adjusted)));
    }
    __Vfunc_round_pack32__272__Vfuncout = (((0U == __Vfunc_round_pack32__272__significand) 
                                            | (0U == __Vfunc_round_pack32__272__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__272__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__272__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__272__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__272__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__272__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__272__Vfuncout;
    __Vfunc_round_pack32__266__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__266__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__266__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__266__adjusted = __Vfunc_round_pack32__266__exponent;
    __Vfunc_round_pack32__266__shifted = __Vfunc_round_pack32__266__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__266__exponent))) {
        vlSelf->__Vfunc_shift_jam27__267__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__266__exponent)));
        vlSelf->__Vfunc_shift_jam27__267__value = __Vfunc_round_pack32__266__significand;
        __Vfunc_round_pack32__266__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__267__distance))) {
            vlSelf->__Vfunc_shift_jam27__267__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__267__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__267__distance))) {
            vlSelf->__Vfunc_shift_jam27__267__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__267__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__267__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__267__value, (IData)(vlSelf->__Vfunc_shift_jam27__267__distance)));
            vlSelf->__Vfunc_shift_jam27__267__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__267__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__267__distance)))));
            vlSelf->__Vfunc_shift_jam27__267__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__267__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__267__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__267__discarded))));
        }
        __Vfunc_round_pack32__266__shifted = vlSelf->__Vfunc_shift_jam27__267__Vfuncout;
    }
    __Vfunc_round_pack32__266__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__266__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__266__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__266__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__266__rounded)) {
        __Vfunc_round_pack32__266__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__266__rounded, 1U));
        __Vfunc_round_pack32__266__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__266__adjusted)));
    }
    __Vfunc_round_pack32__266__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__266__rounded)) {
        __Vfunc_round_pack32__266__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__266__adjusted)));
    }
    __Vfunc_round_pack32__266__Vfuncout = (((0U == __Vfunc_round_pack32__266__significand) 
                                            | (0U == __Vfunc_round_pack32__266__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__266__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__266__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__266__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__266__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__266__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__266__Vfuncout;
    __Vfunc_round_pack32__260__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__260__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__260__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__260__adjusted = __Vfunc_round_pack32__260__exponent;
    __Vfunc_round_pack32__260__shifted = __Vfunc_round_pack32__260__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__260__exponent))) {
        vlSelf->__Vfunc_shift_jam27__261__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__260__exponent)));
        vlSelf->__Vfunc_shift_jam27__261__value = __Vfunc_round_pack32__260__significand;
        __Vfunc_round_pack32__260__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__261__distance))) {
            vlSelf->__Vfunc_shift_jam27__261__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__261__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__261__distance))) {
            vlSelf->__Vfunc_shift_jam27__261__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__261__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__261__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__261__value, (IData)(vlSelf->__Vfunc_shift_jam27__261__distance)));
            vlSelf->__Vfunc_shift_jam27__261__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__261__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__261__distance)))));
            vlSelf->__Vfunc_shift_jam27__261__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__261__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__261__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__261__discarded))));
        }
        __Vfunc_round_pack32__260__shifted = vlSelf->__Vfunc_shift_jam27__261__Vfuncout;
    }
    __Vfunc_round_pack32__260__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__260__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__260__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__260__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__260__rounded)) {
        __Vfunc_round_pack32__260__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__260__rounded, 1U));
        __Vfunc_round_pack32__260__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__260__adjusted)));
    }
    __Vfunc_round_pack32__260__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__260__rounded)) {
        __Vfunc_round_pack32__260__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__260__adjusted)));
    }
    __Vfunc_round_pack32__260__Vfuncout = (((0U == __Vfunc_round_pack32__260__significand) 
                                            | (0U == __Vfunc_round_pack32__260__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__260__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__260__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__260__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__260__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__260__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__260__Vfuncout;
    __Vfunc_round_pack32__254__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__254__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__254__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__254__adjusted = __Vfunc_round_pack32__254__exponent;
    __Vfunc_round_pack32__254__shifted = __Vfunc_round_pack32__254__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__254__exponent))) {
        vlSelf->__Vfunc_shift_jam27__255__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__254__exponent)));
        vlSelf->__Vfunc_shift_jam27__255__value = __Vfunc_round_pack32__254__significand;
        __Vfunc_round_pack32__254__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__255__distance))) {
            vlSelf->__Vfunc_shift_jam27__255__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__255__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__255__distance))) {
            vlSelf->__Vfunc_shift_jam27__255__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__255__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__255__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__255__value, (IData)(vlSelf->__Vfunc_shift_jam27__255__distance)));
            vlSelf->__Vfunc_shift_jam27__255__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__255__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__255__distance)))));
            vlSelf->__Vfunc_shift_jam27__255__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__255__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__255__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__255__discarded))));
        }
        __Vfunc_round_pack32__254__shifted = vlSelf->__Vfunc_shift_jam27__255__Vfuncout;
    }
    __Vfunc_round_pack32__254__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__254__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__254__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__254__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__254__rounded)) {
        __Vfunc_round_pack32__254__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__254__rounded, 1U));
        __Vfunc_round_pack32__254__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__254__adjusted)));
    }
    __Vfunc_round_pack32__254__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__254__rounded)) {
        __Vfunc_round_pack32__254__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__254__adjusted)));
    }
    __Vfunc_round_pack32__254__Vfuncout = (((0U == __Vfunc_round_pack32__254__significand) 
                                            | (0U == __Vfunc_round_pack32__254__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__254__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__254__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__254__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__254__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__254__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__254__Vfuncout;
    __Vfunc_round_pack32__248__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__248__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__248__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__248__adjusted = __Vfunc_round_pack32__248__exponent;
    __Vfunc_round_pack32__248__shifted = __Vfunc_round_pack32__248__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__248__exponent))) {
        vlSelf->__Vfunc_shift_jam27__249__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__248__exponent)));
        vlSelf->__Vfunc_shift_jam27__249__value = __Vfunc_round_pack32__248__significand;
        __Vfunc_round_pack32__248__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__249__distance))) {
            vlSelf->__Vfunc_shift_jam27__249__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__249__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__249__distance))) {
            vlSelf->__Vfunc_shift_jam27__249__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__249__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__249__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__249__value, (IData)(vlSelf->__Vfunc_shift_jam27__249__distance)));
            vlSelf->__Vfunc_shift_jam27__249__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__249__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__249__distance)))));
            vlSelf->__Vfunc_shift_jam27__249__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__249__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__249__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__249__discarded))));
        }
        __Vfunc_round_pack32__248__shifted = vlSelf->__Vfunc_shift_jam27__249__Vfuncout;
    }
    __Vfunc_round_pack32__248__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__248__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__248__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__248__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__248__rounded)) {
        __Vfunc_round_pack32__248__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__248__rounded, 1U));
        __Vfunc_round_pack32__248__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__248__adjusted)));
    }
    __Vfunc_round_pack32__248__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__248__rounded)) {
        __Vfunc_round_pack32__248__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__248__adjusted)));
    }
    __Vfunc_round_pack32__248__Vfuncout = (((0U == __Vfunc_round_pack32__248__significand) 
                                            | (0U == __Vfunc_round_pack32__248__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__248__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__248__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__248__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__248__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__248__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__248__Vfuncout;
    __Vfunc_round_pack32__242__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__242__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__242__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__242__adjusted = __Vfunc_round_pack32__242__exponent;
    __Vfunc_round_pack32__242__shifted = __Vfunc_round_pack32__242__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__242__exponent))) {
        vlSelf->__Vfunc_shift_jam27__243__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__242__exponent)));
        vlSelf->__Vfunc_shift_jam27__243__value = __Vfunc_round_pack32__242__significand;
        __Vfunc_round_pack32__242__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__243__distance))) {
            vlSelf->__Vfunc_shift_jam27__243__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__243__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__243__distance))) {
            vlSelf->__Vfunc_shift_jam27__243__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__243__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__243__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__243__value, (IData)(vlSelf->__Vfunc_shift_jam27__243__distance)));
            vlSelf->__Vfunc_shift_jam27__243__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__243__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__243__distance)))));
            vlSelf->__Vfunc_shift_jam27__243__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__243__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__243__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__243__discarded))));
        }
        __Vfunc_round_pack32__242__shifted = vlSelf->__Vfunc_shift_jam27__243__Vfuncout;
    }
    __Vfunc_round_pack32__242__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__242__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__242__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__242__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__242__rounded)) {
        __Vfunc_round_pack32__242__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__242__rounded, 1U));
        __Vfunc_round_pack32__242__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__242__adjusted)));
    }
    __Vfunc_round_pack32__242__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__242__rounded)) {
        __Vfunc_round_pack32__242__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__242__adjusted)));
    }
    __Vfunc_round_pack32__242__Vfuncout = (((0U == __Vfunc_round_pack32__242__significand) 
                                            | (0U == __Vfunc_round_pack32__242__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__242__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__242__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__242__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__242__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__242__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__242__Vfuncout;
    __Vfunc_round_pack32__236__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__236__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__236__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__236__adjusted = __Vfunc_round_pack32__236__exponent;
    __Vfunc_round_pack32__236__shifted = __Vfunc_round_pack32__236__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__236__exponent))) {
        vlSelf->__Vfunc_shift_jam27__237__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__236__exponent)));
        vlSelf->__Vfunc_shift_jam27__237__value = __Vfunc_round_pack32__236__significand;
        __Vfunc_round_pack32__236__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__237__distance))) {
            vlSelf->__Vfunc_shift_jam27__237__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__237__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__237__distance))) {
            vlSelf->__Vfunc_shift_jam27__237__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__237__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__237__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__237__value, (IData)(vlSelf->__Vfunc_shift_jam27__237__distance)));
            vlSelf->__Vfunc_shift_jam27__237__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__237__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__237__distance)))));
            vlSelf->__Vfunc_shift_jam27__237__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__237__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__237__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__237__discarded))));
        }
        __Vfunc_round_pack32__236__shifted = vlSelf->__Vfunc_shift_jam27__237__Vfuncout;
    }
    __Vfunc_round_pack32__236__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__236__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__236__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__236__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__236__rounded)) {
        __Vfunc_round_pack32__236__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__236__rounded, 1U));
        __Vfunc_round_pack32__236__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__236__adjusted)));
    }
    __Vfunc_round_pack32__236__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__236__rounded)) {
        __Vfunc_round_pack32__236__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__236__adjusted)));
    }
    __Vfunc_round_pack32__236__Vfuncout = (((0U == __Vfunc_round_pack32__236__significand) 
                                            | (0U == __Vfunc_round_pack32__236__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__236__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__236__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__236__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__236__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__236__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__236__Vfuncout;
    __Vfunc_round_pack32__230__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__230__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__230__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__230__adjusted = __Vfunc_round_pack32__230__exponent;
    __Vfunc_round_pack32__230__shifted = __Vfunc_round_pack32__230__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__230__exponent))) {
        vlSelf->__Vfunc_shift_jam27__231__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__230__exponent)));
        vlSelf->__Vfunc_shift_jam27__231__value = __Vfunc_round_pack32__230__significand;
        __Vfunc_round_pack32__230__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__231__distance))) {
            vlSelf->__Vfunc_shift_jam27__231__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__231__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__231__distance))) {
            vlSelf->__Vfunc_shift_jam27__231__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__231__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__231__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__231__value, (IData)(vlSelf->__Vfunc_shift_jam27__231__distance)));
            vlSelf->__Vfunc_shift_jam27__231__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__231__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__231__distance)))));
            vlSelf->__Vfunc_shift_jam27__231__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__231__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__231__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__231__discarded))));
        }
        __Vfunc_round_pack32__230__shifted = vlSelf->__Vfunc_shift_jam27__231__Vfuncout;
    }
    __Vfunc_round_pack32__230__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__230__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__230__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__230__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__230__rounded)) {
        __Vfunc_round_pack32__230__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__230__rounded, 1U));
        __Vfunc_round_pack32__230__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__230__adjusted)));
    }
    __Vfunc_round_pack32__230__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__230__rounded)) {
        __Vfunc_round_pack32__230__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__230__adjusted)));
    }
    __Vfunc_round_pack32__230__Vfuncout = (((0U == __Vfunc_round_pack32__230__significand) 
                                            | (0U == __Vfunc_round_pack32__230__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__230__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__230__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__230__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__230__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__230__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__230__Vfuncout;
    __Vfunc_round_pack32__224__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__224__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__224__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__224__adjusted = __Vfunc_round_pack32__224__exponent;
    __Vfunc_round_pack32__224__shifted = __Vfunc_round_pack32__224__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__224__exponent))) {
        vlSelf->__Vfunc_shift_jam27__225__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__224__exponent)));
        vlSelf->__Vfunc_shift_jam27__225__value = __Vfunc_round_pack32__224__significand;
        __Vfunc_round_pack32__224__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__225__distance))) {
            vlSelf->__Vfunc_shift_jam27__225__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__225__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__225__distance))) {
            vlSelf->__Vfunc_shift_jam27__225__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__225__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__225__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__225__value, (IData)(vlSelf->__Vfunc_shift_jam27__225__distance)));
            vlSelf->__Vfunc_shift_jam27__225__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__225__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__225__distance)))));
            vlSelf->__Vfunc_shift_jam27__225__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__225__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__225__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__225__discarded))));
        }
        __Vfunc_round_pack32__224__shifted = vlSelf->__Vfunc_shift_jam27__225__Vfuncout;
    }
    __Vfunc_round_pack32__224__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__224__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__224__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__224__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__224__rounded)) {
        __Vfunc_round_pack32__224__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__224__rounded, 1U));
        __Vfunc_round_pack32__224__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__224__adjusted)));
    }
    __Vfunc_round_pack32__224__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__224__rounded)) {
        __Vfunc_round_pack32__224__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__224__adjusted)));
    }
    __Vfunc_round_pack32__224__Vfuncout = (((0U == __Vfunc_round_pack32__224__significand) 
                                            | (0U == __Vfunc_round_pack32__224__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__224__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__224__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__224__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__224__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__224__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__224__Vfuncout;
    __Vfunc_round_pack32__218__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__218__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__218__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__218__adjusted = __Vfunc_round_pack32__218__exponent;
    __Vfunc_round_pack32__218__shifted = __Vfunc_round_pack32__218__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__218__exponent))) {
        vlSelf->__Vfunc_shift_jam27__219__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__218__exponent)));
        vlSelf->__Vfunc_shift_jam27__219__value = __Vfunc_round_pack32__218__significand;
        __Vfunc_round_pack32__218__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__219__distance))) {
            vlSelf->__Vfunc_shift_jam27__219__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__219__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__219__distance))) {
            vlSelf->__Vfunc_shift_jam27__219__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__219__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__219__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__219__value, (IData)(vlSelf->__Vfunc_shift_jam27__219__distance)));
            vlSelf->__Vfunc_shift_jam27__219__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__219__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__219__distance)))));
            vlSelf->__Vfunc_shift_jam27__219__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__219__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__219__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__219__discarded))));
        }
        __Vfunc_round_pack32__218__shifted = vlSelf->__Vfunc_shift_jam27__219__Vfuncout;
    }
    __Vfunc_round_pack32__218__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__218__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__218__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__218__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__218__rounded)) {
        __Vfunc_round_pack32__218__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__218__rounded, 1U));
        __Vfunc_round_pack32__218__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__218__adjusted)));
    }
    __Vfunc_round_pack32__218__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__218__rounded)) {
        __Vfunc_round_pack32__218__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__218__adjusted)));
    }
    __Vfunc_round_pack32__218__Vfuncout = (((0U == __Vfunc_round_pack32__218__significand) 
                                            | (0U == __Vfunc_round_pack32__218__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__218__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__218__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__218__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__218__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__218__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__218__Vfuncout;
    __Vfunc_round_pack32__212__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__212__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__212__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__212__adjusted = __Vfunc_round_pack32__212__exponent;
    __Vfunc_round_pack32__212__shifted = __Vfunc_round_pack32__212__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__212__exponent))) {
        vlSelf->__Vfunc_shift_jam27__213__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__212__exponent)));
        vlSelf->__Vfunc_shift_jam27__213__value = __Vfunc_round_pack32__212__significand;
        __Vfunc_round_pack32__212__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__213__distance))) {
            vlSelf->__Vfunc_shift_jam27__213__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__213__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__213__distance))) {
            vlSelf->__Vfunc_shift_jam27__213__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__213__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__213__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__213__value, (IData)(vlSelf->__Vfunc_shift_jam27__213__distance)));
            vlSelf->__Vfunc_shift_jam27__213__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__213__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__213__distance)))));
            vlSelf->__Vfunc_shift_jam27__213__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__213__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__213__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__213__discarded))));
        }
        __Vfunc_round_pack32__212__shifted = vlSelf->__Vfunc_shift_jam27__213__Vfuncout;
    }
    __Vfunc_round_pack32__212__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__212__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__212__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__212__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__212__rounded)) {
        __Vfunc_round_pack32__212__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__212__rounded, 1U));
        __Vfunc_round_pack32__212__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__212__adjusted)));
    }
    __Vfunc_round_pack32__212__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__212__rounded)) {
        __Vfunc_round_pack32__212__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__212__adjusted)));
    }
    __Vfunc_round_pack32__212__Vfuncout = (((0U == __Vfunc_round_pack32__212__significand) 
                                            | (0U == __Vfunc_round_pack32__212__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__212__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__212__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__212__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__212__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__212__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__212__Vfuncout;
    __Vfunc_round_pack32__206__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__206__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__206__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__206__adjusted = __Vfunc_round_pack32__206__exponent;
    __Vfunc_round_pack32__206__shifted = __Vfunc_round_pack32__206__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__206__exponent))) {
        vlSelf->__Vfunc_shift_jam27__207__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__206__exponent)));
        vlSelf->__Vfunc_shift_jam27__207__value = __Vfunc_round_pack32__206__significand;
        __Vfunc_round_pack32__206__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__207__distance))) {
            vlSelf->__Vfunc_shift_jam27__207__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__207__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__207__distance))) {
            vlSelf->__Vfunc_shift_jam27__207__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__207__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__207__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__207__value, (IData)(vlSelf->__Vfunc_shift_jam27__207__distance)));
            vlSelf->__Vfunc_shift_jam27__207__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__207__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__207__distance)))));
            vlSelf->__Vfunc_shift_jam27__207__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__207__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__207__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__207__discarded))));
        }
        __Vfunc_round_pack32__206__shifted = vlSelf->__Vfunc_shift_jam27__207__Vfuncout;
    }
    __Vfunc_round_pack32__206__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__206__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__206__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__206__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__206__rounded)) {
        __Vfunc_round_pack32__206__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__206__rounded, 1U));
        __Vfunc_round_pack32__206__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__206__adjusted)));
    }
    __Vfunc_round_pack32__206__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__206__rounded)) {
        __Vfunc_round_pack32__206__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__206__adjusted)));
    }
    __Vfunc_round_pack32__206__Vfuncout = (((0U == __Vfunc_round_pack32__206__significand) 
                                            | (0U == __Vfunc_round_pack32__206__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__206__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__206__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__206__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__206__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__206__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__206__Vfuncout;
    __Vfunc_round_pack32__200__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__200__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__200__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__200__adjusted = __Vfunc_round_pack32__200__exponent;
    __Vfunc_round_pack32__200__shifted = __Vfunc_round_pack32__200__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__200__exponent))) {
        vlSelf->__Vfunc_shift_jam27__201__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__200__exponent)));
        vlSelf->__Vfunc_shift_jam27__201__value = __Vfunc_round_pack32__200__significand;
        __Vfunc_round_pack32__200__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__201__distance))) {
            vlSelf->__Vfunc_shift_jam27__201__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__201__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__201__distance))) {
            vlSelf->__Vfunc_shift_jam27__201__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__201__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__201__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__201__value, (IData)(vlSelf->__Vfunc_shift_jam27__201__distance)));
            vlSelf->__Vfunc_shift_jam27__201__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__201__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__201__distance)))));
            vlSelf->__Vfunc_shift_jam27__201__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__201__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__201__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__201__discarded))));
        }
        __Vfunc_round_pack32__200__shifted = vlSelf->__Vfunc_shift_jam27__201__Vfuncout;
    }
    __Vfunc_round_pack32__200__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__200__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__200__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__200__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__200__rounded)) {
        __Vfunc_round_pack32__200__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__200__rounded, 1U));
        __Vfunc_round_pack32__200__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__200__adjusted)));
    }
    __Vfunc_round_pack32__200__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__200__rounded)) {
        __Vfunc_round_pack32__200__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__200__adjusted)));
    }
    __Vfunc_round_pack32__200__Vfuncout = (((0U == __Vfunc_round_pack32__200__significand) 
                                            | (0U == __Vfunc_round_pack32__200__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__200__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__200__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__200__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__200__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__200__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__200__Vfuncout;
    __Vfunc_round_pack32__194__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__194__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__194__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__194__adjusted = __Vfunc_round_pack32__194__exponent;
    __Vfunc_round_pack32__194__shifted = __Vfunc_round_pack32__194__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__194__exponent))) {
        vlSelf->__Vfunc_shift_jam27__195__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__194__exponent)));
        vlSelf->__Vfunc_shift_jam27__195__value = __Vfunc_round_pack32__194__significand;
        __Vfunc_round_pack32__194__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__195__distance))) {
            vlSelf->__Vfunc_shift_jam27__195__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__195__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__195__distance))) {
            vlSelf->__Vfunc_shift_jam27__195__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__195__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__195__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__195__value, (IData)(vlSelf->__Vfunc_shift_jam27__195__distance)));
            vlSelf->__Vfunc_shift_jam27__195__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__195__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__195__distance)))));
            vlSelf->__Vfunc_shift_jam27__195__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__195__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__195__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__195__discarded))));
        }
        __Vfunc_round_pack32__194__shifted = vlSelf->__Vfunc_shift_jam27__195__Vfuncout;
    }
    __Vfunc_round_pack32__194__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__194__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__194__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__194__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__194__rounded)) {
        __Vfunc_round_pack32__194__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__194__rounded, 1U));
        __Vfunc_round_pack32__194__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__194__adjusted)));
    }
    __Vfunc_round_pack32__194__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__194__rounded)) {
        __Vfunc_round_pack32__194__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__194__adjusted)));
    }
    __Vfunc_round_pack32__194__Vfuncout = (((0U == __Vfunc_round_pack32__194__significand) 
                                            | (0U == __Vfunc_round_pack32__194__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__194__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__194__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__194__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__194__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__194__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__194__Vfuncout;
    __Vfunc_round_pack32__188__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__188__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__188__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__188__adjusted = __Vfunc_round_pack32__188__exponent;
    __Vfunc_round_pack32__188__shifted = __Vfunc_round_pack32__188__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__188__exponent))) {
        vlSelf->__Vfunc_shift_jam27__189__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__188__exponent)));
        vlSelf->__Vfunc_shift_jam27__189__value = __Vfunc_round_pack32__188__significand;
        __Vfunc_round_pack32__188__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__189__distance))) {
            vlSelf->__Vfunc_shift_jam27__189__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__189__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__189__distance))) {
            vlSelf->__Vfunc_shift_jam27__189__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__189__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__189__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__189__value, (IData)(vlSelf->__Vfunc_shift_jam27__189__distance)));
            vlSelf->__Vfunc_shift_jam27__189__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__189__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__189__distance)))));
            vlSelf->__Vfunc_shift_jam27__189__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__189__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__189__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__189__discarded))));
        }
        __Vfunc_round_pack32__188__shifted = vlSelf->__Vfunc_shift_jam27__189__Vfuncout;
    }
    __Vfunc_round_pack32__188__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__188__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__188__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__188__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__188__rounded)) {
        __Vfunc_round_pack32__188__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__188__rounded, 1U));
        __Vfunc_round_pack32__188__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__188__adjusted)));
    }
    __Vfunc_round_pack32__188__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__188__rounded)) {
        __Vfunc_round_pack32__188__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__188__adjusted)));
    }
    __Vfunc_round_pack32__188__Vfuncout = (((0U == __Vfunc_round_pack32__188__significand) 
                                            | (0U == __Vfunc_round_pack32__188__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__188__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__188__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__188__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__188__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__188__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__188__Vfuncout;
    __Vfunc_round_pack32__182__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__182__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__182__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__182__adjusted = __Vfunc_round_pack32__182__exponent;
    __Vfunc_round_pack32__182__shifted = __Vfunc_round_pack32__182__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__182__exponent))) {
        vlSelf->__Vfunc_shift_jam27__183__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__182__exponent)));
        vlSelf->__Vfunc_shift_jam27__183__value = __Vfunc_round_pack32__182__significand;
        __Vfunc_round_pack32__182__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__183__distance))) {
            vlSelf->__Vfunc_shift_jam27__183__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__183__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__183__distance))) {
            vlSelf->__Vfunc_shift_jam27__183__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__183__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__183__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__183__value, (IData)(vlSelf->__Vfunc_shift_jam27__183__distance)));
            vlSelf->__Vfunc_shift_jam27__183__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__183__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__183__distance)))));
            vlSelf->__Vfunc_shift_jam27__183__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__183__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__183__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__183__discarded))));
        }
        __Vfunc_round_pack32__182__shifted = vlSelf->__Vfunc_shift_jam27__183__Vfuncout;
    }
    __Vfunc_round_pack32__182__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__182__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__182__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__182__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__182__rounded)) {
        __Vfunc_round_pack32__182__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__182__rounded, 1U));
        __Vfunc_round_pack32__182__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__182__adjusted)));
    }
    __Vfunc_round_pack32__182__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__182__rounded)) {
        __Vfunc_round_pack32__182__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__182__adjusted)));
    }
    __Vfunc_round_pack32__182__Vfuncout = (((0U == __Vfunc_round_pack32__182__significand) 
                                            | (0U == __Vfunc_round_pack32__182__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__182__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__182__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__182__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__182__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__182__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__182__Vfuncout;
    __Vfunc_round_pack32__176__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__176__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__176__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__176__adjusted = __Vfunc_round_pack32__176__exponent;
    __Vfunc_round_pack32__176__shifted = __Vfunc_round_pack32__176__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__176__exponent))) {
        vlSelf->__Vfunc_shift_jam27__177__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__176__exponent)));
        vlSelf->__Vfunc_shift_jam27__177__value = __Vfunc_round_pack32__176__significand;
        __Vfunc_round_pack32__176__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__177__distance))) {
            vlSelf->__Vfunc_shift_jam27__177__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__177__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__177__distance))) {
            vlSelf->__Vfunc_shift_jam27__177__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__177__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__177__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__177__value, (IData)(vlSelf->__Vfunc_shift_jam27__177__distance)));
            vlSelf->__Vfunc_shift_jam27__177__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__177__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__177__distance)))));
            vlSelf->__Vfunc_shift_jam27__177__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__177__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__177__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__177__discarded))));
        }
        __Vfunc_round_pack32__176__shifted = vlSelf->__Vfunc_shift_jam27__177__Vfuncout;
    }
    __Vfunc_round_pack32__176__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__176__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__176__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__176__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__176__rounded)) {
        __Vfunc_round_pack32__176__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__176__rounded, 1U));
        __Vfunc_round_pack32__176__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__176__adjusted)));
    }
    __Vfunc_round_pack32__176__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__176__rounded)) {
        __Vfunc_round_pack32__176__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__176__adjusted)));
    }
    __Vfunc_round_pack32__176__Vfuncout = (((0U == __Vfunc_round_pack32__176__significand) 
                                            | (0U == __Vfunc_round_pack32__176__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__176__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__176__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__176__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__176__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__176__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__176__Vfuncout;
    __Vfunc_round_pack32__170__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__170__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__170__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__170__adjusted = __Vfunc_round_pack32__170__exponent;
    __Vfunc_round_pack32__170__shifted = __Vfunc_round_pack32__170__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__170__exponent))) {
        vlSelf->__Vfunc_shift_jam27__171__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__170__exponent)));
        vlSelf->__Vfunc_shift_jam27__171__value = __Vfunc_round_pack32__170__significand;
        __Vfunc_round_pack32__170__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__171__distance))) {
            vlSelf->__Vfunc_shift_jam27__171__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__171__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__171__distance))) {
            vlSelf->__Vfunc_shift_jam27__171__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__171__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__171__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__171__value, (IData)(vlSelf->__Vfunc_shift_jam27__171__distance)));
            vlSelf->__Vfunc_shift_jam27__171__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__171__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__171__distance)))));
            vlSelf->__Vfunc_shift_jam27__171__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__171__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__171__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__171__discarded))));
        }
        __Vfunc_round_pack32__170__shifted = vlSelf->__Vfunc_shift_jam27__171__Vfuncout;
    }
    __Vfunc_round_pack32__170__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__170__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__170__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__170__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__170__rounded)) {
        __Vfunc_round_pack32__170__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__170__rounded, 1U));
        __Vfunc_round_pack32__170__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__170__adjusted)));
    }
    __Vfunc_round_pack32__170__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__170__rounded)) {
        __Vfunc_round_pack32__170__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__170__adjusted)));
    }
    __Vfunc_round_pack32__170__Vfuncout = (((0U == __Vfunc_round_pack32__170__significand) 
                                            | (0U == __Vfunc_round_pack32__170__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__170__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__170__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__170__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__170__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__170__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__170__Vfuncout;
    __Vfunc_round_pack32__164__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__164__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__164__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__164__adjusted = __Vfunc_round_pack32__164__exponent;
    __Vfunc_round_pack32__164__shifted = __Vfunc_round_pack32__164__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__164__exponent))) {
        vlSelf->__Vfunc_shift_jam27__165__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__164__exponent)));
        vlSelf->__Vfunc_shift_jam27__165__value = __Vfunc_round_pack32__164__significand;
        __Vfunc_round_pack32__164__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__165__distance))) {
            vlSelf->__Vfunc_shift_jam27__165__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__165__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__165__distance))) {
            vlSelf->__Vfunc_shift_jam27__165__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__165__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__165__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__165__value, (IData)(vlSelf->__Vfunc_shift_jam27__165__distance)));
            vlSelf->__Vfunc_shift_jam27__165__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__165__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__165__distance)))));
            vlSelf->__Vfunc_shift_jam27__165__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__165__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__165__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__165__discarded))));
        }
        __Vfunc_round_pack32__164__shifted = vlSelf->__Vfunc_shift_jam27__165__Vfuncout;
    }
    __Vfunc_round_pack32__164__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__164__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__164__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__164__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__164__rounded)) {
        __Vfunc_round_pack32__164__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__164__rounded, 1U));
        __Vfunc_round_pack32__164__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__164__adjusted)));
    }
    __Vfunc_round_pack32__164__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__164__rounded)) {
        __Vfunc_round_pack32__164__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__164__adjusted)));
    }
    __Vfunc_round_pack32__164__Vfuncout = (((0U == __Vfunc_round_pack32__164__significand) 
                                            | (0U == __Vfunc_round_pack32__164__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__164__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__164__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__164__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__164__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__164__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__164__Vfuncout;
    __Vfunc_round_pack32__158__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__158__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__158__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__158__adjusted = __Vfunc_round_pack32__158__exponent;
    __Vfunc_round_pack32__158__shifted = __Vfunc_round_pack32__158__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__158__exponent))) {
        vlSelf->__Vfunc_shift_jam27__159__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__158__exponent)));
        vlSelf->__Vfunc_shift_jam27__159__value = __Vfunc_round_pack32__158__significand;
        __Vfunc_round_pack32__158__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__159__distance))) {
            vlSelf->__Vfunc_shift_jam27__159__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__159__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__159__distance))) {
            vlSelf->__Vfunc_shift_jam27__159__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__159__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__159__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__159__value, (IData)(vlSelf->__Vfunc_shift_jam27__159__distance)));
            vlSelf->__Vfunc_shift_jam27__159__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__159__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__159__distance)))));
            vlSelf->__Vfunc_shift_jam27__159__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__159__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__159__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__159__discarded))));
        }
        __Vfunc_round_pack32__158__shifted = vlSelf->__Vfunc_shift_jam27__159__Vfuncout;
    }
    __Vfunc_round_pack32__158__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__158__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__158__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__158__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__158__rounded)) {
        __Vfunc_round_pack32__158__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__158__rounded, 1U));
        __Vfunc_round_pack32__158__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__158__adjusted)));
    }
    __Vfunc_round_pack32__158__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__158__rounded)) {
        __Vfunc_round_pack32__158__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__158__adjusted)));
    }
    __Vfunc_round_pack32__158__Vfuncout = (((0U == __Vfunc_round_pack32__158__significand) 
                                            | (0U == __Vfunc_round_pack32__158__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__158__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__158__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__158__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__158__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__158__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__158__Vfuncout;
    __Vfunc_round_pack32__152__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__152__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__152__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__152__adjusted = __Vfunc_round_pack32__152__exponent;
    __Vfunc_round_pack32__152__shifted = __Vfunc_round_pack32__152__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__152__exponent))) {
        vlSelf->__Vfunc_shift_jam27__153__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__152__exponent)));
        vlSelf->__Vfunc_shift_jam27__153__value = __Vfunc_round_pack32__152__significand;
        __Vfunc_round_pack32__152__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__153__distance))) {
            vlSelf->__Vfunc_shift_jam27__153__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__153__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__153__distance))) {
            vlSelf->__Vfunc_shift_jam27__153__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__153__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__153__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__153__value, (IData)(vlSelf->__Vfunc_shift_jam27__153__distance)));
            vlSelf->__Vfunc_shift_jam27__153__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__153__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__153__distance)))));
            vlSelf->__Vfunc_shift_jam27__153__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__153__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__153__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__153__discarded))));
        }
        __Vfunc_round_pack32__152__shifted = vlSelf->__Vfunc_shift_jam27__153__Vfuncout;
    }
    __Vfunc_round_pack32__152__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__152__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__152__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__152__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__152__rounded)) {
        __Vfunc_round_pack32__152__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__152__rounded, 1U));
        __Vfunc_round_pack32__152__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__152__adjusted)));
    }
    __Vfunc_round_pack32__152__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__152__rounded)) {
        __Vfunc_round_pack32__152__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__152__adjusted)));
    }
    __Vfunc_round_pack32__152__Vfuncout = (((0U == __Vfunc_round_pack32__152__significand) 
                                            | (0U == __Vfunc_round_pack32__152__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__152__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__152__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__152__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__152__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__152__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__152__Vfuncout;
    __Vfunc_round_pack32__146__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__146__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__146__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__146__adjusted = __Vfunc_round_pack32__146__exponent;
    __Vfunc_round_pack32__146__shifted = __Vfunc_round_pack32__146__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__146__exponent))) {
        vlSelf->__Vfunc_shift_jam27__147__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__146__exponent)));
        vlSelf->__Vfunc_shift_jam27__147__value = __Vfunc_round_pack32__146__significand;
        __Vfunc_round_pack32__146__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__147__distance))) {
            vlSelf->__Vfunc_shift_jam27__147__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__147__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__147__distance))) {
            vlSelf->__Vfunc_shift_jam27__147__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__147__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__147__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__147__value, (IData)(vlSelf->__Vfunc_shift_jam27__147__distance)));
            vlSelf->__Vfunc_shift_jam27__147__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__147__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__147__distance)))));
            vlSelf->__Vfunc_shift_jam27__147__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__147__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__147__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__147__discarded))));
        }
        __Vfunc_round_pack32__146__shifted = vlSelf->__Vfunc_shift_jam27__147__Vfuncout;
    }
    __Vfunc_round_pack32__146__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__146__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__146__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__146__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__146__rounded)) {
        __Vfunc_round_pack32__146__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__146__rounded, 1U));
        __Vfunc_round_pack32__146__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__146__adjusted)));
    }
    __Vfunc_round_pack32__146__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__146__rounded)) {
        __Vfunc_round_pack32__146__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__146__adjusted)));
    }
    __Vfunc_round_pack32__146__Vfuncout = (((0U == __Vfunc_round_pack32__146__significand) 
                                            | (0U == __Vfunc_round_pack32__146__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__146__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__146__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__146__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__146__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__146__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__146__Vfuncout;
    __Vfunc_round_pack32__140__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__140__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__140__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__140__adjusted = __Vfunc_round_pack32__140__exponent;
    __Vfunc_round_pack32__140__shifted = __Vfunc_round_pack32__140__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__140__exponent))) {
        vlSelf->__Vfunc_shift_jam27__141__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__140__exponent)));
        vlSelf->__Vfunc_shift_jam27__141__value = __Vfunc_round_pack32__140__significand;
        __Vfunc_round_pack32__140__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__141__distance))) {
            vlSelf->__Vfunc_shift_jam27__141__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__141__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__141__distance))) {
            vlSelf->__Vfunc_shift_jam27__141__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__141__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__141__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__141__value, (IData)(vlSelf->__Vfunc_shift_jam27__141__distance)));
            vlSelf->__Vfunc_shift_jam27__141__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__141__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__141__distance)))));
            vlSelf->__Vfunc_shift_jam27__141__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__141__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__141__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__141__discarded))));
        }
        __Vfunc_round_pack32__140__shifted = vlSelf->__Vfunc_shift_jam27__141__Vfuncout;
    }
    __Vfunc_round_pack32__140__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__140__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__140__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__140__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__140__rounded)) {
        __Vfunc_round_pack32__140__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__140__rounded, 1U));
        __Vfunc_round_pack32__140__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__140__adjusted)));
    }
    __Vfunc_round_pack32__140__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__140__rounded)) {
        __Vfunc_round_pack32__140__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__140__adjusted)));
    }
    __Vfunc_round_pack32__140__Vfuncout = (((0U == __Vfunc_round_pack32__140__significand) 
                                            | (0U == __Vfunc_round_pack32__140__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__140__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__140__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__140__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__140__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__140__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__140__Vfuncout;
    __Vfunc_round_pack32__134__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__134__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__134__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__134__adjusted = __Vfunc_round_pack32__134__exponent;
    __Vfunc_round_pack32__134__shifted = __Vfunc_round_pack32__134__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__134__exponent))) {
        vlSelf->__Vfunc_shift_jam27__135__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__134__exponent)));
        vlSelf->__Vfunc_shift_jam27__135__value = __Vfunc_round_pack32__134__significand;
        __Vfunc_round_pack32__134__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__135__distance))) {
            vlSelf->__Vfunc_shift_jam27__135__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__135__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__135__distance))) {
            vlSelf->__Vfunc_shift_jam27__135__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__135__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__135__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__135__value, (IData)(vlSelf->__Vfunc_shift_jam27__135__distance)));
            vlSelf->__Vfunc_shift_jam27__135__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__135__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__135__distance)))));
            vlSelf->__Vfunc_shift_jam27__135__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__135__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__135__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__135__discarded))));
        }
        __Vfunc_round_pack32__134__shifted = vlSelf->__Vfunc_shift_jam27__135__Vfuncout;
    }
    __Vfunc_round_pack32__134__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__134__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__134__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__134__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__134__rounded)) {
        __Vfunc_round_pack32__134__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__134__rounded, 1U));
        __Vfunc_round_pack32__134__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__134__adjusted)));
    }
    __Vfunc_round_pack32__134__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__134__rounded)) {
        __Vfunc_round_pack32__134__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__134__adjusted)));
    }
    __Vfunc_round_pack32__134__Vfuncout = (((0U == __Vfunc_round_pack32__134__significand) 
                                            | (0U == __Vfunc_round_pack32__134__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__134__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__134__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__134__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__134__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__134__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__134__Vfuncout;
    __Vfunc_round_pack32__128__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__128__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__128__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__128__adjusted = __Vfunc_round_pack32__128__exponent;
    __Vfunc_round_pack32__128__shifted = __Vfunc_round_pack32__128__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__128__exponent))) {
        vlSelf->__Vfunc_shift_jam27__129__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__128__exponent)));
        vlSelf->__Vfunc_shift_jam27__129__value = __Vfunc_round_pack32__128__significand;
        __Vfunc_round_pack32__128__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__129__distance))) {
            vlSelf->__Vfunc_shift_jam27__129__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__129__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__129__distance))) {
            vlSelf->__Vfunc_shift_jam27__129__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__129__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__129__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__129__value, (IData)(vlSelf->__Vfunc_shift_jam27__129__distance)));
            vlSelf->__Vfunc_shift_jam27__129__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__129__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__129__distance)))));
            vlSelf->__Vfunc_shift_jam27__129__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__129__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__129__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__129__discarded))));
        }
        __Vfunc_round_pack32__128__shifted = vlSelf->__Vfunc_shift_jam27__129__Vfuncout;
    }
    __Vfunc_round_pack32__128__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__128__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__128__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__128__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__128__rounded)) {
        __Vfunc_round_pack32__128__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__128__rounded, 1U));
        __Vfunc_round_pack32__128__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__128__adjusted)));
    }
    __Vfunc_round_pack32__128__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__128__rounded)) {
        __Vfunc_round_pack32__128__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__128__adjusted)));
    }
    __Vfunc_round_pack32__128__Vfuncout = (((0U == __Vfunc_round_pack32__128__significand) 
                                            | (0U == __Vfunc_round_pack32__128__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__128__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__128__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__128__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__128__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__128__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__128__Vfuncout;
    __Vfunc_round_pack32__122__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__122__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__122__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__122__adjusted = __Vfunc_round_pack32__122__exponent;
    __Vfunc_round_pack32__122__shifted = __Vfunc_round_pack32__122__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__122__exponent))) {
        vlSelf->__Vfunc_shift_jam27__123__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__122__exponent)));
        vlSelf->__Vfunc_shift_jam27__123__value = __Vfunc_round_pack32__122__significand;
        __Vfunc_round_pack32__122__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__123__distance))) {
            vlSelf->__Vfunc_shift_jam27__123__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__123__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__123__distance))) {
            vlSelf->__Vfunc_shift_jam27__123__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__123__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__123__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__123__value, (IData)(vlSelf->__Vfunc_shift_jam27__123__distance)));
            vlSelf->__Vfunc_shift_jam27__123__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__123__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__123__distance)))));
            vlSelf->__Vfunc_shift_jam27__123__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__123__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__123__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__123__discarded))));
        }
        __Vfunc_round_pack32__122__shifted = vlSelf->__Vfunc_shift_jam27__123__Vfuncout;
    }
    __Vfunc_round_pack32__122__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__122__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__122__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__122__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__122__rounded)) {
        __Vfunc_round_pack32__122__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__122__rounded, 1U));
        __Vfunc_round_pack32__122__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__122__adjusted)));
    }
    __Vfunc_round_pack32__122__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__122__rounded)) {
        __Vfunc_round_pack32__122__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__122__adjusted)));
    }
    __Vfunc_round_pack32__122__Vfuncout = (((0U == __Vfunc_round_pack32__122__significand) 
                                            | (0U == __Vfunc_round_pack32__122__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__122__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__122__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__122__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__122__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__122__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__122__Vfuncout;
    __Vfunc_round_pack32__116__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__116__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__116__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__116__adjusted = __Vfunc_round_pack32__116__exponent;
    __Vfunc_round_pack32__116__shifted = __Vfunc_round_pack32__116__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__116__exponent))) {
        vlSelf->__Vfunc_shift_jam27__117__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__116__exponent)));
        vlSelf->__Vfunc_shift_jam27__117__value = __Vfunc_round_pack32__116__significand;
        __Vfunc_round_pack32__116__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__117__distance))) {
            vlSelf->__Vfunc_shift_jam27__117__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__117__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__117__distance))) {
            vlSelf->__Vfunc_shift_jam27__117__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__117__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__117__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__117__value, (IData)(vlSelf->__Vfunc_shift_jam27__117__distance)));
            vlSelf->__Vfunc_shift_jam27__117__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__117__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__117__distance)))));
            vlSelf->__Vfunc_shift_jam27__117__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__117__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__117__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__117__discarded))));
        }
        __Vfunc_round_pack32__116__shifted = vlSelf->__Vfunc_shift_jam27__117__Vfuncout;
    }
    __Vfunc_round_pack32__116__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__116__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__116__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__116__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__116__rounded)) {
        __Vfunc_round_pack32__116__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__116__rounded, 1U));
        __Vfunc_round_pack32__116__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__116__adjusted)));
    }
    __Vfunc_round_pack32__116__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__116__rounded)) {
        __Vfunc_round_pack32__116__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__116__adjusted)));
    }
    __Vfunc_round_pack32__116__Vfuncout = (((0U == __Vfunc_round_pack32__116__significand) 
                                            | (0U == __Vfunc_round_pack32__116__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__116__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__116__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__116__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__116__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__116__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__116__Vfuncout;
    __Vfunc_round_pack32__110__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__110__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__110__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__110__adjusted = __Vfunc_round_pack32__110__exponent;
    __Vfunc_round_pack32__110__shifted = __Vfunc_round_pack32__110__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__110__exponent))) {
        vlSelf->__Vfunc_shift_jam27__111__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__110__exponent)));
        vlSelf->__Vfunc_shift_jam27__111__value = __Vfunc_round_pack32__110__significand;
        __Vfunc_round_pack32__110__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__111__distance))) {
            vlSelf->__Vfunc_shift_jam27__111__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__111__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__111__distance))) {
            vlSelf->__Vfunc_shift_jam27__111__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__111__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__111__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__111__value, (IData)(vlSelf->__Vfunc_shift_jam27__111__distance)));
            vlSelf->__Vfunc_shift_jam27__111__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__111__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__111__distance)))));
            vlSelf->__Vfunc_shift_jam27__111__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__111__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__111__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__111__discarded))));
        }
        __Vfunc_round_pack32__110__shifted = vlSelf->__Vfunc_shift_jam27__111__Vfuncout;
    }
    __Vfunc_round_pack32__110__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__110__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__110__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__110__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__110__rounded)) {
        __Vfunc_round_pack32__110__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__110__rounded, 1U));
        __Vfunc_round_pack32__110__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__110__adjusted)));
    }
    __Vfunc_round_pack32__110__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__110__rounded)) {
        __Vfunc_round_pack32__110__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__110__adjusted)));
    }
    __Vfunc_round_pack32__110__Vfuncout = (((0U == __Vfunc_round_pack32__110__significand) 
                                            | (0U == __Vfunc_round_pack32__110__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__110__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__110__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__110__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__110__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__110__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__110__Vfuncout;
    __Vfunc_round_pack32__104__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__104__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__104__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__104__adjusted = __Vfunc_round_pack32__104__exponent;
    __Vfunc_round_pack32__104__shifted = __Vfunc_round_pack32__104__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__104__exponent))) {
        vlSelf->__Vfunc_shift_jam27__105__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__104__exponent)));
        vlSelf->__Vfunc_shift_jam27__105__value = __Vfunc_round_pack32__104__significand;
        __Vfunc_round_pack32__104__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__105__distance))) {
            vlSelf->__Vfunc_shift_jam27__105__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__105__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__105__distance))) {
            vlSelf->__Vfunc_shift_jam27__105__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__105__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__105__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__105__value, (IData)(vlSelf->__Vfunc_shift_jam27__105__distance)));
            vlSelf->__Vfunc_shift_jam27__105__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__105__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__105__distance)))));
            vlSelf->__Vfunc_shift_jam27__105__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__105__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__105__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__105__discarded))));
        }
        __Vfunc_round_pack32__104__shifted = vlSelf->__Vfunc_shift_jam27__105__Vfuncout;
    }
    __Vfunc_round_pack32__104__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__104__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__104__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__104__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__104__rounded)) {
        __Vfunc_round_pack32__104__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__104__rounded, 1U));
        __Vfunc_round_pack32__104__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__104__adjusted)));
    }
    __Vfunc_round_pack32__104__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__104__rounded)) {
        __Vfunc_round_pack32__104__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__104__adjusted)));
    }
    __Vfunc_round_pack32__104__Vfuncout = (((0U == __Vfunc_round_pack32__104__significand) 
                                            | (0U == __Vfunc_round_pack32__104__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__104__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__104__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__104__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__104__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__104__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__104__Vfuncout;
    __Vfunc_round_pack32__98__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__98__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__98__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__98__adjusted = __Vfunc_round_pack32__98__exponent;
    __Vfunc_round_pack32__98__shifted = __Vfunc_round_pack32__98__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__98__exponent))) {
        vlSelf->__Vfunc_shift_jam27__99__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__98__exponent)));
        vlSelf->__Vfunc_shift_jam27__99__value = __Vfunc_round_pack32__98__significand;
        __Vfunc_round_pack32__98__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__99__distance))) {
            vlSelf->__Vfunc_shift_jam27__99__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__99__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__99__distance))) {
            vlSelf->__Vfunc_shift_jam27__99__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__99__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__99__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__99__value, (IData)(vlSelf->__Vfunc_shift_jam27__99__distance)));
            vlSelf->__Vfunc_shift_jam27__99__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__99__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__99__distance)))));
            vlSelf->__Vfunc_shift_jam27__99__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__99__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__99__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__99__discarded))));
        }
        __Vfunc_round_pack32__98__shifted = vlSelf->__Vfunc_shift_jam27__99__Vfuncout;
    }
    __Vfunc_round_pack32__98__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__98__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__98__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__98__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__98__rounded)) {
        __Vfunc_round_pack32__98__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__98__rounded, 1U));
        __Vfunc_round_pack32__98__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__98__adjusted)));
    }
    __Vfunc_round_pack32__98__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__98__rounded)) {
        __Vfunc_round_pack32__98__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__98__adjusted)));
    }
    __Vfunc_round_pack32__98__Vfuncout = (((0U == __Vfunc_round_pack32__98__significand) 
                                           | (0U == __Vfunc_round_pack32__98__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__98__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__98__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__98__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__98__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__98__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__98__Vfuncout;
    __Vfunc_round_pack32__92__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__92__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__92__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__92__adjusted = __Vfunc_round_pack32__92__exponent;
    __Vfunc_round_pack32__92__shifted = __Vfunc_round_pack32__92__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__92__exponent))) {
        vlSelf->__Vfunc_shift_jam27__93__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__92__exponent)));
        vlSelf->__Vfunc_shift_jam27__93__value = __Vfunc_round_pack32__92__significand;
        __Vfunc_round_pack32__92__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__93__distance))) {
            vlSelf->__Vfunc_shift_jam27__93__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__93__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__93__distance))) {
            vlSelf->__Vfunc_shift_jam27__93__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__93__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__93__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__93__value, (IData)(vlSelf->__Vfunc_shift_jam27__93__distance)));
            vlSelf->__Vfunc_shift_jam27__93__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__93__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__93__distance)))));
            vlSelf->__Vfunc_shift_jam27__93__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__93__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__93__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__93__discarded))));
        }
        __Vfunc_round_pack32__92__shifted = vlSelf->__Vfunc_shift_jam27__93__Vfuncout;
    }
    __Vfunc_round_pack32__92__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__92__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__92__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__92__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__92__rounded)) {
        __Vfunc_round_pack32__92__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__92__rounded, 1U));
        __Vfunc_round_pack32__92__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__92__adjusted)));
    }
    __Vfunc_round_pack32__92__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__92__rounded)) {
        __Vfunc_round_pack32__92__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__92__adjusted)));
    }
    __Vfunc_round_pack32__92__Vfuncout = (((0U == __Vfunc_round_pack32__92__significand) 
                                           | (0U == __Vfunc_round_pack32__92__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__92__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__92__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__92__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__92__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__92__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__92__Vfuncout;
    __Vfunc_round_pack32__86__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__86__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__86__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__86__adjusted = __Vfunc_round_pack32__86__exponent;
    __Vfunc_round_pack32__86__shifted = __Vfunc_round_pack32__86__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__86__exponent))) {
        vlSelf->__Vfunc_shift_jam27__87__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__86__exponent)));
        vlSelf->__Vfunc_shift_jam27__87__value = __Vfunc_round_pack32__86__significand;
        __Vfunc_round_pack32__86__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__87__distance))) {
            vlSelf->__Vfunc_shift_jam27__87__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__87__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__87__distance))) {
            vlSelf->__Vfunc_shift_jam27__87__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__87__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__87__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__87__value, (IData)(vlSelf->__Vfunc_shift_jam27__87__distance)));
            vlSelf->__Vfunc_shift_jam27__87__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__87__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__87__distance)))));
            vlSelf->__Vfunc_shift_jam27__87__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__87__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__87__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__87__discarded))));
        }
        __Vfunc_round_pack32__86__shifted = vlSelf->__Vfunc_shift_jam27__87__Vfuncout;
    }
    __Vfunc_round_pack32__86__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__86__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__86__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__86__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__86__rounded)) {
        __Vfunc_round_pack32__86__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__86__rounded, 1U));
        __Vfunc_round_pack32__86__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__86__adjusted)));
    }
    __Vfunc_round_pack32__86__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__86__rounded)) {
        __Vfunc_round_pack32__86__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__86__adjusted)));
    }
    __Vfunc_round_pack32__86__Vfuncout = (((0U == __Vfunc_round_pack32__86__significand) 
                                           | (0U == __Vfunc_round_pack32__86__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__86__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__86__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__86__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__86__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__86__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__86__Vfuncout;
    __Vfunc_round_pack32__80__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__80__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__80__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
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
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__80__Vfuncout;
    __Vfunc_round_pack32__74__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__74__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__74__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__74__adjusted = __Vfunc_round_pack32__74__exponent;
    __Vfunc_round_pack32__74__shifted = __Vfunc_round_pack32__74__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__74__exponent))) {
        vlSelf->__Vfunc_shift_jam27__75__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__74__exponent)));
        vlSelf->__Vfunc_shift_jam27__75__value = __Vfunc_round_pack32__74__significand;
        __Vfunc_round_pack32__74__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__75__distance))) {
            vlSelf->__Vfunc_shift_jam27__75__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__75__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__75__distance))) {
            vlSelf->__Vfunc_shift_jam27__75__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__75__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__75__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__75__value, (IData)(vlSelf->__Vfunc_shift_jam27__75__distance)));
            vlSelf->__Vfunc_shift_jam27__75__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__75__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__75__distance)))));
            vlSelf->__Vfunc_shift_jam27__75__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__75__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__75__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__75__discarded))));
        }
        __Vfunc_round_pack32__74__shifted = vlSelf->__Vfunc_shift_jam27__75__Vfuncout;
    }
    __Vfunc_round_pack32__74__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__74__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__74__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__74__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__74__rounded)) {
        __Vfunc_round_pack32__74__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__74__rounded, 1U));
        __Vfunc_round_pack32__74__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__74__adjusted)));
    }
    __Vfunc_round_pack32__74__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__74__rounded)) {
        __Vfunc_round_pack32__74__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__74__adjusted)));
    }
    __Vfunc_round_pack32__74__Vfuncout = (((0U == __Vfunc_round_pack32__74__significand) 
                                           | (0U == __Vfunc_round_pack32__74__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__74__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__74__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__74__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__74__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__74__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__74__Vfuncout;
    __Vfunc_round_pack32__68__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__68__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__68__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__68__adjusted = __Vfunc_round_pack32__68__exponent;
    __Vfunc_round_pack32__68__shifted = __Vfunc_round_pack32__68__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__68__exponent))) {
        vlSelf->__Vfunc_shift_jam27__69__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__68__exponent)));
        vlSelf->__Vfunc_shift_jam27__69__value = __Vfunc_round_pack32__68__significand;
        __Vfunc_round_pack32__68__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__69__distance))) {
            vlSelf->__Vfunc_shift_jam27__69__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__69__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__69__distance))) {
            vlSelf->__Vfunc_shift_jam27__69__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__69__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__69__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__69__value, (IData)(vlSelf->__Vfunc_shift_jam27__69__distance)));
            vlSelf->__Vfunc_shift_jam27__69__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__69__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__69__distance)))));
            vlSelf->__Vfunc_shift_jam27__69__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__69__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__69__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__69__discarded))));
        }
        __Vfunc_round_pack32__68__shifted = vlSelf->__Vfunc_shift_jam27__69__Vfuncout;
    }
    __Vfunc_round_pack32__68__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__68__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__68__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__68__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__68__rounded)) {
        __Vfunc_round_pack32__68__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__68__rounded, 1U));
        __Vfunc_round_pack32__68__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__68__adjusted)));
    }
    __Vfunc_round_pack32__68__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__68__rounded)) {
        __Vfunc_round_pack32__68__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__68__adjusted)));
    }
    __Vfunc_round_pack32__68__Vfuncout = (((0U == __Vfunc_round_pack32__68__significand) 
                                           | (0U == __Vfunc_round_pack32__68__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__68__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__68__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__68__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__68__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__68__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__68__Vfuncout;
    __Vfunc_round_pack32__62__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__62__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__62__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__62__adjusted = __Vfunc_round_pack32__62__exponent;
    __Vfunc_round_pack32__62__shifted = __Vfunc_round_pack32__62__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__62__exponent))) {
        vlSelf->__Vfunc_shift_jam27__63__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__62__exponent)));
        vlSelf->__Vfunc_shift_jam27__63__value = __Vfunc_round_pack32__62__significand;
        __Vfunc_round_pack32__62__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__63__distance))) {
            vlSelf->__Vfunc_shift_jam27__63__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__63__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__63__distance))) {
            vlSelf->__Vfunc_shift_jam27__63__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__63__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__63__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__63__value, (IData)(vlSelf->__Vfunc_shift_jam27__63__distance)));
            vlSelf->__Vfunc_shift_jam27__63__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__63__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__63__distance)))));
            vlSelf->__Vfunc_shift_jam27__63__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__63__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__63__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__63__discarded))));
        }
        __Vfunc_round_pack32__62__shifted = vlSelf->__Vfunc_shift_jam27__63__Vfuncout;
    }
    __Vfunc_round_pack32__62__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__62__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__62__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__62__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__62__rounded)) {
        __Vfunc_round_pack32__62__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__62__rounded, 1U));
        __Vfunc_round_pack32__62__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__62__adjusted)));
    }
    __Vfunc_round_pack32__62__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__62__rounded)) {
        __Vfunc_round_pack32__62__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__62__adjusted)));
    }
    __Vfunc_round_pack32__62__Vfuncout = (((0U == __Vfunc_round_pack32__62__significand) 
                                           | (0U == __Vfunc_round_pack32__62__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__62__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__62__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__62__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__62__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__62__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__62__Vfuncout;
    __Vfunc_round_pack32__56__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__56__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__56__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__56__adjusted = __Vfunc_round_pack32__56__exponent;
    __Vfunc_round_pack32__56__shifted = __Vfunc_round_pack32__56__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__56__exponent))) {
        vlSelf->__Vfunc_shift_jam27__57__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__56__exponent)));
        vlSelf->__Vfunc_shift_jam27__57__value = __Vfunc_round_pack32__56__significand;
        __Vfunc_round_pack32__56__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__57__distance))) {
            vlSelf->__Vfunc_shift_jam27__57__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__57__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__57__distance))) {
            vlSelf->__Vfunc_shift_jam27__57__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__57__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__57__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__57__value, (IData)(vlSelf->__Vfunc_shift_jam27__57__distance)));
            vlSelf->__Vfunc_shift_jam27__57__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__57__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__57__distance)))));
            vlSelf->__Vfunc_shift_jam27__57__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__57__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__57__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__57__discarded))));
        }
        __Vfunc_round_pack32__56__shifted = vlSelf->__Vfunc_shift_jam27__57__Vfuncout;
    }
    __Vfunc_round_pack32__56__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__56__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__56__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__56__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__56__rounded)) {
        __Vfunc_round_pack32__56__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__56__rounded, 1U));
        __Vfunc_round_pack32__56__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__56__adjusted)));
    }
    __Vfunc_round_pack32__56__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__56__rounded)) {
        __Vfunc_round_pack32__56__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__56__adjusted)));
    }
    __Vfunc_round_pack32__56__Vfuncout = (((0U == __Vfunc_round_pack32__56__significand) 
                                           | (0U == __Vfunc_round_pack32__56__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__56__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__56__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__56__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__56__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__56__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__56__Vfuncout;
    __Vfunc_round_pack32__50__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__50__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__50__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__50__adjusted = __Vfunc_round_pack32__50__exponent;
    __Vfunc_round_pack32__50__shifted = __Vfunc_round_pack32__50__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__50__exponent))) {
        vlSelf->__Vfunc_shift_jam27__51__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__50__exponent)));
        vlSelf->__Vfunc_shift_jam27__51__value = __Vfunc_round_pack32__50__significand;
        __Vfunc_round_pack32__50__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__51__distance))) {
            vlSelf->__Vfunc_shift_jam27__51__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__51__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__51__distance))) {
            vlSelf->__Vfunc_shift_jam27__51__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__51__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__51__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__51__value, (IData)(vlSelf->__Vfunc_shift_jam27__51__distance)));
            vlSelf->__Vfunc_shift_jam27__51__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__51__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__51__distance)))));
            vlSelf->__Vfunc_shift_jam27__51__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__51__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__51__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__51__discarded))));
        }
        __Vfunc_round_pack32__50__shifted = vlSelf->__Vfunc_shift_jam27__51__Vfuncout;
    }
    __Vfunc_round_pack32__50__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__50__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__50__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__50__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__50__rounded)) {
        __Vfunc_round_pack32__50__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__50__rounded, 1U));
        __Vfunc_round_pack32__50__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__50__adjusted)));
    }
    __Vfunc_round_pack32__50__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__50__rounded)) {
        __Vfunc_round_pack32__50__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__50__adjusted)));
    }
    __Vfunc_round_pack32__50__Vfuncout = (((0U == __Vfunc_round_pack32__50__significand) 
                                           | (0U == __Vfunc_round_pack32__50__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__50__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__50__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__50__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__50__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__50__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__50__Vfuncout;
    __Vfunc_round_pack32__44__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__44__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__44__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__44__adjusted = __Vfunc_round_pack32__44__exponent;
    __Vfunc_round_pack32__44__shifted = __Vfunc_round_pack32__44__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__44__exponent))) {
        vlSelf->__Vfunc_shift_jam27__45__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__44__exponent)));
        vlSelf->__Vfunc_shift_jam27__45__value = __Vfunc_round_pack32__44__significand;
        __Vfunc_round_pack32__44__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__45__distance))) {
            vlSelf->__Vfunc_shift_jam27__45__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__45__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__45__distance))) {
            vlSelf->__Vfunc_shift_jam27__45__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__45__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__45__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__45__value, (IData)(vlSelf->__Vfunc_shift_jam27__45__distance)));
            vlSelf->__Vfunc_shift_jam27__45__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__45__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__45__distance)))));
            vlSelf->__Vfunc_shift_jam27__45__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__45__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__45__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__45__discarded))));
        }
        __Vfunc_round_pack32__44__shifted = vlSelf->__Vfunc_shift_jam27__45__Vfuncout;
    }
    __Vfunc_round_pack32__44__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__44__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__44__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__44__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__44__rounded)) {
        __Vfunc_round_pack32__44__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__44__rounded, 1U));
        __Vfunc_round_pack32__44__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__44__adjusted)));
    }
    __Vfunc_round_pack32__44__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__44__rounded)) {
        __Vfunc_round_pack32__44__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__44__adjusted)));
    }
    __Vfunc_round_pack32__44__Vfuncout = (((0U == __Vfunc_round_pack32__44__significand) 
                                           | (0U == __Vfunc_round_pack32__44__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__44__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__44__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__44__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__44__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__44__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__44__Vfuncout;
    __Vfunc_round_pack32__38__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__38__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__38__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__negative) 
                                                >> 2U));
    __Vfunc_round_pack32__38__adjusted = __Vfunc_round_pack32__38__exponent;
    __Vfunc_round_pack32__38__shifted = __Vfunc_round_pack32__38__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__38__exponent))) {
        vlSelf->__Vfunc_shift_jam27__39__distance = 
            (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__38__exponent)));
        vlSelf->__Vfunc_shift_jam27__39__value = __Vfunc_round_pack32__38__significand;
        __Vfunc_round_pack32__38__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__39__distance))) {
            vlSelf->__Vfunc_shift_jam27__39__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__39__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__39__distance))) {
            vlSelf->__Vfunc_shift_jam27__39__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__39__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__39__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__39__value, (IData)(vlSelf->__Vfunc_shift_jam27__39__distance)));
            vlSelf->__Vfunc_shift_jam27__39__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__39__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__39__distance)))));
            vlSelf->__Vfunc_shift_jam27__39__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__39__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__39__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__39__discarded))));
        }
        __Vfunc_round_pack32__38__shifted = vlSelf->__Vfunc_shift_jam27__39__Vfuncout;
    }
    __Vfunc_round_pack32__38__rounded = (0x1ffffffU 
                                         & ((0xffffffU 
                                             & (__Vfunc_round_pack32__38__shifted 
                                                >> 3U)) 
                                            + (1U & 
                                               ((__Vfunc_round_pack32__38__shifted 
                                                 >> 2U) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xbU 
                                                            & __Vfunc_round_pack32__38__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__38__rounded)) {
        __Vfunc_round_pack32__38__rounded = (0x1ffffffU 
                                             & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__38__rounded, 1U));
        __Vfunc_round_pack32__38__adjusted = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(__Vfunc_round_pack32__38__adjusted)));
    }
    __Vfunc_round_pack32__38__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__38__rounded)) {
        __Vfunc_round_pack32__38__biased = (0xffU & 
                                            ((IData)(0x7fU) 
                                             + (IData)(__Vfunc_round_pack32__38__adjusted)));
    }
    __Vfunc_round_pack32__38__Vfuncout = (((0U == __Vfunc_round_pack32__38__significand) 
                                           | (0U == __Vfunc_round_pack32__38__rounded))
                                           ? ((QData)((IData)(__Vfunc_round_pack32__38__negative)) 
                                              << 0x1fU)
                                           : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__38__adjusted))
                                               ? 0x100000000ULL
                                               : (((QData)((IData)(__Vfunc_round_pack32__38__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__38__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__38__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__38__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0U;
    if ((3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [1U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 1U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [2U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 2U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [3U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 3U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [4U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 4U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [5U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 5U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [6U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 6U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [7U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 7U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [8U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 8U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [9U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 9U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xaU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xaU;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xbU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xbU;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xcU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xcU;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xdU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xdU;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xeU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xeU;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xfU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xfU;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x10U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x10U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x11U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x11U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x12U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x12U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x13U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x13U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x14U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x14U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x15U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x15U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x16U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x16U;
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x17U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x17U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 0U;
    if ((1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request)) 
         & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [1U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request)) 
         & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [2U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 2U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 1U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [3U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 3U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 1U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [4U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 4U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 1U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [5U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 5U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 2U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [6U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 6U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 2U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [7U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 7U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 2U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [8U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 8U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 3U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [9U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 9U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 3U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xaU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 0xaU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 3U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xbU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 0xbU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 4U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xcU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0xcU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 4U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xdU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0xdU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 4U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xeU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0xeU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 5U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xfU]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0xfU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 5U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x10U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0x10U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 5U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x11U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0x11U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 6U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x12U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0x12U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 6U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x13U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0x13U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 6U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x14U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0x14U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0U;
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 7U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x15U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0x15U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 7U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x16U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0x16U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 7U)) & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x17U]))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0x17U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot = 0U;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank;
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if ((0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                 ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                 : 0U))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(2U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(3U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(4U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(5U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(6U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
        = ((IData)(7U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__next_bank));
    if (VL_LTES_III(32, 8U, anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)) {
        anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
            = (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate 
               - (IData)(8U));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate);
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(1U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(1U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    if (((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)) 
         & (0U == ((0x17U >= (0x1fU & ((IData)(2U) 
                                       + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate))))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                   [(0x1fU & ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate)))]
                    : 0U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__free_slot 
            = ((IData)(2U) + VL_MULS_III(32, (IData)(3U), anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__candidate));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 0U;
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [1U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [2U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [3U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [4U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [5U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [6U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [7U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [8U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [9U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0xaU])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0xbU])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0xcU])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0xdU])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0xeU])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0xfU])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x10U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x11U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x12U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x13U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x14U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x15U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x16U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    if ((0U != vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0x17U])) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__any_owned = 1U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__first_coordinate 
        = (0U == (0x7fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__expected_index));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__final_coordinate 
        = (0x7fU == (0x7fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__expected_index));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__final_head 
        = (VL_SHIFTR_III(32,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__expected_index, 7U) 
           == ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__heads) 
               - (IData)(1U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT____VdfgTmp_h9588d7e1__0 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__state
        [vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__fill_slot];
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)))) {
            if ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__malformed)))) {
                if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projected_heads__start_valid) 
                     & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__head_start_ready))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__layer 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__layer;
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__position 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__position;
                    if ((0xbU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))) {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__is_key = 1U;
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[1U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[1U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[2U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[2U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[3U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[3U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[4U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[4U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[5U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[5U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[6U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[6U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[7U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[7U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[8U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[8U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[9U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[9U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xaU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xaU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xbU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xbU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xcU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xcU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xdU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xdU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xeU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xeU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xfU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xfU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x10U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x10U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x11U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x11U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x12U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x12U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x13U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x13U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x14U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x14U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x15U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x15U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x16U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x16U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x17U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x17U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x18U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x18U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x19U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x19U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1aU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1aU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1bU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1bU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1cU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1cU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1dU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1dU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1eU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1eU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1fU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1fU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[1U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[1U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[2U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[2U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[3U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[3U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[4U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[4U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[5U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[5U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[6U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[6U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[7U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[7U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[8U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[8U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[9U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[9U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xaU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xaU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xbU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xbU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xcU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xcU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xdU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xdU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xeU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xeU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xfU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xfU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x10U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x10U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x11U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x11U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x12U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x12U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x13U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x13U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x14U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x14U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x15U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x15U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x16U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x16U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x17U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x17U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x18U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x18U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x19U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x19U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1aU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1aU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1bU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1bU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1cU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1cU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1dU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1dU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1eU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1eU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1fU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1fU];
                        __Vilp = 0U;
                        while ((__Vilp <= 0x3fU)) {
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gamma[__Vilp] 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__k_gamma[__Vilp];
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                    } else {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__is_key = 0U;
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[1U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[1U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[2U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[2U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[3U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[3U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[4U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[4U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[5U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[5U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[6U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[6U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[7U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[7U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[8U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[8U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[9U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[9U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xaU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xaU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xbU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xbU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xcU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xcU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xdU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xdU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xeU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xeU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xfU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0xfU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x10U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x10U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x11U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x11U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x12U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x12U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x13U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x13U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x14U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x14U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x15U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x15U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x16U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x16U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x17U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x17U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x18U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x18U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x19U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x19U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1aU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1aU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1bU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1bU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1cU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1cU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1dU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1dU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1eU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1eU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1fU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cosine[0x1fU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[1U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[1U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[2U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[2U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[3U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[3U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[4U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[4U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[5U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[5U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[6U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[6U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[7U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[7U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[8U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[8U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[9U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[9U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xaU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xaU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xbU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xbU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xcU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xcU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xdU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xdU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xeU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xeU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xfU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0xfU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x10U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x10U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x11U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x11U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x12U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x12U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x13U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x13U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x14U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x14U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x15U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x15U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x16U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x16U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x17U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x17U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x18U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x18U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x19U] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x19U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1aU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1aU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1bU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1bU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1cU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1cU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1dU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1dU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1eU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1eU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1fU] 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__sine[0x1fU];
                        __Vilp = 0U;
                        while ((__Vilp <= 0x3fU)) {
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gamma[__Vilp] 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__q_gamma[__Vilp];
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__layer = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__position = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__is_key = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[1U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[2U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[3U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[4U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[5U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[6U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[7U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[8U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[9U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xaU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xbU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xcU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xdU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xeU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0xfU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x10U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x11U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x12U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x13U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x14U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x15U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x16U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x17U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x18U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x19U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1aU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1bU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1cU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1dU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1eU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__cosine[0x1fU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[1U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[2U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[3U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[4U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[5U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[6U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[7U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[8U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[9U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xaU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xbU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xcU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xdU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xeU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0xfU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x10U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x11U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x12U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x13U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x14U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x15U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x16U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x17U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x18U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x19U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1aU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1bU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1cU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1dU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1eU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__sine[0x1fU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__gamma[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vfunc_round_pack32__11959__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11959__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11959__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11959__adjusted = __Vfunc_round_pack32__11959__exponent;
    __Vfunc_round_pack32__11959__shifted = __Vfunc_round_pack32__11959__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11959__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11960__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11959__exponent)));
        vlSelf->__Vfunc_shift_jam27__11960__value = __Vfunc_round_pack32__11959__significand;
        __Vfunc_round_pack32__11959__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11960__distance))) {
            vlSelf->__Vfunc_shift_jam27__11960__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11960__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11960__distance))) {
            vlSelf->__Vfunc_shift_jam27__11960__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11960__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11960__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11960__value, (IData)(vlSelf->__Vfunc_shift_jam27__11960__distance)));
            vlSelf->__Vfunc_shift_jam27__11960__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11960__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11960__distance)))));
            vlSelf->__Vfunc_shift_jam27__11960__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11960__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11960__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11960__discarded))));
        }
        __Vfunc_round_pack32__11959__shifted = vlSelf->__Vfunc_shift_jam27__11960__Vfuncout;
    }
    __Vfunc_round_pack32__11959__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11959__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11959__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11959__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11959__rounded)) {
        __Vfunc_round_pack32__11959__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11959__rounded, 1U));
        __Vfunc_round_pack32__11959__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11959__adjusted)));
    }
    __Vfunc_round_pack32__11959__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11959__rounded)) {
        __Vfunc_round_pack32__11959__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11959__adjusted)));
    }
    __Vfunc_round_pack32__11959__Vfuncout = (((0U == __Vfunc_round_pack32__11959__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11959__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11959__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11959__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11959__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11959__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11959__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11959__Vfuncout;
    __Vfunc_round_pack32__11947__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11947__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11947__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11947__adjusted = __Vfunc_round_pack32__11947__exponent;
    __Vfunc_round_pack32__11947__shifted = __Vfunc_round_pack32__11947__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11947__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11948__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11947__exponent)));
        vlSelf->__Vfunc_shift_jam27__11948__value = __Vfunc_round_pack32__11947__significand;
        __Vfunc_round_pack32__11947__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11948__distance))) {
            vlSelf->__Vfunc_shift_jam27__11948__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11948__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11948__distance))) {
            vlSelf->__Vfunc_shift_jam27__11948__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11948__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11948__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11948__value, (IData)(vlSelf->__Vfunc_shift_jam27__11948__distance)));
            vlSelf->__Vfunc_shift_jam27__11948__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11948__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11948__distance)))));
            vlSelf->__Vfunc_shift_jam27__11948__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11948__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11948__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11948__discarded))));
        }
        __Vfunc_round_pack32__11947__shifted = vlSelf->__Vfunc_shift_jam27__11948__Vfuncout;
    }
    __Vfunc_round_pack32__11947__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11947__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11947__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11947__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11947__rounded)) {
        __Vfunc_round_pack32__11947__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11947__rounded, 1U));
        __Vfunc_round_pack32__11947__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11947__adjusted)));
    }
    __Vfunc_round_pack32__11947__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11947__rounded)) {
        __Vfunc_round_pack32__11947__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11947__adjusted)));
    }
    __Vfunc_round_pack32__11947__Vfuncout = (((0U == __Vfunc_round_pack32__11947__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11947__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11947__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11947__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11947__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11947__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11947__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11947__Vfuncout;
    __Vfunc_round_pack32__11935__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11935__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11935__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11935__adjusted = __Vfunc_round_pack32__11935__exponent;
    __Vfunc_round_pack32__11935__shifted = __Vfunc_round_pack32__11935__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11935__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11936__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11935__exponent)));
        vlSelf->__Vfunc_shift_jam27__11936__value = __Vfunc_round_pack32__11935__significand;
        __Vfunc_round_pack32__11935__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11936__distance))) {
            vlSelf->__Vfunc_shift_jam27__11936__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11936__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11936__distance))) {
            vlSelf->__Vfunc_shift_jam27__11936__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11936__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11936__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11936__value, (IData)(vlSelf->__Vfunc_shift_jam27__11936__distance)));
            vlSelf->__Vfunc_shift_jam27__11936__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11936__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11936__distance)))));
            vlSelf->__Vfunc_shift_jam27__11936__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11936__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11936__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11936__discarded))));
        }
        __Vfunc_round_pack32__11935__shifted = vlSelf->__Vfunc_shift_jam27__11936__Vfuncout;
    }
    __Vfunc_round_pack32__11935__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11935__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11935__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11935__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11935__rounded)) {
        __Vfunc_round_pack32__11935__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11935__rounded, 1U));
        __Vfunc_round_pack32__11935__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11935__adjusted)));
    }
    __Vfunc_round_pack32__11935__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11935__rounded)) {
        __Vfunc_round_pack32__11935__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11935__adjusted)));
    }
    __Vfunc_round_pack32__11935__Vfuncout = (((0U == __Vfunc_round_pack32__11935__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11935__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11935__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11935__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11935__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11935__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11935__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11935__Vfuncout;
    __Vfunc_round_pack32__11923__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11923__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11923__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11923__adjusted = __Vfunc_round_pack32__11923__exponent;
    __Vfunc_round_pack32__11923__shifted = __Vfunc_round_pack32__11923__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11923__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11924__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11923__exponent)));
        vlSelf->__Vfunc_shift_jam27__11924__value = __Vfunc_round_pack32__11923__significand;
        __Vfunc_round_pack32__11923__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11924__distance))) {
            vlSelf->__Vfunc_shift_jam27__11924__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11924__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11924__distance))) {
            vlSelf->__Vfunc_shift_jam27__11924__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11924__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11924__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11924__value, (IData)(vlSelf->__Vfunc_shift_jam27__11924__distance)));
            vlSelf->__Vfunc_shift_jam27__11924__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11924__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11924__distance)))));
            vlSelf->__Vfunc_shift_jam27__11924__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11924__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11924__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11924__discarded))));
        }
        __Vfunc_round_pack32__11923__shifted = vlSelf->__Vfunc_shift_jam27__11924__Vfuncout;
    }
    __Vfunc_round_pack32__11923__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11923__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11923__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11923__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11923__rounded)) {
        __Vfunc_round_pack32__11923__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11923__rounded, 1U));
        __Vfunc_round_pack32__11923__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11923__adjusted)));
    }
    __Vfunc_round_pack32__11923__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11923__rounded)) {
        __Vfunc_round_pack32__11923__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11923__adjusted)));
    }
    __Vfunc_round_pack32__11923__Vfuncout = (((0U == __Vfunc_round_pack32__11923__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11923__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11923__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11923__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11923__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11923__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11923__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11923__Vfuncout;
    __Vfunc_round_pack32__11911__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11911__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11911__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11911__adjusted = __Vfunc_round_pack32__11911__exponent;
    __Vfunc_round_pack32__11911__shifted = __Vfunc_round_pack32__11911__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11911__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11912__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11911__exponent)));
        vlSelf->__Vfunc_shift_jam27__11912__value = __Vfunc_round_pack32__11911__significand;
        __Vfunc_round_pack32__11911__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11912__distance))) {
            vlSelf->__Vfunc_shift_jam27__11912__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11912__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11912__distance))) {
            vlSelf->__Vfunc_shift_jam27__11912__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11912__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11912__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11912__value, (IData)(vlSelf->__Vfunc_shift_jam27__11912__distance)));
            vlSelf->__Vfunc_shift_jam27__11912__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11912__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11912__distance)))));
            vlSelf->__Vfunc_shift_jam27__11912__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11912__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11912__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11912__discarded))));
        }
        __Vfunc_round_pack32__11911__shifted = vlSelf->__Vfunc_shift_jam27__11912__Vfuncout;
    }
    __Vfunc_round_pack32__11911__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11911__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11911__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11911__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11911__rounded)) {
        __Vfunc_round_pack32__11911__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11911__rounded, 1U));
        __Vfunc_round_pack32__11911__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11911__adjusted)));
    }
    __Vfunc_round_pack32__11911__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11911__rounded)) {
        __Vfunc_round_pack32__11911__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11911__adjusted)));
    }
    __Vfunc_round_pack32__11911__Vfuncout = (((0U == __Vfunc_round_pack32__11911__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11911__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11911__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11911__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11911__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11911__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11911__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11911__Vfuncout;
    __Vfunc_round_pack32__11899__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11899__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11899__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11899__adjusted = __Vfunc_round_pack32__11899__exponent;
    __Vfunc_round_pack32__11899__shifted = __Vfunc_round_pack32__11899__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11899__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11900__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11899__exponent)));
        vlSelf->__Vfunc_shift_jam27__11900__value = __Vfunc_round_pack32__11899__significand;
        __Vfunc_round_pack32__11899__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11900__distance))) {
            vlSelf->__Vfunc_shift_jam27__11900__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11900__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11900__distance))) {
            vlSelf->__Vfunc_shift_jam27__11900__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11900__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11900__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11900__value, (IData)(vlSelf->__Vfunc_shift_jam27__11900__distance)));
            vlSelf->__Vfunc_shift_jam27__11900__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11900__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11900__distance)))));
            vlSelf->__Vfunc_shift_jam27__11900__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11900__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11900__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11900__discarded))));
        }
        __Vfunc_round_pack32__11899__shifted = vlSelf->__Vfunc_shift_jam27__11900__Vfuncout;
    }
    __Vfunc_round_pack32__11899__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11899__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11899__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11899__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11899__rounded)) {
        __Vfunc_round_pack32__11899__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11899__rounded, 1U));
        __Vfunc_round_pack32__11899__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11899__adjusted)));
    }
    __Vfunc_round_pack32__11899__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11899__rounded)) {
        __Vfunc_round_pack32__11899__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11899__adjusted)));
    }
    __Vfunc_round_pack32__11899__Vfuncout = (((0U == __Vfunc_round_pack32__11899__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11899__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11899__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11899__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11899__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11899__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11899__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11899__Vfuncout;
    __Vfunc_round_pack32__11887__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11887__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11887__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11887__adjusted = __Vfunc_round_pack32__11887__exponent;
    __Vfunc_round_pack32__11887__shifted = __Vfunc_round_pack32__11887__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11887__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11888__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11887__exponent)));
        vlSelf->__Vfunc_shift_jam27__11888__value = __Vfunc_round_pack32__11887__significand;
        __Vfunc_round_pack32__11887__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11888__distance))) {
            vlSelf->__Vfunc_shift_jam27__11888__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11888__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11888__distance))) {
            vlSelf->__Vfunc_shift_jam27__11888__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11888__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11888__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11888__value, (IData)(vlSelf->__Vfunc_shift_jam27__11888__distance)));
            vlSelf->__Vfunc_shift_jam27__11888__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11888__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11888__distance)))));
            vlSelf->__Vfunc_shift_jam27__11888__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11888__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11888__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11888__discarded))));
        }
        __Vfunc_round_pack32__11887__shifted = vlSelf->__Vfunc_shift_jam27__11888__Vfuncout;
    }
    __Vfunc_round_pack32__11887__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11887__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11887__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11887__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11887__rounded)) {
        __Vfunc_round_pack32__11887__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11887__rounded, 1U));
        __Vfunc_round_pack32__11887__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11887__adjusted)));
    }
    __Vfunc_round_pack32__11887__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11887__rounded)) {
        __Vfunc_round_pack32__11887__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11887__adjusted)));
    }
    __Vfunc_round_pack32__11887__Vfuncout = (((0U == __Vfunc_round_pack32__11887__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11887__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11887__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11887__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11887__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11887__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11887__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11887__Vfuncout;
    __Vfunc_round_pack32__11875__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11875__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11875__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11875__adjusted = __Vfunc_round_pack32__11875__exponent;
    __Vfunc_round_pack32__11875__shifted = __Vfunc_round_pack32__11875__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11875__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11876__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11875__exponent)));
        vlSelf->__Vfunc_shift_jam27__11876__value = __Vfunc_round_pack32__11875__significand;
        __Vfunc_round_pack32__11875__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11876__distance))) {
            vlSelf->__Vfunc_shift_jam27__11876__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11876__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11876__distance))) {
            vlSelf->__Vfunc_shift_jam27__11876__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11876__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11876__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11876__value, (IData)(vlSelf->__Vfunc_shift_jam27__11876__distance)));
            vlSelf->__Vfunc_shift_jam27__11876__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11876__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11876__distance)))));
            vlSelf->__Vfunc_shift_jam27__11876__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11876__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11876__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11876__discarded))));
        }
        __Vfunc_round_pack32__11875__shifted = vlSelf->__Vfunc_shift_jam27__11876__Vfuncout;
    }
    __Vfunc_round_pack32__11875__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11875__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11875__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11875__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11875__rounded)) {
        __Vfunc_round_pack32__11875__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11875__rounded, 1U));
        __Vfunc_round_pack32__11875__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11875__adjusted)));
    }
    __Vfunc_round_pack32__11875__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11875__rounded)) {
        __Vfunc_round_pack32__11875__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11875__adjusted)));
    }
    __Vfunc_round_pack32__11875__Vfuncout = (((0U == __Vfunc_round_pack32__11875__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11875__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11875__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11875__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11875__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11875__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11875__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11875__Vfuncout;
    __Vfunc_round_pack32__11863__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11863__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11863__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11863__adjusted = __Vfunc_round_pack32__11863__exponent;
    __Vfunc_round_pack32__11863__shifted = __Vfunc_round_pack32__11863__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11863__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11864__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11863__exponent)));
        vlSelf->__Vfunc_shift_jam27__11864__value = __Vfunc_round_pack32__11863__significand;
        __Vfunc_round_pack32__11863__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11864__distance))) {
            vlSelf->__Vfunc_shift_jam27__11864__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11864__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11864__distance))) {
            vlSelf->__Vfunc_shift_jam27__11864__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11864__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11864__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11864__value, (IData)(vlSelf->__Vfunc_shift_jam27__11864__distance)));
            vlSelf->__Vfunc_shift_jam27__11864__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11864__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11864__distance)))));
            vlSelf->__Vfunc_shift_jam27__11864__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11864__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11864__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11864__discarded))));
        }
        __Vfunc_round_pack32__11863__shifted = vlSelf->__Vfunc_shift_jam27__11864__Vfuncout;
    }
    __Vfunc_round_pack32__11863__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11863__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11863__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11863__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11863__rounded)) {
        __Vfunc_round_pack32__11863__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11863__rounded, 1U));
        __Vfunc_round_pack32__11863__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11863__adjusted)));
    }
    __Vfunc_round_pack32__11863__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11863__rounded)) {
        __Vfunc_round_pack32__11863__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11863__adjusted)));
    }
    __Vfunc_round_pack32__11863__Vfuncout = (((0U == __Vfunc_round_pack32__11863__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11863__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11863__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11863__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11863__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11863__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11863__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11863__Vfuncout;
    __Vfunc_round_pack32__11851__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11851__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11851__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11851__adjusted = __Vfunc_round_pack32__11851__exponent;
    __Vfunc_round_pack32__11851__shifted = __Vfunc_round_pack32__11851__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11851__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11852__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11851__exponent)));
        vlSelf->__Vfunc_shift_jam27__11852__value = __Vfunc_round_pack32__11851__significand;
        __Vfunc_round_pack32__11851__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11852__distance))) {
            vlSelf->__Vfunc_shift_jam27__11852__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11852__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11852__distance))) {
            vlSelf->__Vfunc_shift_jam27__11852__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11852__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11852__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11852__value, (IData)(vlSelf->__Vfunc_shift_jam27__11852__distance)));
            vlSelf->__Vfunc_shift_jam27__11852__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11852__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11852__distance)))));
            vlSelf->__Vfunc_shift_jam27__11852__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11852__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11852__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11852__discarded))));
        }
        __Vfunc_round_pack32__11851__shifted = vlSelf->__Vfunc_shift_jam27__11852__Vfuncout;
    }
    __Vfunc_round_pack32__11851__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11851__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11851__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11851__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11851__rounded)) {
        __Vfunc_round_pack32__11851__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11851__rounded, 1U));
        __Vfunc_round_pack32__11851__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11851__adjusted)));
    }
    __Vfunc_round_pack32__11851__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11851__rounded)) {
        __Vfunc_round_pack32__11851__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11851__adjusted)));
    }
    __Vfunc_round_pack32__11851__Vfuncout = (((0U == __Vfunc_round_pack32__11851__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11851__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11851__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11851__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11851__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11851__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11851__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11851__Vfuncout;
    __Vfunc_round_pack32__11839__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11839__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11839__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11839__adjusted = __Vfunc_round_pack32__11839__exponent;
    __Vfunc_round_pack32__11839__shifted = __Vfunc_round_pack32__11839__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11839__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11840__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11839__exponent)));
        vlSelf->__Vfunc_shift_jam27__11840__value = __Vfunc_round_pack32__11839__significand;
        __Vfunc_round_pack32__11839__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11840__distance))) {
            vlSelf->__Vfunc_shift_jam27__11840__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11840__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11840__distance))) {
            vlSelf->__Vfunc_shift_jam27__11840__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11840__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11840__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11840__value, (IData)(vlSelf->__Vfunc_shift_jam27__11840__distance)));
            vlSelf->__Vfunc_shift_jam27__11840__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11840__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11840__distance)))));
            vlSelf->__Vfunc_shift_jam27__11840__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11840__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11840__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11840__discarded))));
        }
        __Vfunc_round_pack32__11839__shifted = vlSelf->__Vfunc_shift_jam27__11840__Vfuncout;
    }
    __Vfunc_round_pack32__11839__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11839__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11839__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11839__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11839__rounded)) {
        __Vfunc_round_pack32__11839__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11839__rounded, 1U));
        __Vfunc_round_pack32__11839__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11839__adjusted)));
    }
    __Vfunc_round_pack32__11839__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11839__rounded)) {
        __Vfunc_round_pack32__11839__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11839__adjusted)));
    }
    __Vfunc_round_pack32__11839__Vfuncout = (((0U == __Vfunc_round_pack32__11839__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11839__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11839__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11839__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11839__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11839__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11839__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11839__Vfuncout;
    __Vfunc_round_pack32__11827__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11827__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11827__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11827__adjusted = __Vfunc_round_pack32__11827__exponent;
    __Vfunc_round_pack32__11827__shifted = __Vfunc_round_pack32__11827__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11827__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11828__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11827__exponent)));
        vlSelf->__Vfunc_shift_jam27__11828__value = __Vfunc_round_pack32__11827__significand;
        __Vfunc_round_pack32__11827__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11828__distance))) {
            vlSelf->__Vfunc_shift_jam27__11828__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11828__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11828__distance))) {
            vlSelf->__Vfunc_shift_jam27__11828__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11828__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11828__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11828__value, (IData)(vlSelf->__Vfunc_shift_jam27__11828__distance)));
            vlSelf->__Vfunc_shift_jam27__11828__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11828__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11828__distance)))));
            vlSelf->__Vfunc_shift_jam27__11828__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11828__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11828__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11828__discarded))));
        }
        __Vfunc_round_pack32__11827__shifted = vlSelf->__Vfunc_shift_jam27__11828__Vfuncout;
    }
    __Vfunc_round_pack32__11827__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11827__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11827__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11827__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11827__rounded)) {
        __Vfunc_round_pack32__11827__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11827__rounded, 1U));
        __Vfunc_round_pack32__11827__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11827__adjusted)));
    }
    __Vfunc_round_pack32__11827__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11827__rounded)) {
        __Vfunc_round_pack32__11827__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11827__adjusted)));
    }
    __Vfunc_round_pack32__11827__Vfuncout = (((0U == __Vfunc_round_pack32__11827__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11827__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11827__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11827__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11827__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11827__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11827__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11827__Vfuncout;
    __Vfunc_round_pack32__11815__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11815__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11815__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11815__adjusted = __Vfunc_round_pack32__11815__exponent;
    __Vfunc_round_pack32__11815__shifted = __Vfunc_round_pack32__11815__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11815__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11816__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11815__exponent)));
        vlSelf->__Vfunc_shift_jam27__11816__value = __Vfunc_round_pack32__11815__significand;
        __Vfunc_round_pack32__11815__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11816__distance))) {
            vlSelf->__Vfunc_shift_jam27__11816__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11816__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11816__distance))) {
            vlSelf->__Vfunc_shift_jam27__11816__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11816__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11816__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11816__value, (IData)(vlSelf->__Vfunc_shift_jam27__11816__distance)));
            vlSelf->__Vfunc_shift_jam27__11816__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11816__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11816__distance)))));
            vlSelf->__Vfunc_shift_jam27__11816__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11816__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11816__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11816__discarded))));
        }
        __Vfunc_round_pack32__11815__shifted = vlSelf->__Vfunc_shift_jam27__11816__Vfuncout;
    }
    __Vfunc_round_pack32__11815__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11815__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11815__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11815__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11815__rounded)) {
        __Vfunc_round_pack32__11815__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11815__rounded, 1U));
        __Vfunc_round_pack32__11815__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11815__adjusted)));
    }
    __Vfunc_round_pack32__11815__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11815__rounded)) {
        __Vfunc_round_pack32__11815__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11815__adjusted)));
    }
    __Vfunc_round_pack32__11815__Vfuncout = (((0U == __Vfunc_round_pack32__11815__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11815__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11815__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11815__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11815__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11815__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11815__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11815__Vfuncout;
    __Vfunc_round_pack32__11803__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11803__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11803__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11803__adjusted = __Vfunc_round_pack32__11803__exponent;
    __Vfunc_round_pack32__11803__shifted = __Vfunc_round_pack32__11803__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11803__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11804__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11803__exponent)));
        vlSelf->__Vfunc_shift_jam27__11804__value = __Vfunc_round_pack32__11803__significand;
        __Vfunc_round_pack32__11803__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11804__distance))) {
            vlSelf->__Vfunc_shift_jam27__11804__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11804__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11804__distance))) {
            vlSelf->__Vfunc_shift_jam27__11804__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11804__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11804__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11804__value, (IData)(vlSelf->__Vfunc_shift_jam27__11804__distance)));
            vlSelf->__Vfunc_shift_jam27__11804__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11804__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11804__distance)))));
            vlSelf->__Vfunc_shift_jam27__11804__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11804__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11804__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11804__discarded))));
        }
        __Vfunc_round_pack32__11803__shifted = vlSelf->__Vfunc_shift_jam27__11804__Vfuncout;
    }
    __Vfunc_round_pack32__11803__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11803__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11803__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11803__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11803__rounded)) {
        __Vfunc_round_pack32__11803__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11803__rounded, 1U));
        __Vfunc_round_pack32__11803__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11803__adjusted)));
    }
    __Vfunc_round_pack32__11803__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11803__rounded)) {
        __Vfunc_round_pack32__11803__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11803__adjusted)));
    }
    __Vfunc_round_pack32__11803__Vfuncout = (((0U == __Vfunc_round_pack32__11803__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11803__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11803__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11803__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11803__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11803__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11803__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11803__Vfuncout;
    __Vfunc_round_pack32__11791__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11791__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11791__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11791__adjusted = __Vfunc_round_pack32__11791__exponent;
    __Vfunc_round_pack32__11791__shifted = __Vfunc_round_pack32__11791__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11791__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11792__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11791__exponent)));
        vlSelf->__Vfunc_shift_jam27__11792__value = __Vfunc_round_pack32__11791__significand;
        __Vfunc_round_pack32__11791__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11792__distance))) {
            vlSelf->__Vfunc_shift_jam27__11792__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11792__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11792__distance))) {
            vlSelf->__Vfunc_shift_jam27__11792__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11792__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11792__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11792__value, (IData)(vlSelf->__Vfunc_shift_jam27__11792__distance)));
            vlSelf->__Vfunc_shift_jam27__11792__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11792__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11792__distance)))));
            vlSelf->__Vfunc_shift_jam27__11792__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11792__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11792__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11792__discarded))));
        }
        __Vfunc_round_pack32__11791__shifted = vlSelf->__Vfunc_shift_jam27__11792__Vfuncout;
    }
    __Vfunc_round_pack32__11791__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11791__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11791__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11791__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11791__rounded)) {
        __Vfunc_round_pack32__11791__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11791__rounded, 1U));
        __Vfunc_round_pack32__11791__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11791__adjusted)));
    }
    __Vfunc_round_pack32__11791__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11791__rounded)) {
        __Vfunc_round_pack32__11791__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11791__adjusted)));
    }
    __Vfunc_round_pack32__11791__Vfuncout = (((0U == __Vfunc_round_pack32__11791__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11791__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11791__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11791__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11791__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11791__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11791__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11791__Vfuncout;
    __Vfunc_round_pack32__11779__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11779__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11779__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11779__adjusted = __Vfunc_round_pack32__11779__exponent;
    __Vfunc_round_pack32__11779__shifted = __Vfunc_round_pack32__11779__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11779__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11780__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11779__exponent)));
        vlSelf->__Vfunc_shift_jam27__11780__value = __Vfunc_round_pack32__11779__significand;
        __Vfunc_round_pack32__11779__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11780__distance))) {
            vlSelf->__Vfunc_shift_jam27__11780__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11780__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11780__distance))) {
            vlSelf->__Vfunc_shift_jam27__11780__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11780__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11780__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11780__value, (IData)(vlSelf->__Vfunc_shift_jam27__11780__distance)));
            vlSelf->__Vfunc_shift_jam27__11780__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11780__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11780__distance)))));
            vlSelf->__Vfunc_shift_jam27__11780__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11780__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11780__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11780__discarded))));
        }
        __Vfunc_round_pack32__11779__shifted = vlSelf->__Vfunc_shift_jam27__11780__Vfuncout;
    }
    __Vfunc_round_pack32__11779__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11779__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11779__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11779__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11779__rounded)) {
        __Vfunc_round_pack32__11779__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11779__rounded, 1U));
        __Vfunc_round_pack32__11779__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11779__adjusted)));
    }
    __Vfunc_round_pack32__11779__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11779__rounded)) {
        __Vfunc_round_pack32__11779__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11779__adjusted)));
    }
    __Vfunc_round_pack32__11779__Vfuncout = (((0U == __Vfunc_round_pack32__11779__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11779__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11779__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11779__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11779__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11779__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11779__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11779__Vfuncout;
    __Vfunc_round_pack32__11767__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11767__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11767__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11767__adjusted = __Vfunc_round_pack32__11767__exponent;
    __Vfunc_round_pack32__11767__shifted = __Vfunc_round_pack32__11767__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11767__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11768__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11767__exponent)));
        vlSelf->__Vfunc_shift_jam27__11768__value = __Vfunc_round_pack32__11767__significand;
        __Vfunc_round_pack32__11767__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11768__distance))) {
            vlSelf->__Vfunc_shift_jam27__11768__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11768__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11768__distance))) {
            vlSelf->__Vfunc_shift_jam27__11768__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11768__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11768__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11768__value, (IData)(vlSelf->__Vfunc_shift_jam27__11768__distance)));
            vlSelf->__Vfunc_shift_jam27__11768__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11768__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11768__distance)))));
            vlSelf->__Vfunc_shift_jam27__11768__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11768__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11768__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11768__discarded))));
        }
        __Vfunc_round_pack32__11767__shifted = vlSelf->__Vfunc_shift_jam27__11768__Vfuncout;
    }
    __Vfunc_round_pack32__11767__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11767__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11767__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11767__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11767__rounded)) {
        __Vfunc_round_pack32__11767__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11767__rounded, 1U));
        __Vfunc_round_pack32__11767__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11767__adjusted)));
    }
    __Vfunc_round_pack32__11767__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11767__rounded)) {
        __Vfunc_round_pack32__11767__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11767__adjusted)));
    }
    __Vfunc_round_pack32__11767__Vfuncout = (((0U == __Vfunc_round_pack32__11767__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11767__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11767__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11767__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11767__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11767__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11767__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11767__Vfuncout;
    __Vfunc_round_pack32__11755__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11755__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11755__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11755__adjusted = __Vfunc_round_pack32__11755__exponent;
    __Vfunc_round_pack32__11755__shifted = __Vfunc_round_pack32__11755__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11755__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11756__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11755__exponent)));
        vlSelf->__Vfunc_shift_jam27__11756__value = __Vfunc_round_pack32__11755__significand;
        __Vfunc_round_pack32__11755__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11756__distance))) {
            vlSelf->__Vfunc_shift_jam27__11756__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11756__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11756__distance))) {
            vlSelf->__Vfunc_shift_jam27__11756__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11756__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11756__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11756__value, (IData)(vlSelf->__Vfunc_shift_jam27__11756__distance)));
            vlSelf->__Vfunc_shift_jam27__11756__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11756__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11756__distance)))));
            vlSelf->__Vfunc_shift_jam27__11756__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11756__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11756__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11756__discarded))));
        }
        __Vfunc_round_pack32__11755__shifted = vlSelf->__Vfunc_shift_jam27__11756__Vfuncout;
    }
    __Vfunc_round_pack32__11755__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11755__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11755__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11755__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11755__rounded)) {
        __Vfunc_round_pack32__11755__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11755__rounded, 1U));
        __Vfunc_round_pack32__11755__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11755__adjusted)));
    }
    __Vfunc_round_pack32__11755__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11755__rounded)) {
        __Vfunc_round_pack32__11755__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11755__adjusted)));
    }
    __Vfunc_round_pack32__11755__Vfuncout = (((0U == __Vfunc_round_pack32__11755__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11755__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11755__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11755__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11755__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11755__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11755__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11755__Vfuncout;
    __Vfunc_round_pack32__11743__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11743__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11743__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11743__adjusted = __Vfunc_round_pack32__11743__exponent;
    __Vfunc_round_pack32__11743__shifted = __Vfunc_round_pack32__11743__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11743__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11744__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11743__exponent)));
        vlSelf->__Vfunc_shift_jam27__11744__value = __Vfunc_round_pack32__11743__significand;
        __Vfunc_round_pack32__11743__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11744__distance))) {
            vlSelf->__Vfunc_shift_jam27__11744__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11744__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11744__distance))) {
            vlSelf->__Vfunc_shift_jam27__11744__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11744__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11744__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11744__value, (IData)(vlSelf->__Vfunc_shift_jam27__11744__distance)));
            vlSelf->__Vfunc_shift_jam27__11744__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11744__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11744__distance)))));
            vlSelf->__Vfunc_shift_jam27__11744__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11744__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11744__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11744__discarded))));
        }
        __Vfunc_round_pack32__11743__shifted = vlSelf->__Vfunc_shift_jam27__11744__Vfuncout;
    }
    __Vfunc_round_pack32__11743__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11743__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11743__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11743__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11743__rounded)) {
        __Vfunc_round_pack32__11743__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11743__rounded, 1U));
        __Vfunc_round_pack32__11743__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11743__adjusted)));
    }
    __Vfunc_round_pack32__11743__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11743__rounded)) {
        __Vfunc_round_pack32__11743__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11743__adjusted)));
    }
    __Vfunc_round_pack32__11743__Vfuncout = (((0U == __Vfunc_round_pack32__11743__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11743__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11743__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11743__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11743__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11743__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11743__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11743__Vfuncout;
    __Vfunc_round_pack32__11731__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11731__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11731__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11731__adjusted = __Vfunc_round_pack32__11731__exponent;
    __Vfunc_round_pack32__11731__shifted = __Vfunc_round_pack32__11731__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11731__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11732__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11731__exponent)));
        vlSelf->__Vfunc_shift_jam27__11732__value = __Vfunc_round_pack32__11731__significand;
        __Vfunc_round_pack32__11731__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11732__distance))) {
            vlSelf->__Vfunc_shift_jam27__11732__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11732__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11732__distance))) {
            vlSelf->__Vfunc_shift_jam27__11732__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11732__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11732__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11732__value, (IData)(vlSelf->__Vfunc_shift_jam27__11732__distance)));
            vlSelf->__Vfunc_shift_jam27__11732__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11732__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11732__distance)))));
            vlSelf->__Vfunc_shift_jam27__11732__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11732__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11732__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11732__discarded))));
        }
        __Vfunc_round_pack32__11731__shifted = vlSelf->__Vfunc_shift_jam27__11732__Vfuncout;
    }
    __Vfunc_round_pack32__11731__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11731__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11731__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11731__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11731__rounded)) {
        __Vfunc_round_pack32__11731__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11731__rounded, 1U));
        __Vfunc_round_pack32__11731__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11731__adjusted)));
    }
    __Vfunc_round_pack32__11731__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11731__rounded)) {
        __Vfunc_round_pack32__11731__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11731__adjusted)));
    }
    __Vfunc_round_pack32__11731__Vfuncout = (((0U == __Vfunc_round_pack32__11731__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11731__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11731__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11731__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11731__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11731__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11731__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11731__Vfuncout;
    __Vfunc_round_pack32__11719__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11719__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11719__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11719__adjusted = __Vfunc_round_pack32__11719__exponent;
    __Vfunc_round_pack32__11719__shifted = __Vfunc_round_pack32__11719__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11719__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11720__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11719__exponent)));
        vlSelf->__Vfunc_shift_jam27__11720__value = __Vfunc_round_pack32__11719__significand;
        __Vfunc_round_pack32__11719__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11720__distance))) {
            vlSelf->__Vfunc_shift_jam27__11720__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11720__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11720__distance))) {
            vlSelf->__Vfunc_shift_jam27__11720__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11720__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11720__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11720__value, (IData)(vlSelf->__Vfunc_shift_jam27__11720__distance)));
            vlSelf->__Vfunc_shift_jam27__11720__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11720__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11720__distance)))));
            vlSelf->__Vfunc_shift_jam27__11720__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11720__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11720__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11720__discarded))));
        }
        __Vfunc_round_pack32__11719__shifted = vlSelf->__Vfunc_shift_jam27__11720__Vfuncout;
    }
    __Vfunc_round_pack32__11719__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11719__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11719__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11719__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11719__rounded)) {
        __Vfunc_round_pack32__11719__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11719__rounded, 1U));
        __Vfunc_round_pack32__11719__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11719__adjusted)));
    }
    __Vfunc_round_pack32__11719__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11719__rounded)) {
        __Vfunc_round_pack32__11719__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11719__adjusted)));
    }
    __Vfunc_round_pack32__11719__Vfuncout = (((0U == __Vfunc_round_pack32__11719__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11719__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11719__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11719__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11719__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11719__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11719__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11719__Vfuncout;
    __Vfunc_round_pack32__11707__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11707__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11707__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11707__adjusted = __Vfunc_round_pack32__11707__exponent;
    __Vfunc_round_pack32__11707__shifted = __Vfunc_round_pack32__11707__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11707__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11708__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11707__exponent)));
        vlSelf->__Vfunc_shift_jam27__11708__value = __Vfunc_round_pack32__11707__significand;
        __Vfunc_round_pack32__11707__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11708__distance))) {
            vlSelf->__Vfunc_shift_jam27__11708__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11708__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11708__distance))) {
            vlSelf->__Vfunc_shift_jam27__11708__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11708__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11708__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11708__value, (IData)(vlSelf->__Vfunc_shift_jam27__11708__distance)));
            vlSelf->__Vfunc_shift_jam27__11708__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11708__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11708__distance)))));
            vlSelf->__Vfunc_shift_jam27__11708__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11708__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11708__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11708__discarded))));
        }
        __Vfunc_round_pack32__11707__shifted = vlSelf->__Vfunc_shift_jam27__11708__Vfuncout;
    }
    __Vfunc_round_pack32__11707__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11707__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11707__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11707__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11707__rounded)) {
        __Vfunc_round_pack32__11707__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11707__rounded, 1U));
        __Vfunc_round_pack32__11707__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11707__adjusted)));
    }
    __Vfunc_round_pack32__11707__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11707__rounded)) {
        __Vfunc_round_pack32__11707__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11707__adjusted)));
    }
    __Vfunc_round_pack32__11707__Vfuncout = (((0U == __Vfunc_round_pack32__11707__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11707__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11707__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11707__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11707__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11707__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11707__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11707__Vfuncout;
    __Vfunc_round_pack32__11695__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11695__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11695__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11695__adjusted = __Vfunc_round_pack32__11695__exponent;
    __Vfunc_round_pack32__11695__shifted = __Vfunc_round_pack32__11695__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11695__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11696__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11695__exponent)));
        vlSelf->__Vfunc_shift_jam27__11696__value = __Vfunc_round_pack32__11695__significand;
        __Vfunc_round_pack32__11695__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11696__distance))) {
            vlSelf->__Vfunc_shift_jam27__11696__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11696__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11696__distance))) {
            vlSelf->__Vfunc_shift_jam27__11696__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11696__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11696__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11696__value, (IData)(vlSelf->__Vfunc_shift_jam27__11696__distance)));
            vlSelf->__Vfunc_shift_jam27__11696__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11696__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11696__distance)))));
            vlSelf->__Vfunc_shift_jam27__11696__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11696__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11696__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11696__discarded))));
        }
        __Vfunc_round_pack32__11695__shifted = vlSelf->__Vfunc_shift_jam27__11696__Vfuncout;
    }
    __Vfunc_round_pack32__11695__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11695__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11695__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11695__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11695__rounded)) {
        __Vfunc_round_pack32__11695__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11695__rounded, 1U));
        __Vfunc_round_pack32__11695__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11695__adjusted)));
    }
    __Vfunc_round_pack32__11695__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11695__rounded)) {
        __Vfunc_round_pack32__11695__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11695__adjusted)));
    }
    __Vfunc_round_pack32__11695__Vfuncout = (((0U == __Vfunc_round_pack32__11695__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11695__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11695__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11695__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11695__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11695__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11695__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11695__Vfuncout;
    __Vfunc_round_pack32__11683__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11683__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11683__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11683__adjusted = __Vfunc_round_pack32__11683__exponent;
    __Vfunc_round_pack32__11683__shifted = __Vfunc_round_pack32__11683__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11683__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11684__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11683__exponent)));
        vlSelf->__Vfunc_shift_jam27__11684__value = __Vfunc_round_pack32__11683__significand;
        __Vfunc_round_pack32__11683__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11684__distance))) {
            vlSelf->__Vfunc_shift_jam27__11684__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11684__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11684__distance))) {
            vlSelf->__Vfunc_shift_jam27__11684__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11684__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11684__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11684__value, (IData)(vlSelf->__Vfunc_shift_jam27__11684__distance)));
            vlSelf->__Vfunc_shift_jam27__11684__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11684__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11684__distance)))));
            vlSelf->__Vfunc_shift_jam27__11684__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11684__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11684__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11684__discarded))));
        }
        __Vfunc_round_pack32__11683__shifted = vlSelf->__Vfunc_shift_jam27__11684__Vfuncout;
    }
    __Vfunc_round_pack32__11683__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11683__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11683__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11683__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11683__rounded)) {
        __Vfunc_round_pack32__11683__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11683__rounded, 1U));
        __Vfunc_round_pack32__11683__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11683__adjusted)));
    }
    __Vfunc_round_pack32__11683__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11683__rounded)) {
        __Vfunc_round_pack32__11683__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11683__adjusted)));
    }
    __Vfunc_round_pack32__11683__Vfuncout = (((0U == __Vfunc_round_pack32__11683__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11683__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11683__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11683__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11683__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11683__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11683__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11683__Vfuncout;
    __Vfunc_round_pack32__11671__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11671__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11671__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11671__adjusted = __Vfunc_round_pack32__11671__exponent;
    __Vfunc_round_pack32__11671__shifted = __Vfunc_round_pack32__11671__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11671__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11672__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11671__exponent)));
        vlSelf->__Vfunc_shift_jam27__11672__value = __Vfunc_round_pack32__11671__significand;
        __Vfunc_round_pack32__11671__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11672__distance))) {
            vlSelf->__Vfunc_shift_jam27__11672__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11672__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11672__distance))) {
            vlSelf->__Vfunc_shift_jam27__11672__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11672__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11672__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11672__value, (IData)(vlSelf->__Vfunc_shift_jam27__11672__distance)));
            vlSelf->__Vfunc_shift_jam27__11672__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11672__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11672__distance)))));
            vlSelf->__Vfunc_shift_jam27__11672__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11672__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11672__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11672__discarded))));
        }
        __Vfunc_round_pack32__11671__shifted = vlSelf->__Vfunc_shift_jam27__11672__Vfuncout;
    }
    __Vfunc_round_pack32__11671__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11671__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11671__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11671__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11671__rounded)) {
        __Vfunc_round_pack32__11671__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11671__rounded, 1U));
        __Vfunc_round_pack32__11671__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11671__adjusted)));
    }
    __Vfunc_round_pack32__11671__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11671__rounded)) {
        __Vfunc_round_pack32__11671__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11671__adjusted)));
    }
    __Vfunc_round_pack32__11671__Vfuncout = (((0U == __Vfunc_round_pack32__11671__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11671__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11671__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11671__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11671__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11671__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11671__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11671__Vfuncout;
    __Vfunc_round_pack32__11659__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11659__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11659__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11659__adjusted = __Vfunc_round_pack32__11659__exponent;
    __Vfunc_round_pack32__11659__shifted = __Vfunc_round_pack32__11659__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11659__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11660__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11659__exponent)));
        vlSelf->__Vfunc_shift_jam27__11660__value = __Vfunc_round_pack32__11659__significand;
        __Vfunc_round_pack32__11659__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11660__distance))) {
            vlSelf->__Vfunc_shift_jam27__11660__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11660__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11660__distance))) {
            vlSelf->__Vfunc_shift_jam27__11660__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11660__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11660__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11660__value, (IData)(vlSelf->__Vfunc_shift_jam27__11660__distance)));
            vlSelf->__Vfunc_shift_jam27__11660__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11660__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11660__distance)))));
            vlSelf->__Vfunc_shift_jam27__11660__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11660__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11660__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11660__discarded))));
        }
        __Vfunc_round_pack32__11659__shifted = vlSelf->__Vfunc_shift_jam27__11660__Vfuncout;
    }
    __Vfunc_round_pack32__11659__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11659__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11659__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11659__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11659__rounded)) {
        __Vfunc_round_pack32__11659__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11659__rounded, 1U));
        __Vfunc_round_pack32__11659__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11659__adjusted)));
    }
    __Vfunc_round_pack32__11659__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11659__rounded)) {
        __Vfunc_round_pack32__11659__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11659__adjusted)));
    }
    __Vfunc_round_pack32__11659__Vfuncout = (((0U == __Vfunc_round_pack32__11659__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11659__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11659__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11659__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11659__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11659__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11659__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11659__Vfuncout;
    vlSelf->__Vfunc_round_pack32__11647__significand 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11647__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__exponent3;
    vlSelf->__Vfunc_round_pack32__11647__negative = 
        (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__negative) 
               >> 2U));
    vlSelf->__Vfunc_round_pack32__11647__adjusted = __Vfunc_round_pack32__11647__exponent;
    __Vfunc_round_pack32__11647__shifted = vlSelf->__Vfunc_round_pack32__11647__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11647__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11648__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11647__exponent)));
        vlSelf->__Vfunc_shift_jam27__11648__value = vlSelf->__Vfunc_round_pack32__11647__significand;
        vlSelf->__Vfunc_round_pack32__11647__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11648__distance))) {
            vlSelf->__Vfunc_shift_jam27__11648__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11648__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11648__distance))) {
            vlSelf->__Vfunc_shift_jam27__11648__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11648__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11648__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11648__value, (IData)(vlSelf->__Vfunc_shift_jam27__11648__distance)));
            vlSelf->__Vfunc_shift_jam27__11648__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11648__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11648__distance)))));
            vlSelf->__Vfunc_shift_jam27__11648__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11648__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11648__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11648__discarded))));
        }
        __Vfunc_round_pack32__11647__shifted = vlSelf->__Vfunc_shift_jam27__11648__Vfuncout;
    }
    vlSelf->__Vfunc_round_pack32__11647__rounded = 
        (0x1ffffffU & ((0xffffffU & (__Vfunc_round_pack32__11647__shifted 
                                     >> 3U)) + (1U 
                                                & ((__Vfunc_round_pack32__11647__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__11647__shifted)))))));
    if ((0x1000000U & vlSelf->__Vfunc_round_pack32__11647__rounded)) {
        vlSelf->__Vfunc_round_pack32__11647__rounded 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__11647__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__11647__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__11647__adjusted)));
    }
    __Vfunc_round_pack32__11647__biased = 0U;
    if ((0x800000U & vlSelf->__Vfunc_round_pack32__11647__rounded)) {
        __Vfunc_round_pack32__11647__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(vlSelf->__Vfunc_round_pack32__11647__adjusted)));
    }
    __Vfunc_round_pack32__11647__Vfuncout = (((0U == vlSelf->__Vfunc_round_pack32__11647__significand) 
                                              | (0U 
                                                 == vlSelf->__Vfunc_round_pack32__11647__rounded))
                                              ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__11647__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__11647__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(vlSelf->__Vfunc_round_pack32__11647__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11647__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & vlSelf->__Vfunc_round_pack32__11647__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11647__Vfuncout;
    __Vfunc_round_pack32__11635__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11635__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11635__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11635__adjusted = __Vfunc_round_pack32__11635__exponent;
    __Vfunc_round_pack32__11635__shifted = __Vfunc_round_pack32__11635__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11635__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11636__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11635__exponent)));
        vlSelf->__Vfunc_shift_jam27__11636__value = __Vfunc_round_pack32__11635__significand;
        __Vfunc_round_pack32__11635__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11636__distance))) {
            vlSelf->__Vfunc_shift_jam27__11636__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11636__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11636__distance))) {
            vlSelf->__Vfunc_shift_jam27__11636__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11636__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11636__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11636__value, (IData)(vlSelf->__Vfunc_shift_jam27__11636__distance)));
            vlSelf->__Vfunc_shift_jam27__11636__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11636__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11636__distance)))));
            vlSelf->__Vfunc_shift_jam27__11636__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11636__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11636__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11636__discarded))));
        }
        __Vfunc_round_pack32__11635__shifted = vlSelf->__Vfunc_shift_jam27__11636__Vfuncout;
    }
    __Vfunc_round_pack32__11635__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11635__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11635__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11635__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11635__rounded)) {
        __Vfunc_round_pack32__11635__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11635__rounded, 1U));
        __Vfunc_round_pack32__11635__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11635__adjusted)));
    }
    __Vfunc_round_pack32__11635__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11635__rounded)) {
        __Vfunc_round_pack32__11635__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11635__adjusted)));
    }
    __Vfunc_round_pack32__11635__Vfuncout = (((0U == __Vfunc_round_pack32__11635__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11635__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11635__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11635__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11635__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11635__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11635__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11635__Vfuncout;
    __Vfunc_round_pack32__11623__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11623__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11623__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11623__adjusted = __Vfunc_round_pack32__11623__exponent;
    __Vfunc_round_pack32__11623__shifted = __Vfunc_round_pack32__11623__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11623__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11624__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11623__exponent)));
        vlSelf->__Vfunc_shift_jam27__11624__value = __Vfunc_round_pack32__11623__significand;
        __Vfunc_round_pack32__11623__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11624__distance))) {
            vlSelf->__Vfunc_shift_jam27__11624__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11624__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11624__distance))) {
            vlSelf->__Vfunc_shift_jam27__11624__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11624__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11624__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11624__value, (IData)(vlSelf->__Vfunc_shift_jam27__11624__distance)));
            vlSelf->__Vfunc_shift_jam27__11624__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11624__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11624__distance)))));
            vlSelf->__Vfunc_shift_jam27__11624__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11624__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11624__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11624__discarded))));
        }
        __Vfunc_round_pack32__11623__shifted = vlSelf->__Vfunc_shift_jam27__11624__Vfuncout;
    }
    __Vfunc_round_pack32__11623__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11623__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11623__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11623__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11623__rounded)) {
        __Vfunc_round_pack32__11623__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11623__rounded, 1U));
        __Vfunc_round_pack32__11623__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11623__adjusted)));
    }
    __Vfunc_round_pack32__11623__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11623__rounded)) {
        __Vfunc_round_pack32__11623__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11623__adjusted)));
    }
    __Vfunc_round_pack32__11623__Vfuncout = (((0U == __Vfunc_round_pack32__11623__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11623__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11623__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11623__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11623__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11623__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11623__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11623__Vfuncout;
    __Vfunc_round_pack32__11611__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11611__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11611__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11611__adjusted = __Vfunc_round_pack32__11611__exponent;
    __Vfunc_round_pack32__11611__shifted = __Vfunc_round_pack32__11611__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11611__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11612__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11611__exponent)));
        vlSelf->__Vfunc_shift_jam27__11612__value = __Vfunc_round_pack32__11611__significand;
        __Vfunc_round_pack32__11611__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11612__distance))) {
            vlSelf->__Vfunc_shift_jam27__11612__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11612__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11612__distance))) {
            vlSelf->__Vfunc_shift_jam27__11612__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11612__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11612__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11612__value, (IData)(vlSelf->__Vfunc_shift_jam27__11612__distance)));
            vlSelf->__Vfunc_shift_jam27__11612__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11612__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11612__distance)))));
            vlSelf->__Vfunc_shift_jam27__11612__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11612__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11612__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11612__discarded))));
        }
        __Vfunc_round_pack32__11611__shifted = vlSelf->__Vfunc_shift_jam27__11612__Vfuncout;
    }
    __Vfunc_round_pack32__11611__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11611__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11611__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11611__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11611__rounded)) {
        __Vfunc_round_pack32__11611__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11611__rounded, 1U));
        __Vfunc_round_pack32__11611__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11611__adjusted)));
    }
    __Vfunc_round_pack32__11611__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11611__rounded)) {
        __Vfunc_round_pack32__11611__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11611__adjusted)));
    }
    __Vfunc_round_pack32__11611__Vfuncout = (((0U == __Vfunc_round_pack32__11611__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11611__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11611__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11611__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11611__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11611__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11611__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11611__Vfuncout;
    __Vfunc_round_pack32__11599__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11599__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11599__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11599__adjusted = __Vfunc_round_pack32__11599__exponent;
    __Vfunc_round_pack32__11599__shifted = __Vfunc_round_pack32__11599__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11599__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11600__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11599__exponent)));
        vlSelf->__Vfunc_shift_jam27__11600__value = __Vfunc_round_pack32__11599__significand;
        __Vfunc_round_pack32__11599__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11600__distance))) {
            vlSelf->__Vfunc_shift_jam27__11600__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11600__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11600__distance))) {
            vlSelf->__Vfunc_shift_jam27__11600__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11600__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11600__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11600__value, (IData)(vlSelf->__Vfunc_shift_jam27__11600__distance)));
            vlSelf->__Vfunc_shift_jam27__11600__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11600__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11600__distance)))));
            vlSelf->__Vfunc_shift_jam27__11600__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11600__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11600__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11600__discarded))));
        }
        __Vfunc_round_pack32__11599__shifted = vlSelf->__Vfunc_shift_jam27__11600__Vfuncout;
    }
    __Vfunc_round_pack32__11599__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11599__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11599__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11599__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11599__rounded)) {
        __Vfunc_round_pack32__11599__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11599__rounded, 1U));
        __Vfunc_round_pack32__11599__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11599__adjusted)));
    }
    __Vfunc_round_pack32__11599__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11599__rounded)) {
        __Vfunc_round_pack32__11599__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11599__adjusted)));
    }
    __Vfunc_round_pack32__11599__Vfuncout = (((0U == __Vfunc_round_pack32__11599__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11599__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11599__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11599__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11599__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11599__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11599__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11599__Vfuncout;
    __Vfunc_round_pack32__11587__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11587__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11587__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11587__adjusted = __Vfunc_round_pack32__11587__exponent;
    __Vfunc_round_pack32__11587__shifted = __Vfunc_round_pack32__11587__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11587__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11588__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11587__exponent)));
        vlSelf->__Vfunc_shift_jam27__11588__value = __Vfunc_round_pack32__11587__significand;
        __Vfunc_round_pack32__11587__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11588__distance))) {
            vlSelf->__Vfunc_shift_jam27__11588__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11588__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11588__distance))) {
            vlSelf->__Vfunc_shift_jam27__11588__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11588__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11588__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11588__value, (IData)(vlSelf->__Vfunc_shift_jam27__11588__distance)));
            vlSelf->__Vfunc_shift_jam27__11588__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11588__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11588__distance)))));
            vlSelf->__Vfunc_shift_jam27__11588__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11588__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11588__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11588__discarded))));
        }
        __Vfunc_round_pack32__11587__shifted = vlSelf->__Vfunc_shift_jam27__11588__Vfuncout;
    }
    __Vfunc_round_pack32__11587__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11587__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11587__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11587__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11587__rounded)) {
        __Vfunc_round_pack32__11587__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11587__rounded, 1U));
        __Vfunc_round_pack32__11587__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11587__adjusted)));
    }
    __Vfunc_round_pack32__11587__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11587__rounded)) {
        __Vfunc_round_pack32__11587__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11587__adjusted)));
    }
    __Vfunc_round_pack32__11587__Vfuncout = (((0U == __Vfunc_round_pack32__11587__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11587__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11587__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11587__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11587__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11587__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11587__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11587__Vfuncout;
    __Vfunc_round_pack32__11575__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11575__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11575__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11575__adjusted = __Vfunc_round_pack32__11575__exponent;
    __Vfunc_round_pack32__11575__shifted = __Vfunc_round_pack32__11575__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11575__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11576__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11575__exponent)));
        vlSelf->__Vfunc_shift_jam27__11576__value = __Vfunc_round_pack32__11575__significand;
        __Vfunc_round_pack32__11575__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11576__distance))) {
            vlSelf->__Vfunc_shift_jam27__11576__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11576__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11576__distance))) {
            vlSelf->__Vfunc_shift_jam27__11576__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11576__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11576__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11576__value, (IData)(vlSelf->__Vfunc_shift_jam27__11576__distance)));
            vlSelf->__Vfunc_shift_jam27__11576__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11576__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11576__distance)))));
            vlSelf->__Vfunc_shift_jam27__11576__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11576__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11576__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11576__discarded))));
        }
        __Vfunc_round_pack32__11575__shifted = vlSelf->__Vfunc_shift_jam27__11576__Vfuncout;
    }
    __Vfunc_round_pack32__11575__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11575__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11575__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11575__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11575__rounded)) {
        __Vfunc_round_pack32__11575__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11575__rounded, 1U));
        __Vfunc_round_pack32__11575__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11575__adjusted)));
    }
    __Vfunc_round_pack32__11575__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11575__rounded)) {
        __Vfunc_round_pack32__11575__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11575__adjusted)));
    }
    __Vfunc_round_pack32__11575__Vfuncout = (((0U == __Vfunc_round_pack32__11575__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11575__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11575__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11575__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11575__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11575__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11575__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11575__Vfuncout;
    __Vfunc_round_pack32__11563__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11563__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11563__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11563__adjusted = __Vfunc_round_pack32__11563__exponent;
    __Vfunc_round_pack32__11563__shifted = __Vfunc_round_pack32__11563__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11563__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11564__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11563__exponent)));
        vlSelf->__Vfunc_shift_jam27__11564__value = __Vfunc_round_pack32__11563__significand;
        __Vfunc_round_pack32__11563__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11564__distance))) {
            vlSelf->__Vfunc_shift_jam27__11564__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11564__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11564__distance))) {
            vlSelf->__Vfunc_shift_jam27__11564__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11564__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11564__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11564__value, (IData)(vlSelf->__Vfunc_shift_jam27__11564__distance)));
            vlSelf->__Vfunc_shift_jam27__11564__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11564__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11564__distance)))));
            vlSelf->__Vfunc_shift_jam27__11564__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11564__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11564__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11564__discarded))));
        }
        __Vfunc_round_pack32__11563__shifted = vlSelf->__Vfunc_shift_jam27__11564__Vfuncout;
    }
    __Vfunc_round_pack32__11563__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11563__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11563__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11563__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11563__rounded)) {
        __Vfunc_round_pack32__11563__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11563__rounded, 1U));
        __Vfunc_round_pack32__11563__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11563__adjusted)));
    }
    __Vfunc_round_pack32__11563__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11563__rounded)) {
        __Vfunc_round_pack32__11563__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11563__adjusted)));
    }
    __Vfunc_round_pack32__11563__Vfuncout = (((0U == __Vfunc_round_pack32__11563__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11563__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11563__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11563__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11563__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11563__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11563__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11563__Vfuncout;
    __Vfunc_round_pack32__11551__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11551__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11551__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11551__adjusted = __Vfunc_round_pack32__11551__exponent;
    __Vfunc_round_pack32__11551__shifted = __Vfunc_round_pack32__11551__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11551__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11552__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11551__exponent)));
        vlSelf->__Vfunc_shift_jam27__11552__value = __Vfunc_round_pack32__11551__significand;
        __Vfunc_round_pack32__11551__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11552__distance))) {
            vlSelf->__Vfunc_shift_jam27__11552__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11552__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11552__distance))) {
            vlSelf->__Vfunc_shift_jam27__11552__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11552__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11552__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11552__value, (IData)(vlSelf->__Vfunc_shift_jam27__11552__distance)));
            vlSelf->__Vfunc_shift_jam27__11552__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11552__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11552__distance)))));
            vlSelf->__Vfunc_shift_jam27__11552__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11552__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11552__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11552__discarded))));
        }
        __Vfunc_round_pack32__11551__shifted = vlSelf->__Vfunc_shift_jam27__11552__Vfuncout;
    }
    __Vfunc_round_pack32__11551__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11551__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11551__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11551__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11551__rounded)) {
        __Vfunc_round_pack32__11551__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11551__rounded, 1U));
        __Vfunc_round_pack32__11551__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11551__adjusted)));
    }
    __Vfunc_round_pack32__11551__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11551__rounded)) {
        __Vfunc_round_pack32__11551__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11551__adjusted)));
    }
    __Vfunc_round_pack32__11551__Vfuncout = (((0U == __Vfunc_round_pack32__11551__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11551__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11551__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11551__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11551__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11551__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11551__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11551__Vfuncout;
    __Vfunc_round_pack32__11539__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11539__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11539__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11539__adjusted = __Vfunc_round_pack32__11539__exponent;
    __Vfunc_round_pack32__11539__shifted = __Vfunc_round_pack32__11539__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11539__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11540__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11539__exponent)));
        vlSelf->__Vfunc_shift_jam27__11540__value = __Vfunc_round_pack32__11539__significand;
        __Vfunc_round_pack32__11539__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11540__distance))) {
            vlSelf->__Vfunc_shift_jam27__11540__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11540__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11540__distance))) {
            vlSelf->__Vfunc_shift_jam27__11540__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11540__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11540__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11540__value, (IData)(vlSelf->__Vfunc_shift_jam27__11540__distance)));
            vlSelf->__Vfunc_shift_jam27__11540__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11540__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11540__distance)))));
            vlSelf->__Vfunc_shift_jam27__11540__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11540__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11540__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11540__discarded))));
        }
        __Vfunc_round_pack32__11539__shifted = vlSelf->__Vfunc_shift_jam27__11540__Vfuncout;
    }
    __Vfunc_round_pack32__11539__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11539__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11539__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11539__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11539__rounded)) {
        __Vfunc_round_pack32__11539__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11539__rounded, 1U));
        __Vfunc_round_pack32__11539__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11539__adjusted)));
    }
    __Vfunc_round_pack32__11539__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11539__rounded)) {
        __Vfunc_round_pack32__11539__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11539__adjusted)));
    }
    __Vfunc_round_pack32__11539__Vfuncout = (((0U == __Vfunc_round_pack32__11539__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11539__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11539__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11539__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11539__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11539__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11539__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11539__Vfuncout;
    __Vfunc_round_pack32__11527__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11527__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11527__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11527__adjusted = __Vfunc_round_pack32__11527__exponent;
    __Vfunc_round_pack32__11527__shifted = __Vfunc_round_pack32__11527__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11527__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11528__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11527__exponent)));
        vlSelf->__Vfunc_shift_jam27__11528__value = __Vfunc_round_pack32__11527__significand;
        __Vfunc_round_pack32__11527__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11528__distance))) {
            vlSelf->__Vfunc_shift_jam27__11528__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11528__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11528__distance))) {
            vlSelf->__Vfunc_shift_jam27__11528__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11528__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11528__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11528__value, (IData)(vlSelf->__Vfunc_shift_jam27__11528__distance)));
            vlSelf->__Vfunc_shift_jam27__11528__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11528__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11528__distance)))));
            vlSelf->__Vfunc_shift_jam27__11528__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11528__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11528__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11528__discarded))));
        }
        __Vfunc_round_pack32__11527__shifted = vlSelf->__Vfunc_shift_jam27__11528__Vfuncout;
    }
    __Vfunc_round_pack32__11527__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11527__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11527__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11527__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11527__rounded)) {
        __Vfunc_round_pack32__11527__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11527__rounded, 1U));
        __Vfunc_round_pack32__11527__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11527__adjusted)));
    }
    __Vfunc_round_pack32__11527__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11527__rounded)) {
        __Vfunc_round_pack32__11527__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11527__adjusted)));
    }
    __Vfunc_round_pack32__11527__Vfuncout = (((0U == __Vfunc_round_pack32__11527__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11527__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11527__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11527__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11527__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11527__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11527__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11527__Vfuncout;
    __Vfunc_round_pack32__11515__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11515__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11515__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11515__adjusted = __Vfunc_round_pack32__11515__exponent;
    __Vfunc_round_pack32__11515__shifted = __Vfunc_round_pack32__11515__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11515__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11516__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11515__exponent)));
        vlSelf->__Vfunc_shift_jam27__11516__value = __Vfunc_round_pack32__11515__significand;
        __Vfunc_round_pack32__11515__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11516__distance))) {
            vlSelf->__Vfunc_shift_jam27__11516__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11516__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11516__distance))) {
            vlSelf->__Vfunc_shift_jam27__11516__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11516__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11516__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11516__value, (IData)(vlSelf->__Vfunc_shift_jam27__11516__distance)));
            vlSelf->__Vfunc_shift_jam27__11516__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11516__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11516__distance)))));
            vlSelf->__Vfunc_shift_jam27__11516__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11516__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11516__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11516__discarded))));
        }
        __Vfunc_round_pack32__11515__shifted = vlSelf->__Vfunc_shift_jam27__11516__Vfuncout;
    }
    __Vfunc_round_pack32__11515__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11515__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11515__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11515__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11515__rounded)) {
        __Vfunc_round_pack32__11515__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11515__rounded, 1U));
        __Vfunc_round_pack32__11515__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11515__adjusted)));
    }
    __Vfunc_round_pack32__11515__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11515__rounded)) {
        __Vfunc_round_pack32__11515__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11515__adjusted)));
    }
    __Vfunc_round_pack32__11515__Vfuncout = (((0U == __Vfunc_round_pack32__11515__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11515__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11515__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11515__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11515__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11515__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11515__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11515__Vfuncout;
    __Vfunc_round_pack32__11503__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11503__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11503__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11503__adjusted = __Vfunc_round_pack32__11503__exponent;
    __Vfunc_round_pack32__11503__shifted = __Vfunc_round_pack32__11503__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11503__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11504__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11503__exponent)));
        vlSelf->__Vfunc_shift_jam27__11504__value = __Vfunc_round_pack32__11503__significand;
        __Vfunc_round_pack32__11503__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11504__distance))) {
            vlSelf->__Vfunc_shift_jam27__11504__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11504__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11504__distance))) {
            vlSelf->__Vfunc_shift_jam27__11504__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11504__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11504__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11504__value, (IData)(vlSelf->__Vfunc_shift_jam27__11504__distance)));
            vlSelf->__Vfunc_shift_jam27__11504__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11504__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11504__distance)))));
            vlSelf->__Vfunc_shift_jam27__11504__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11504__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11504__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11504__discarded))));
        }
        __Vfunc_round_pack32__11503__shifted = vlSelf->__Vfunc_shift_jam27__11504__Vfuncout;
    }
    __Vfunc_round_pack32__11503__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11503__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11503__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11503__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11503__rounded)) {
        __Vfunc_round_pack32__11503__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11503__rounded, 1U));
        __Vfunc_round_pack32__11503__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11503__adjusted)));
    }
    __Vfunc_round_pack32__11503__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11503__rounded)) {
        __Vfunc_round_pack32__11503__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11503__adjusted)));
    }
    __Vfunc_round_pack32__11503__Vfuncout = (((0U == __Vfunc_round_pack32__11503__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11503__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11503__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11503__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11503__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11503__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11503__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11503__Vfuncout;
    __Vfunc_round_pack32__11491__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11491__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11491__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11491__adjusted = __Vfunc_round_pack32__11491__exponent;
    __Vfunc_round_pack32__11491__shifted = __Vfunc_round_pack32__11491__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11491__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11492__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11491__exponent)));
        vlSelf->__Vfunc_shift_jam27__11492__value = __Vfunc_round_pack32__11491__significand;
        __Vfunc_round_pack32__11491__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11492__distance))) {
            vlSelf->__Vfunc_shift_jam27__11492__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11492__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11492__distance))) {
            vlSelf->__Vfunc_shift_jam27__11492__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11492__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11492__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11492__value, (IData)(vlSelf->__Vfunc_shift_jam27__11492__distance)));
            vlSelf->__Vfunc_shift_jam27__11492__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11492__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11492__distance)))));
            vlSelf->__Vfunc_shift_jam27__11492__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11492__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11492__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11492__discarded))));
        }
        __Vfunc_round_pack32__11491__shifted = vlSelf->__Vfunc_shift_jam27__11492__Vfuncout;
    }
    __Vfunc_round_pack32__11491__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11491__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11491__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11491__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11491__rounded)) {
        __Vfunc_round_pack32__11491__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11491__rounded, 1U));
        __Vfunc_round_pack32__11491__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11491__adjusted)));
    }
    __Vfunc_round_pack32__11491__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11491__rounded)) {
        __Vfunc_round_pack32__11491__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11491__adjusted)));
    }
    __Vfunc_round_pack32__11491__Vfuncout = (((0U == __Vfunc_round_pack32__11491__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11491__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11491__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11491__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11491__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11491__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11491__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11491__Vfuncout;
    __Vfunc_round_pack32__11479__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11479__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11479__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11479__adjusted = __Vfunc_round_pack32__11479__exponent;
    __Vfunc_round_pack32__11479__shifted = __Vfunc_round_pack32__11479__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11479__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11480__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11479__exponent)));
        vlSelf->__Vfunc_shift_jam27__11480__value = __Vfunc_round_pack32__11479__significand;
        __Vfunc_round_pack32__11479__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11480__distance))) {
            vlSelf->__Vfunc_shift_jam27__11480__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11480__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11480__distance))) {
            vlSelf->__Vfunc_shift_jam27__11480__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11480__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11480__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11480__value, (IData)(vlSelf->__Vfunc_shift_jam27__11480__distance)));
            vlSelf->__Vfunc_shift_jam27__11480__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11480__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11480__distance)))));
            vlSelf->__Vfunc_shift_jam27__11480__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11480__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11480__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11480__discarded))));
        }
        __Vfunc_round_pack32__11479__shifted = vlSelf->__Vfunc_shift_jam27__11480__Vfuncout;
    }
    __Vfunc_round_pack32__11479__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11479__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11479__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11479__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11479__rounded)) {
        __Vfunc_round_pack32__11479__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11479__rounded, 1U));
        __Vfunc_round_pack32__11479__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11479__adjusted)));
    }
    __Vfunc_round_pack32__11479__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11479__rounded)) {
        __Vfunc_round_pack32__11479__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11479__adjusted)));
    }
    __Vfunc_round_pack32__11479__Vfuncout = (((0U == __Vfunc_round_pack32__11479__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11479__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11479__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11479__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11479__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11479__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11479__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11479__Vfuncout;
    __Vfunc_round_pack32__11467__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11467__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11467__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11467__adjusted = __Vfunc_round_pack32__11467__exponent;
    __Vfunc_round_pack32__11467__shifted = __Vfunc_round_pack32__11467__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11467__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11468__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11467__exponent)));
        vlSelf->__Vfunc_shift_jam27__11468__value = __Vfunc_round_pack32__11467__significand;
        __Vfunc_round_pack32__11467__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11468__distance))) {
            vlSelf->__Vfunc_shift_jam27__11468__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11468__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11468__distance))) {
            vlSelf->__Vfunc_shift_jam27__11468__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11468__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11468__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11468__value, (IData)(vlSelf->__Vfunc_shift_jam27__11468__distance)));
            vlSelf->__Vfunc_shift_jam27__11468__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11468__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11468__distance)))));
            vlSelf->__Vfunc_shift_jam27__11468__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11468__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11468__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11468__discarded))));
        }
        __Vfunc_round_pack32__11467__shifted = vlSelf->__Vfunc_shift_jam27__11468__Vfuncout;
    }
    __Vfunc_round_pack32__11467__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11467__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11467__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11467__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11467__rounded)) {
        __Vfunc_round_pack32__11467__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11467__rounded, 1U));
        __Vfunc_round_pack32__11467__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11467__adjusted)));
    }
    __Vfunc_round_pack32__11467__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11467__rounded)) {
        __Vfunc_round_pack32__11467__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11467__adjusted)));
    }
    __Vfunc_round_pack32__11467__Vfuncout = (((0U == __Vfunc_round_pack32__11467__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11467__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11467__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11467__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11467__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11467__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11467__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11467__Vfuncout;
    __Vfunc_round_pack32__11455__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11455__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11455__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11455__adjusted = __Vfunc_round_pack32__11455__exponent;
    __Vfunc_round_pack32__11455__shifted = __Vfunc_round_pack32__11455__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11455__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11456__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11455__exponent)));
        vlSelf->__Vfunc_shift_jam27__11456__value = __Vfunc_round_pack32__11455__significand;
        __Vfunc_round_pack32__11455__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11456__distance))) {
            vlSelf->__Vfunc_shift_jam27__11456__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11456__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11456__distance))) {
            vlSelf->__Vfunc_shift_jam27__11456__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11456__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11456__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11456__value, (IData)(vlSelf->__Vfunc_shift_jam27__11456__distance)));
            vlSelf->__Vfunc_shift_jam27__11456__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11456__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11456__distance)))));
            vlSelf->__Vfunc_shift_jam27__11456__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11456__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11456__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11456__discarded))));
        }
        __Vfunc_round_pack32__11455__shifted = vlSelf->__Vfunc_shift_jam27__11456__Vfuncout;
    }
    __Vfunc_round_pack32__11455__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11455__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11455__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11455__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11455__rounded)) {
        __Vfunc_round_pack32__11455__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11455__rounded, 1U));
        __Vfunc_round_pack32__11455__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11455__adjusted)));
    }
    __Vfunc_round_pack32__11455__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11455__rounded)) {
        __Vfunc_round_pack32__11455__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11455__adjusted)));
    }
    __Vfunc_round_pack32__11455__Vfuncout = (((0U == __Vfunc_round_pack32__11455__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11455__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11455__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11455__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11455__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11455__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11455__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11455__Vfuncout;
    __Vfunc_round_pack32__11443__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11443__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11443__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11443__adjusted = __Vfunc_round_pack32__11443__exponent;
    __Vfunc_round_pack32__11443__shifted = __Vfunc_round_pack32__11443__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11443__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11444__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11443__exponent)));
        vlSelf->__Vfunc_shift_jam27__11444__value = __Vfunc_round_pack32__11443__significand;
        __Vfunc_round_pack32__11443__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11444__distance))) {
            vlSelf->__Vfunc_shift_jam27__11444__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11444__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11444__distance))) {
            vlSelf->__Vfunc_shift_jam27__11444__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11444__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11444__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11444__value, (IData)(vlSelf->__Vfunc_shift_jam27__11444__distance)));
            vlSelf->__Vfunc_shift_jam27__11444__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11444__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11444__distance)))));
            vlSelf->__Vfunc_shift_jam27__11444__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11444__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11444__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11444__discarded))));
        }
        __Vfunc_round_pack32__11443__shifted = vlSelf->__Vfunc_shift_jam27__11444__Vfuncout;
    }
    __Vfunc_round_pack32__11443__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11443__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11443__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11443__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11443__rounded)) {
        __Vfunc_round_pack32__11443__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11443__rounded, 1U));
        __Vfunc_round_pack32__11443__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11443__adjusted)));
    }
    __Vfunc_round_pack32__11443__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11443__rounded)) {
        __Vfunc_round_pack32__11443__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11443__adjusted)));
    }
    __Vfunc_round_pack32__11443__Vfuncout = (((0U == __Vfunc_round_pack32__11443__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11443__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11443__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11443__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11443__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11443__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11443__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11443__Vfuncout;
    __Vfunc_round_pack32__11431__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11431__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11431__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11431__adjusted = __Vfunc_round_pack32__11431__exponent;
    __Vfunc_round_pack32__11431__shifted = __Vfunc_round_pack32__11431__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11431__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11432__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11431__exponent)));
        vlSelf->__Vfunc_shift_jam27__11432__value = __Vfunc_round_pack32__11431__significand;
        __Vfunc_round_pack32__11431__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11432__distance))) {
            vlSelf->__Vfunc_shift_jam27__11432__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11432__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11432__distance))) {
            vlSelf->__Vfunc_shift_jam27__11432__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11432__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11432__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11432__value, (IData)(vlSelf->__Vfunc_shift_jam27__11432__distance)));
            vlSelf->__Vfunc_shift_jam27__11432__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11432__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11432__distance)))));
            vlSelf->__Vfunc_shift_jam27__11432__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11432__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11432__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11432__discarded))));
        }
        __Vfunc_round_pack32__11431__shifted = vlSelf->__Vfunc_shift_jam27__11432__Vfuncout;
    }
    __Vfunc_round_pack32__11431__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11431__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11431__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11431__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11431__rounded)) {
        __Vfunc_round_pack32__11431__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11431__rounded, 1U));
        __Vfunc_round_pack32__11431__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11431__adjusted)));
    }
    __Vfunc_round_pack32__11431__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11431__rounded)) {
        __Vfunc_round_pack32__11431__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11431__adjusted)));
    }
    __Vfunc_round_pack32__11431__Vfuncout = (((0U == __Vfunc_round_pack32__11431__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11431__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11431__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11431__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11431__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11431__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11431__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11431__Vfuncout;
    __Vfunc_round_pack32__11419__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11419__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11419__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11419__adjusted = __Vfunc_round_pack32__11419__exponent;
    __Vfunc_round_pack32__11419__shifted = __Vfunc_round_pack32__11419__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11419__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11420__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11419__exponent)));
        vlSelf->__Vfunc_shift_jam27__11420__value = __Vfunc_round_pack32__11419__significand;
        __Vfunc_round_pack32__11419__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11420__distance))) {
            vlSelf->__Vfunc_shift_jam27__11420__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11420__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11420__distance))) {
            vlSelf->__Vfunc_shift_jam27__11420__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11420__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11420__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11420__value, (IData)(vlSelf->__Vfunc_shift_jam27__11420__distance)));
            vlSelf->__Vfunc_shift_jam27__11420__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11420__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11420__distance)))));
            vlSelf->__Vfunc_shift_jam27__11420__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11420__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11420__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11420__discarded))));
        }
        __Vfunc_round_pack32__11419__shifted = vlSelf->__Vfunc_shift_jam27__11420__Vfuncout;
    }
    __Vfunc_round_pack32__11419__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11419__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11419__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11419__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11419__rounded)) {
        __Vfunc_round_pack32__11419__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11419__rounded, 1U));
        __Vfunc_round_pack32__11419__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11419__adjusted)));
    }
    __Vfunc_round_pack32__11419__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11419__rounded)) {
        __Vfunc_round_pack32__11419__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11419__adjusted)));
    }
    __Vfunc_round_pack32__11419__Vfuncout = (((0U == __Vfunc_round_pack32__11419__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11419__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11419__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11419__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11419__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11419__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11419__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11419__Vfuncout;
    __Vfunc_round_pack32__11407__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11407__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11407__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11407__adjusted = __Vfunc_round_pack32__11407__exponent;
    __Vfunc_round_pack32__11407__shifted = __Vfunc_round_pack32__11407__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11407__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11408__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11407__exponent)));
        vlSelf->__Vfunc_shift_jam27__11408__value = __Vfunc_round_pack32__11407__significand;
        __Vfunc_round_pack32__11407__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11408__distance))) {
            vlSelf->__Vfunc_shift_jam27__11408__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11408__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11408__distance))) {
            vlSelf->__Vfunc_shift_jam27__11408__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11408__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11408__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11408__value, (IData)(vlSelf->__Vfunc_shift_jam27__11408__distance)));
            vlSelf->__Vfunc_shift_jam27__11408__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11408__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11408__distance)))));
            vlSelf->__Vfunc_shift_jam27__11408__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11408__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11408__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11408__discarded))));
        }
        __Vfunc_round_pack32__11407__shifted = vlSelf->__Vfunc_shift_jam27__11408__Vfuncout;
    }
    __Vfunc_round_pack32__11407__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11407__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11407__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11407__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11407__rounded)) {
        __Vfunc_round_pack32__11407__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11407__rounded, 1U));
        __Vfunc_round_pack32__11407__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11407__adjusted)));
    }
    __Vfunc_round_pack32__11407__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11407__rounded)) {
        __Vfunc_round_pack32__11407__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11407__adjusted)));
    }
    __Vfunc_round_pack32__11407__Vfuncout = (((0U == __Vfunc_round_pack32__11407__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11407__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11407__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11407__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11407__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11407__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11407__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11407__Vfuncout;
    __Vfunc_round_pack32__11395__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11395__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11395__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11395__adjusted = __Vfunc_round_pack32__11395__exponent;
    __Vfunc_round_pack32__11395__shifted = __Vfunc_round_pack32__11395__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11395__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11396__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11395__exponent)));
        vlSelf->__Vfunc_shift_jam27__11396__value = __Vfunc_round_pack32__11395__significand;
        __Vfunc_round_pack32__11395__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11396__distance))) {
            vlSelf->__Vfunc_shift_jam27__11396__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11396__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11396__distance))) {
            vlSelf->__Vfunc_shift_jam27__11396__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11396__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11396__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11396__value, (IData)(vlSelf->__Vfunc_shift_jam27__11396__distance)));
            vlSelf->__Vfunc_shift_jam27__11396__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11396__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11396__distance)))));
            vlSelf->__Vfunc_shift_jam27__11396__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11396__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11396__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11396__discarded))));
        }
        __Vfunc_round_pack32__11395__shifted = vlSelf->__Vfunc_shift_jam27__11396__Vfuncout;
    }
    __Vfunc_round_pack32__11395__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11395__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11395__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11395__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11395__rounded)) {
        __Vfunc_round_pack32__11395__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11395__rounded, 1U));
        __Vfunc_round_pack32__11395__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11395__adjusted)));
    }
    __Vfunc_round_pack32__11395__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11395__rounded)) {
        __Vfunc_round_pack32__11395__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11395__adjusted)));
    }
    __Vfunc_round_pack32__11395__Vfuncout = (((0U == __Vfunc_round_pack32__11395__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11395__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11395__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11395__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11395__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11395__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11395__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11395__Vfuncout;
    __Vfunc_round_pack32__11383__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11383__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11383__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11383__adjusted = __Vfunc_round_pack32__11383__exponent;
    __Vfunc_round_pack32__11383__shifted = __Vfunc_round_pack32__11383__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11383__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11384__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11383__exponent)));
        vlSelf->__Vfunc_shift_jam27__11384__value = __Vfunc_round_pack32__11383__significand;
        __Vfunc_round_pack32__11383__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11384__distance))) {
            vlSelf->__Vfunc_shift_jam27__11384__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11384__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11384__distance))) {
            vlSelf->__Vfunc_shift_jam27__11384__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11384__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11384__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11384__value, (IData)(vlSelf->__Vfunc_shift_jam27__11384__distance)));
            vlSelf->__Vfunc_shift_jam27__11384__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11384__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11384__distance)))));
            vlSelf->__Vfunc_shift_jam27__11384__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11384__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11384__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11384__discarded))));
        }
        __Vfunc_round_pack32__11383__shifted = vlSelf->__Vfunc_shift_jam27__11384__Vfuncout;
    }
    __Vfunc_round_pack32__11383__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11383__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11383__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11383__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11383__rounded)) {
        __Vfunc_round_pack32__11383__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11383__rounded, 1U));
        __Vfunc_round_pack32__11383__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11383__adjusted)));
    }
    __Vfunc_round_pack32__11383__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11383__rounded)) {
        __Vfunc_round_pack32__11383__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11383__adjusted)));
    }
    vlSelf->__Vfunc_round_pack32__11383__Vfuncout = 
        (((0U == __Vfunc_round_pack32__11383__significand) 
          | (0U == __Vfunc_round_pack32__11383__rounded))
          ? ((QData)((IData)(__Vfunc_round_pack32__11383__negative)) 
             << 0x1fU) : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11383__adjusted))
                           ? 0x100000000ULL : (((QData)((IData)(__Vfunc_round_pack32__11383__negative)) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_round_pack32__11383__biased) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & __Vfunc_round_pack32__11383__rounded)))))));
}
