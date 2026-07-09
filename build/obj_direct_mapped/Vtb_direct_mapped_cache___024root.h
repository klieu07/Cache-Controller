// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_direct_mapped_cache.h for the primary calling header

#ifndef VERILATED_VTB_DIRECT_MAPPED_CACHE___024ROOT_H_
#define VERILATED_VTB_DIRECT_MAPPED_CACHE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_direct_mapped_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_direct_mapped_cache___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_direct_mapped_cache__DOT__clk;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__rst_n;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__cpu_req;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__mem_ready;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__do_read__Vstatic__was_miss;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__dut__DOT__cpu_stall;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__dut__DOT__state;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__dut__DOT__hit_comb;
    CData/*2:0*/ tb_direct_mapped_cache__DOT__mem__DOT__cnt;
    CData/*0:0*/ tb_direct_mapped_cache__DOT__mem__DOT__busy;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_direct_mapped_cache__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__cpu_addr;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__cpu_rdata;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__hits;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__misses;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__do_read__Vstatic__addr;
    VlWide<8>/*255:0*/ tb_direct_mapped_cache__DOT__do_read__Vstatic__label;
    VlWide<4>/*127:0*/ tb_direct_mapped_cache__DOT__dut__DOT__mem_rdata;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__dut__DOT__i;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__dut__DOT__w;
    IData/*31:0*/ tb_direct_mapped_cache__DOT__mem__DOT__addr_latched;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*0:0*/, 8> tb_direct_mapped_cache__DOT__dut__DOT__valid_array;
    VlUnpacked<IData/*24:0*/, 8> tb_direct_mapped_cache__DOT__dut__DOT__tag_array;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 8> tb_direct_mapped_cache__DOT__dut__DOT__data_array;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7f7917ad__0;

    // INTERNAL VARIABLES
    Vtb_direct_mapped_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_direct_mapped_cache___024root(Vtb_direct_mapped_cache__Syms* symsp, const char* namep);
    ~Vtb_direct_mapped_cache___024root();
    VL_UNCOPYABLE(Vtb_direct_mapped_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
