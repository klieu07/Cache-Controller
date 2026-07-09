// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_trace_driven.h for the primary calling header

#ifndef VERILATED_VTB_TRACE_DRIVEN___024ROOT_H_
#define VERILATED_VTB_TRACE_DRIVEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_trace_driven__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_trace_driven___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_trace_driven__DOT__clk;
    CData/*0:0*/ tb_trace_driven__DOT__rst_n;
    CData/*0:0*/ tb_trace_driven__DOT__cpu_req;
    CData/*0:0*/ tb_trace_driven__DOT__cpu_we;
    CData/*0:0*/ tb_trace_driven__DOT__mem_ready;
    CData/*0:0*/ tb_trace_driven__DOT__mem_wr_done;
    CData/*0:0*/ tb_trace_driven__DOT__do_op__Vstatic__rw;
    CData/*0:0*/ tb_trace_driven__DOT__do_op__Vstatic__was_miss;
    CData/*0:0*/ tb_trace_driven__DOT__dut__DOT__cpu_stall;
    CData/*0:0*/ tb_trace_driven__DOT__dut__DOT__hit_comb_r;
    CData/*0:0*/ tb_trace_driven__DOT__dut__DOT__hit_way_r;
    CData/*0:0*/ tb_trace_driven__DOT__dut__DOT__victim_way_r;
    CData/*0:0*/ tb_trace_driven__DOT__dut__DOT__victim_is_invalid_r;
    CData/*0:0*/ tb_trace_driven__DOT__dut__DOT__need_writeback;
    CData/*1:0*/ tb_trace_driven__DOT__dut__DOT__state;
    CData/*0:0*/ tb_trace_driven__DOT__mem__DOT__busy;
    CData/*0:0*/ tb_trace_driven__DOT__mem__DOT__op_is_write;
    CData/*2:0*/ tb_trace_driven__DOT__mem__DOT__cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_trace_driven__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_trace_driven__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_trace_driven__DOT____VlemExpr_0;
    IData/*31:0*/ tb_trace_driven__DOT__cpu_addr;
    IData/*31:0*/ tb_trace_driven__DOT__cpu_wdata;
    VlWide<4>/*127:0*/ tb_trace_driven__DOT__mem_rdata;
    IData/*31:0*/ tb_trace_driven__DOT__hits;
    IData/*31:0*/ tb_trace_driven__DOT__misses;
    IData/*31:0*/ tb_trace_driven__DOT__do_op__Vstatic__addr;
    IData/*31:0*/ tb_trace_driven__DOT__do_op__Vstatic__wdata;
    IData/*31:0*/ tb_trace_driven__DOT__fd;
    IData/*31:0*/ tb_trace_driven__DOT__scan_ret;
    IData/*31:0*/ tb_trace_driven__DOT__trace_addr;
    IData/*31:0*/ tb_trace_driven__DOT__n_ops;
    VlWide<4>/*127:0*/ tb_trace_driven__DOT__dut__DOT__mem_wr_data_r;
    IData/*31:0*/ tb_trace_driven__DOT__dut__DOT__si;
    IData/*31:0*/ tb_trace_driven__DOT__dut__DOT__wi;
    IData/*31:0*/ tb_trace_driven__DOT__dut__DOT__wj;
    IData/*31:0*/ tb_trace_driven__DOT__mem__DOT__addr_latched;
    VlWide<4>/*127:0*/ tb_trace_driven__DOT__mem__DOT__wdata_latched;
    IData/*31:0*/ tb_trace_driven__DOT__mem__DOT__li;
    IData/*31:0*/ tb_trace_driven__DOT__mem__DOT__wj;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_trace_driven__DOT__op_str;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8> tb_trace_driven__DOT__dut__DOT__valid_array;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8> tb_trace_driven__DOT__dut__DOT__dirty_array;
    VlUnpacked<VlUnpacked<IData/*24:0*/, 2>, 8> tb_trace_driven__DOT__dut__DOT__tag_array;
    VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2>, 8> tb_trace_driven__DOT__dut__DOT__data_array;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 8> tb_trace_driven__DOT__dut__DOT__lru_counter;
    VlUnpacked<CData/*0:0*/, 256> tb_trace_driven__DOT__mem__DOT__backing_written;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 256> tb_trace_driven__DOT__mem__DOT__backing_data;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 256>, false, CData/*0:0*/, 1> __VdlyCommitQueuetb_trace_driven__DOT__mem__DOT__backing_written;
    double tb_trace_driven__DOT__hit_rate;
    double tb_trace_driven__DOT__amat;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb5da1696__0;

    // INTERNAL VARIABLES
    Vtb_trace_driven__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_trace_driven___024root(Vtb_trace_driven__Syms* symsp, const char* namep);
    ~Vtb_trace_driven___024root();
    VL_UNCOPYABLE(Vtb_trace_driven___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
