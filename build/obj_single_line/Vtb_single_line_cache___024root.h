// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_single_line_cache.h for the primary calling header

#ifndef VERILATED_VTB_SINGLE_LINE_CACHE___024ROOT_H_
#define VERILATED_VTB_SINGLE_LINE_CACHE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_single_line_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_single_line_cache___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_single_line_cache__DOT__clk;
    CData/*0:0*/ tb_single_line_cache__DOT__rst_n;
    CData/*0:0*/ tb_single_line_cache__DOT__write_enable;
    CData/*0:0*/ tb_single_line_cache__DOT__dut__DOT__hit;
    CData/*0:0*/ tb_single_line_cache__DOT__dut__DOT__valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_single_line_cache__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_single_line_cache__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_single_line_cache__DOT__addr;
    IData/*31:0*/ tb_single_line_cache__DOT__write_data;
    IData/*31:0*/ tb_single_line_cache__DOT__errors;
    IData/*29:0*/ tb_single_line_cache__DOT__dut__DOT__stored_tag;
    IData/*31:0*/ tb_single_line_cache__DOT__dut__DOT__stored_data;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4bda7a2b__0;

    // INTERNAL VARIABLES
    Vtb_single_line_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_single_line_cache___024root(Vtb_single_line_cache__Syms* symsp, const char* namep);
    ~Vtb_single_line_cache___024root();
    VL_UNCOPYABLE(Vtb_single_line_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
