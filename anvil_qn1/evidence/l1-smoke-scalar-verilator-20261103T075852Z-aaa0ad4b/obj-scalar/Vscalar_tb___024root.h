// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscalar_tb.h for the primary calling header

#ifndef VERILATED_VSCALAR_TB___024ROOT_H_
#define VERILATED_VSCALAR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vscalar_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscalar_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ scalar_tb__DOT__clk;
        CData/*0:0*/ scalar_tb__DOT__rst_n;
        CData/*0:0*/ scalar_tb__DOT__in_valid;
        CData/*0:0*/ scalar_tb__DOT__out_ready;
        CData/*2:0*/ scalar_tb__DOT__in_op;
        CData/*0:0*/ scalar_tb__DOT__in_error;
        CData/*0:0*/ scalar_tb__DOT__in_ready;
        CData/*0:0*/ scalar_tb__DOT__out_valid;
        CData/*1:0*/ scalar_tb__DOT__dut__DOT__state;
        CData/*2:0*/ scalar_tb__DOT__dut__DOT__operation;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__elapsed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__result_failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__negative1;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__negative2;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__negative3;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__negative4;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__subtract1;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__subtract2;
        CData/*4:0*/ scalar_tb__DOT__dut__DOT__add__DOT__failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__add__DOT__error5;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__add__DOT__left_shift;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__shift_a;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__shift_b;
        CData/*3:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__negative;
        CData/*3:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__error4;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__ready;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__shift_a;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__shift_b;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__below_one;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__active;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__done_reg;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__negative;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__zero;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__cycle;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__result_failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__take_bit;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__ready;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__shift;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__active;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__done_reg;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__negative;
        CData/*5:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__cycle;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__result_failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed;
        CData/*0:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__take_bit;
        CData/*5:0*/ __Vfunc_leading_zero32__2__Vfuncout;
        CData/*5:0*/ __Vfunc_leading_zero32__2__count;
        CData/*5:0*/ __Vfunc_leading_zero32__8__Vfuncout;
        CData/*5:0*/ __Vfunc_leading_zero32__8__count;
        CData/*5:0*/ __Vfunc_leading_zero32__9__Vfuncout;
        CData/*5:0*/ __Vfunc_leading_zero32__9__count;
        CData/*5:0*/ __Vfunc_leading_zero32__14__Vfuncout;
        CData/*5:0*/ __Vfunc_leading_zero32__14__count;
        CData/*5:0*/ __Vfunc_leading_zero32__15__Vfuncout;
        CData/*5:0*/ __Vfunc_leading_zero32__15__count;
        CData/*5:0*/ __Vfunc_leading_zero32__20__Vfuncout;
        CData/*5:0*/ __Vfunc_leading_zero32__20__count;
        CData/*2:0*/ __Vdly__scalar_tb__DOT__dut__DOT__operation;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__failed;
    };
    struct {
        CData/*5:0*/ __Vdly__scalar_tb__DOT__dut__DOT__elapsed;
        CData/*1:0*/ __Vdly__scalar_tb__DOT__dut__DOT__state;
        CData/*4:0*/ __Vdly__scalar_tb__DOT__dut__DOT__add__DOT__failed;
        CData/*3:0*/ __Vdly__scalar_tb__DOT__dut__DOT__multiply__DOT__failed;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__active;
        CData/*5:0*/ __Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__cycle;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__failed;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_failed;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__active;
        CData/*5:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__cycle;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__failed;
        CData/*0:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_failed;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__scalar_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__scalar_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__add__DOT__large_exponent;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__add__DOT__distance1;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__add__DOT__exponent1;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__add__DOT__exponent2;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__add__DOT__exponent3;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__add__DOT__exponent4;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_a1;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__exponent_b1;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__exponent2;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__exponent3;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__exponent;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__input_exponent;
        SData/*11:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__exponent;
        SData/*11:0*/ __VdfgTmp_h7232e3dc__0;
        SData/*11:0*/ __VdfgTmp_heaa3740b__0;
        SData/*11:0*/ __Vfunc_shift_jam27__4__distance;
        SData/*11:0*/ __Vfunc_shift_jam27__11__distance;
        SData/*11:0*/ __Vfunc_shift_jam27__17__distance;
        SData/*11:0*/ __Vfunc_shift_jam27__22__distance;
        IData/*31:0*/ scalar_tb__DOT__in_a;
        IData/*31:0*/ scalar_tb__DOT__in_b;
        IData/*31:0*/ scalar_tb__DOT__operation;
        IData/*31:0*/ scalar_tb__DOT__error_value;
        IData/*31:0*/ scalar_tb__DOT__expected_error;
        IData/*31:0*/ scalar_tb__DOT__count;
        IData/*31:0*/ scalar_tb__DOT__cycles;
        IData/*31:0*/ scalar_tb__DOT__expected;
        VlWide<128>/*4095:0*/ scalar_tb__DOT__filename;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__a;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__b;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__data;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__add_b;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__add__DOT__large_value;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__add__DOT__small_value;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__add__DOT__large1;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__add__DOT__small1;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__add__DOT__large2;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__add__DOT__small2;
        IData/*27:0*/ scalar_tb__DOT__dut__DOT__add__DOT__sum3;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__add__DOT__significand4;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__add__DOT__value5;
        IData/*27:0*/ scalar_tb__DOT__dut__DOT__add__DOT__sum_next;
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__raw_a;
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__raw_b;
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_a1;
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__mantissa_b1;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__significand3;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__value4;
    };
    struct {
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__normalized_a;
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__normalized_b;
        IData/*23:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__divisor;
        IData/*24:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__remainder;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__quotient;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__value;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value;
        IData/*25:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__next_remainder;
        IData/*28:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__remainder;
        IData/*26:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__root;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__value;
        IData/*31:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value;
        IData/*30:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__next_remainder;
        IData/*31:0*/ __Vfunc_leading_zero32__2__value;
        IData/*31:0*/ __Vfunc_leading_zero32__2__part;
        IData/*26:0*/ __Vfunc_shift_jam27__4__Vfuncout;
        IData/*26:0*/ __Vfunc_shift_jam27__4__value;
        IData/*26:0*/ __Vfunc_shift_jam27__4__shifted;
        IData/*26:0*/ __Vfunc_shift_jam27__4__discarded;
        IData/*31:0*/ __Vfunc_leading_zero32__8__value;
        IData/*31:0*/ __Vfunc_leading_zero32__8__part;
        IData/*31:0*/ __Vfunc_leading_zero32__9__value;
        IData/*31:0*/ __Vfunc_leading_zero32__9__part;
        IData/*26:0*/ __Vfunc_shift_jam27__11__Vfuncout;
        IData/*26:0*/ __Vfunc_shift_jam27__11__value;
        IData/*26:0*/ __Vfunc_shift_jam27__11__shifted;
        IData/*26:0*/ __Vfunc_shift_jam27__11__discarded;
        IData/*31:0*/ __Vfunc_leading_zero32__14__value;
        IData/*31:0*/ __Vfunc_leading_zero32__14__part;
        IData/*31:0*/ __Vfunc_leading_zero32__15__value;
        IData/*31:0*/ __Vfunc_leading_zero32__15__part;
        IData/*26:0*/ __Vfunc_shift_jam27__17__Vfuncout;
        IData/*26:0*/ __Vfunc_shift_jam27__17__value;
        IData/*26:0*/ __Vfunc_shift_jam27__17__shifted;
        IData/*26:0*/ __Vfunc_shift_jam27__17__discarded;
        IData/*31:0*/ __Vfunc_leading_zero32__20__value;
        IData/*31:0*/ __Vfunc_leading_zero32__20__part;
        IData/*26:0*/ __Vfunc_shift_jam27__22__Vfuncout;
        IData/*26:0*/ __Vfunc_shift_jam27__22__value;
        IData/*26:0*/ __Vfunc_shift_jam27__22__shifted;
        IData/*26:0*/ __Vfunc_shift_jam27__22__discarded;
        IData/*31:0*/ __Vdly__scalar_tb__DOT__dut__DOT__a;
        IData/*31:0*/ __Vdly__scalar_tb__DOT__dut__DOT__b;
        IData/*26:0*/ __Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__quotient;
        IData/*31:0*/ __Vdly__scalar_tb__DOT__dut__DOT__divide__DOT__rounded_value;
        IData/*26:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__root;
        IData/*31:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__rounded_value;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ scalar_tb__DOT__dut__DOT__add__DOT__packed5;
        QData/*47:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__product2;
        QData/*32:0*/ scalar_tb__DOT__dut__DOT__multiply__DOT__packed4;
        QData/*32:0*/ scalar_tb__DOT__dut__DOT__divide__DOT__packed_result;
        QData/*53:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__pairs;
        QData/*32:0*/ scalar_tb__DOT__dut__DOT__square_root__DOT__packed_result;
        QData/*53:0*/ __Vdly__scalar_tb__DOT__dut__DOT__square_root__DOT__pairs;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he0636b2e__0;
    VlTriggerScheduler __VtrigSched_he063696b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vscalar_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vscalar_tb___024root(Vscalar_tb__Syms* symsp, const char* v__name);
    ~Vscalar_tb___024root();
    VL_UNCOPYABLE(Vscalar_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
